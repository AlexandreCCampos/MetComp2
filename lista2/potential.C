#include "TArrow.h"
#include "TAxis.h"
#include "TCanvas.h"
#include "TF1.h"
#include "TFile.h"
#include "TGaxis.h"
#include "TGraph.h"
#include "TGraph2D.h"
#include "TLegend.h"
#include "TMath.h"
#include "TMultiGraph.h"

#include <fstream>
#include <iostream>
#include <vector>

#define POW2(x) (pow(x, 2))

using namespace std;

template <typename T>
void display_matrix(vector<vector<T>> *vec) {
    // void display_matrix(vector<vector<double>> *vec) {

    // Displaying the 2D vector
    for (int i = 0; i < vec->size(); i++) {
        for (int j = 0; j < (vec->at(i)).size(); j++) {
            cout << (*vec)[i][j] << " ";
        }
        cout << endl;
    }
}
void initialize_V(vector<vector<double>> *vec, vector<vector<bool>> *map) {
    // Elements to insert in column
    int num = 0, ROW = 10, COL = 10;

    // Inserting elements into vector
    for (int i = 0; i < ROW; i++) {
        // Vector to store column elements
        vector<double> v1;
        vector<bool> v1_bool;

        for (int j = 0; j < COL; j++) {
            if (i == 0 || j == 0 || i == (ROW - 1) || j == (COL - 1)) num = 1;
            v1.push_back(num);
            v1_bool.push_back(num);
            num = 0;
        }

        // Pushing back above 1D vector
        // to create the 2D vector
        vec->push_back(v1);
        map->push_back(v1_bool);
    }
    display_matrix(vec);
    //display_matrix(map);
}

double update_V(vector<vector<double>> *V) {
    vector<vector<double>> V_updated = *V;
    vector<vector<double>> V_convergence = *V; //Delta V - probable not gonna be used
    double mean_convergence = 0;
    int count = 0;
    int ROW = V->size();
    int COL = (V->at(0)).size();
    for (int i = (0 + 1); i < (ROW - 1); i++) {
        for (int j = (0 + 1); j < (COL - 1); j++) {
            if (i == 0 || j == 0 || i == (ROW - 1) || j == (COL - 1) || (i == 5 && j == 5) || (i == 4 && j == 4) || (i == 5 && j == 4) || (i == 4 && j == 5)) continue; //boundary condition
            (V_updated)[i][j] = (1. / 4) * ((*V)[i - 1][j] + (*V)[i + 1][j] + (*V)[i][j - 1] + (*V)[i][j + 1]);
            mean_convergence += (V_updated)[i][j] - (*V)[i][j];
            count++;
        }
    }
    *V = V_updated;
    return mean_convergence / count;
}
void eletric_field_calc(vector<vector<double>> *V, vector<vector<double>> *Ex, vector<vector<double>> *Ey) {

    int ROW = V->size();
    int COL = (V->at(0)).size();
    double debug;
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            if ((i == 0 || j == 0) && (i < ROW - 1 && j < COL - 1)) {
                debug = (-1.) * ((*V)[i][j + 1] - (*V)[i][j]);
                (*Ex)[i][j] = (-1.) * ((*V)[i][j + 1] - (*V)[i][j]);
                (*Ey)[i][j] = (-1.) * ((*V)[i + 1][j] - (*V)[i][j]);
                continue;
            }
            if ((i == ROW - 1 || j == COL - 1) && (i > 0 && j > 0)) {
                debug = (-1.) * ((*V)[i][j] - (*V)[i][j - 1]);

                (*Ex)[i][j] = (-1.) * ((*V)[i][j] - (*V)[i][j - 1]);
                (*Ey)[i][j] = (-1.) * ((*V)[i][j] - (*V)[i - 1][j]);
                continue;
            }
            if ((i == ROW - 1 && j == 0)) {
                (*Ex)[i][j] = (-1.) * ((*V)[i][j + 1] - (*V)[i][j]);
                (*Ey)[i][j] = (-1.) * ((*V)[i][j] - (*V)[i - 1][j]);
                continue;
            }
            if ((j == COL - 1 && i == 0)) {
                (*Ex)[i][j] = (-1.) * ((*V)[i][j] - (*V)[i][j - 1]);
                (*Ey)[i][j] = (-1.) * ((*V)[i + 1][j] - (*V)[i][j]);
                continue;
            }
            (*Ex)[i][j] = (-1. / 2) * ((*V)[i][j + 1] - (*V)[i][j - 1]);
            (*Ey)[i][j] = (-1. / 2) * ((*V)[i + 1][j] - (*V)[i - 1][j]);
            //cout << "debug = " << debug << endl;
            //cout << "cout = " << count << endl;
        }
    }
}
void draw_E_field(vector<vector<double>> *Ex, vector<vector<double>> *Ey) {
    TFile output("q1/q1_eletricfield.root", "RECREATE");
    auto c = new TCanvas("c", "", 0, 0, 800, 600);
    c->Range(-1, -1, 10, 10);
    TGaxis *yaxis = new TGaxis(0, gPad->GetUymin(), 0, gPad->GetUymax(), -1, 10, 11, "");
    TGaxis *xaxis = new TGaxis(gPad->GetUxmin(), 0, gPad->GetUxmax(), 0, -1, 10, 11, "");
    vector<TArrow> ar;
    int count = 0;
    int ROW = Ex->size();
    int COL = (Ex->at(0)).size();
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            count++;
            double mod_E = 0.8; // * sqrt(POW2((*Ex)[i][j]) + POW2((*Ey)[i][j]));
            //cout << "mod E" << mod_E << endl;
            if ((*Ex)[i][j] == 0 && (*Ey)[i][j] == 0) continue;
            ar.push_back(TArrow(j, i, j + ((*Ex)[i][j] / mod_E), i + ((*Ey)[i][j] / mod_E), 0.01));
        }
    }

    yaxis->Draw();
    xaxis->Draw();
    for (int i = 0; i < ar.size(); i++) {
        ar[i].SetLineColor(kRed);
        ar[i].Draw();
    }
    c->Write();
    c->SaveAs("q1/eletric_field.png");
    c->Close();
    output.Close();
}

void draw_potencial(vector<vector<double>> *V) {
    auto c = new TCanvas("c", "", 0, 0, 700, 600);
    TFile output("q1/q1.root", "RECREATE");
    auto dt = new TGraph2D();
    dt->SetTitle("");

    int count = 0;
    int ROW = V->size();
    int COL = (V->at(0)).size();
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COL; j++) {
            dt->SetPoint(count, i, j, (*V)[i][j]);
            count++;
        }
    }
    dt->Draw("surf1");
    dt->Write();
    c->SaveAs("q1/potential_field.png");
    c->Close();
    output.Close();
}

void laplace_calculate() {
    // Initializing the vector of vectors
    vector<vector<double>> V;
    vector<vector<bool>> boundary_map; //bool matrix to map the boundary conditions
    initialize_V(&V, &boundary_map);
    vector<vector<double>> Ex = V, Ey = V; //equals V just to copy the shape

    double mean_convergence = 1;
    int iteration = 0;
    while (mean_convergence > 1e-6 || iteration < 10) {
        mean_convergence = update_V(&V);
        iteration++;
    }

    cout << "média da convergencia = " << mean_convergence << endl;
    cout << "número de interações = " << iteration << endl;
    cout << "Potencial calculado:" << endl;
    display_matrix(&V);
    draw_potencial(&V);
    eletric_field_calc(&V, &Ex, &Ey);
    cout << "Ex: " << endl;
    display_matrix(&Ex);
    cout << "Ey: " << endl;
    display_matrix(&Ey);
    draw_E_field(&Ex, &Ey);
}
