#include "TAxis.h"
#include "TCanvas.h"
#include "TF1.h"
#include "TGraph.h"
#include "TLegend.h"
#include "TMath.h"
#include "TMultiGraph.h"

#include <fstream>
#include <iostream>

#define POW2(x) (pow(x, 2))
double l = 9.8; // verify this
double g = 9.8;
double q = 1;
double alpha = 0;
double omega_d = 1;
double k = 1;
TString path = "q1/plots/";

using namespace std;
// This function is dependent of the problem. Must be filled with the respectevely derivatives.
void plot_canvas(vector<double> *x, vector<double> *y, TString title, TString filename);
void plot_canvas_overlayed(vector<double> *x, vector<double> *y1, vector<double> *y2, vector<double> *y3, TString title, TString filename);
void derivada(double x, vector<double> *S, vector<double> *f);
void RungeKutta4(vector<double> *y, double x, double h, function<void(double x, vector<double> *, vector<double> *)> dydx);
void pendulo(unsigned int option_method, unsigned int question, double par_alpha, unsigned int path_alpha);
void rerun();
void rerunq2();

void rerun() {
    for (unsigned int i = 1; i <= 3; i++) {
        pendulo(i, 1, 0, 1);
    }
}
void rerunq2() {
    for (unsigned int i = 1; i <= 3; i++) {
        pendulo(i, 2, 0.5, 1);
        pendulo(i, 2, 1.2, 2);
    }
}
void rerunq3() {
    for (unsigned int i = 1; i <= 3; i++) {
        pendulo(i, 3, 1, 1);
        pendulo(i, 3, 3, 2);
        pendulo(i, 3, 3, 3);
        pendulo(i, 3, 3, 4);
        pendulo(i, 3, 3, 5);
        pendulo(i, 3, 3, 6);
    }
}
void pendulo_forcado(double x, vector<double> *S, vector<double> *f) {
    (*f)[0] = (*S)[1];                                                          //omega_0
    (*f)[1] = (-g / l) * sin((*S)[0]) - q * (*S)[1] + alpha * sin(omega_d * x); // (-g/l)*theta_0
}

void derivada(double x, vector<double> *S, vector<double> *f) {
    (*f)[0] = (*S)[1];                 //omega_0
    (*f)[1] = (-g / l) * sin((*S)[0]); // (-g/l)*theta_0
}
void harm_simples(double x, vector<double> *S, vector<double> *f) {
    (*f)[0] = (*S)[1];                  //=omega_0
    (*f)[1] = -k * pow((*S)[0], alpha); // =(-g/l)*theta_0
}

void RungeKutta4(vector<double> *y, double x, double h, function<void(double x, vector<double> *, vector<double> *)> dydx) {
    vector<double> f0, f1, f2, f3, yTemp;
    for (int i = 0; i < y->size(); i++) {
        f0.push_back(0);
        f1.push_back(0);
        f2.push_back(0);
        f3.push_back(0);
        yTemp.push_back(0);
    }

    dydx(x, y, &f0);
    for (int i = 0; i < y->size(); ++i)
        yTemp[i] = (*y)[i] + h * f0[i] / 2;
    dydx(x + 0.5 * h, &yTemp, &f1);
    for (int i = 0; i < y->size(); ++i)
        yTemp[i] = (*y)[i] + h * f1[i] / 2;
    dydx(x + 0.5 * h, &yTemp, &f2);
    for (int i = 0; i < y->size(); ++i)
        yTemp[i] = (*y)[i] + h * f2[i];
    dydx(x + h, &yTemp, &f3);
    for (int i = 0; i < y->size(); ++i)
        (*y)[i] = (*y)[i] + h * (f0[i] + 2 * f1[i] + 2 * f2[i] + f3[i]) / 6;
}
// This calls a simple euler-method step.
void euler(vector<double> *S, double x, double h, function<void(double x, vector<double> *, vector<double> *)> dydx) {
    vector<double> f;
    for (int i = 0; i < S->size(); i++)
        f.push_back(0);
    dydx(x, S, &f);
    for (int i = 0; i < S->size(); i++) {
        (*S)[i] = (*S)[i] + h * f[i];
    }
}
// This calls a euler-crommer step.
void euler_cromer(vector<double> *S, double x, double h, function<void(double x, vector<double> *, vector<double> *)> dydx) {
    vector<double> f0, f1, yTemp;
    for (int i = 0; i < S->size(); i++) {
        f0.push_back(0);
        f1.push_back(0);
        yTemp.push_back(0);
    }
    dydx(x, S, &f0);
    for (int i = 0; i < S->size(); i++) {
        yTemp[i] = (*S)[i] + h * f0[i];
    }

    dydx(x, &yTemp, &f1);

    // look for a way to write a most general use
    // (*S)[0] = yTemp[0];
    // (*S)[1] = (*S)[1] + h * f1[1];
    (*S)[0] = (*S)[0] + h * f1[0];
    (*S)[1] = yTemp[1];

    // for (int i = 0; i < S->size(); i++) {
    //     (*S)[i] = (*S)[i] + h * f1[i];
    // }
}

void pendulo(unsigned int option_method = 1, unsigned int question = 1, double par_alpha = 0, unsigned int path_alpha = 1) {
    double theta_0 = 0.15; //rad
    double omega_0 = 0.;   //rad/s
    double h = 0.01;       //s
    h = 0.04;
    double period = 2 * M_PI * sqrt(l / g);
    double mass = 1;
    function<void(double x, vector<double> *, vector<double> *)> dydx;

    if (question == 1) {
        dydx = &derivada;
        path = "q1/plots/";
    } else if (question == 2) {
        dydx = &pendulo_forcado;
        if (path_alpha == 1) {
            // path = "q2/itemd/alpha0.5/plots/";
            path = "q2/itemd/alpha0.5/plots/";
        } else if (path_alpha == 2) {
            // path = "q2/itemd/alpha1.2/plots/";
            path = "q2/itemd/alpha1.2/plots/";
        }

        theta_0 = 0.2; //rad
        omega_0 = 0.;  //rad/s
        h = 0.04;      //s
        period = 2 * M_PI * sqrt(l / g);
        mass = 1;
        q = 0.5;
        omega_d = 2. / 3;
        omega_d = 4. / 3;
        alpha = par_alpha;
    } else if (question == 3) {
        dydx = &harm_simples;
        if (path_alpha == 1) {
            path = "q3/plots/";
        } else if (path_alpha == 2) {
            path = "q3/alpha3/theta0.2/plots/";
        } else if (path_alpha == 3) {
            theta_0 = 0.4;
            path = "q3/alpha3/theta0.4/plots/";
        } else if (path_alpha == 4) {
            theta_0 = 0.6;
            path = "q3/alpha3/theta0.6/plots/";
        } else if (path_alpha == 5) {
            theta_0 = 0.8;
            path = "q3/alpha3/theta0.8/plots/";
        } else if (path_alpha == 6) {
            theta_0 = 1;
            path = "q3/alpha3/theta1/plots/";
        }
        alpha = par_alpha;
    }

    vector<double> S = {theta_0, omega_0};
    vector<double> theta, t, omega, kin_energy, pot_energy, tot_energy, theta_poincare, omega_poincare;
    cout << Form("period = %f", period) << endl;
    cout << Form("5*period = %f", 5 * period) << endl;
    bool keep_running = true;

    function<void(vector<double> *, double, double, function<void(double x, vector<double> *, vector<double> *)>)> method;
    TString method_name;
    if (option_method == 1) {
        method = &euler;
        method_name = "euler";
    } else if (option_method == 2) {
        method = &euler_cromer;
        method_name = "ec";

    } else if (option_method == 3) {
        method = &RungeKutta4;
        method_name = "RK";
    }
    int k = 0, n = 1;
    while (keep_running) {
        method(&S, h * k, h, dydx);
        theta.push_back(S[0]);
        omega.push_back(S[1]);
        double T = mass * S[1] * S[1] * l * l / 2;
        double U = mass * g * (l - l * cos(S[0]));
        kin_energy.push_back(T);
        pot_energy.push_back(U);
        tot_energy.push_back(U + T);

        t.push_back(h * k);
        if (abs(h * k - 2 * M_PI * n / omega_d) < h / 2) {
            n++;
            theta_poincare.push_back(S[0]);
            omega_poincare.push_back(S[1]);
        }
        // possible to use break as well
        //if (k > 1000) keep_running = false;
        // if ((h * k) > (15 * period)) keep_running = false;
        if ((h * k) > (5 * period)) keep_running = false;
        k++;
    }
    cout << Form("break period = %f", h * (k - 1)) << endl;
    cout << Form("k = %d", k) << endl;
    cout << Form("t = %f", h * k) << endl;
    cout << Form("numero de pontos na seção de poincare = %d", n) << endl;

    plot_canvas(&t, &theta, ";t(s);#theta(rad)", Form("theta_t_") + method_name);
    plot_canvas(&t, &omega, ";t(s);#omega(rad/s)", Form("omega_t_") + method_name);
    plot_canvas(&t, &kin_energy, ";t(s);T(J)", Form("T_t_") + method_name);
    plot_canvas(&t, &pot_energy, ";t(s);U(J)", Form("U_t_") + method_name);
    plot_canvas(&t, &tot_energy, ";t(s);E(J)", Form("E_t_") + method_name);
    plot_canvas(&theta, &omega, ";#theta(rad);#omega(rad/s)", Form("theta_omega_") + method_name);
    plot_canvas(&theta_poincare, &omega_poincare, ";#theta(rad);#omega(rad/s)", Form("poincare_") + method_name);
    plot_canvas_overlayed(&t, &pot_energy, &kin_energy, &tot_energy, ";t(s);E(J)", Form("Energies_t_") + method_name);
}

void plot_canvas(vector<double> *x, vector<double> *y, TString title = "", TString filename = "") { //title must have same pattern of TH1 constructor => "name; axisx; axisy"
    TCanvas *c = new TCanvas("c", "", 900, 600);
    c->SetGrid();

    TGraph *gr = new TGraph(x->size(), &x->at(0), &y->at(0));

    //getting names
    Ssiz_t from = 0;
    TString gtitle, yaxistitle, xaxistitle;
    title.Tokenize(gtitle, from, ";");
    title.Tokenize(xaxistitle, from, ";");
    title.Tokenize(yaxistitle, from, ";");
    gr->SetTitle(gtitle);
    gr->GetXaxis()->SetTitle(xaxistitle);
    gr->GetYaxis()->SetTitle(yaxistitle);

    gr->Draw("AC*");
    c->SaveAs(path + filename + Form(".png"));
    c->SaveAs(path + filename + Form(".C"));

    delete gr;
    c->Close();
}

void plot_canvas_overlayed(vector<double> *x, vector<double> *y1, vector<double> *y2, vector<double> *y3, TString title = "", TString filename = "") { //title must have same pattern of TH1 constructor => "name; axisx; axisy"
    TCanvas *c = new TCanvas("c", "", 900, 600);
    c->SetGrid();
    TGraph *gr1 = new TGraph(x->size(), &x->at(0), &y1->at(0));
    gr1->SetName("gr1");
    gr1->SetLineColor(kRed);
    gr1->SetMarkerStyle(20);
    gr1->SetMarkerColor(kRed);
    gr1->SetMarkerSize(.5);
    TGraph *gr2 = new TGraph(x->size(), &x->at(0), &y2->at(0));
    gr2->SetName("gr2");
    gr2->SetLineColor(kBlue);
    gr2->SetMarkerStyle(20);
    gr2->SetMarkerColor(kBlue);
    gr2->SetMarkerSize(.5);

    TGraph *gr3 = new TGraph(x->size(), &x->at(0), &y3->at(0));
    gr3->SetName("gr3");
    gr3->SetMarkerStyle(20);
    gr3->SetMarkerSize(.5);

    TMultiGraph *mg = new TMultiGraph();

    //getting names
    Ssiz_t from = 0;
    TString gtitle, yaxistitle, xaxistitle;
    title.Tokenize(gtitle, from, ";");
    title.Tokenize(yaxistitle, from, ";");
    title.Tokenize(xaxistitle, from, ";");

    mg->Add(gr3, "ACP");
    mg->Add(gr1, "ACP");
    mg->Add(gr2, "ACP");

    // gPad->Modified();
    // mg->GetXaxis()->SetLimits(0, 35.);
    // mg->GetYaxis()->SetLimits(0, 4.);
    mg->Draw("ACP");
    mg->SetTitle(gtitle);
    mg->GetXaxis()->SetTitle(xaxistitle);
    mg->GetYaxis()->SetTitle(yaxistitle);

    TLegend *leg = new TLegend(0.83, 0.83, 1 - 0.03, 1 - 0.03);
    //TLegend *leg = new TLegend();

    leg->AddEntry(gr1, "kinect energy", "p");
    leg->AddEntry(gr2, "potential energy", "p");
    leg->AddEntry(gr3, "total energy", "p");

    leg->Draw();
    c->SaveAs(path + filename + Form(".png"));
    c->BuildLegend();
    delete gr1, gr2, gr3, mg;
    c->Close();
}