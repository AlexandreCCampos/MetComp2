void poincare_RK()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:31 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.8958272,-0.1421857,0.8917696,0.1611161);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx112[5] = {
   -0.5978944,
   0.5938368,
   -0.5876972,
   0.5795394,
   -0.5694462};
   Double_t Graph0_fy112[5] = {
   0.03008044,
   -0.05120322,
   0.07178842,
   -0.09163536,
   0.1105658};
   TGraph *graph = new TGraph(5,Graph0_fx112,Graph0_fy112);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph0112 = new TH1F("Graph_Graph0112","",100,-0.7170675,0.7130099);
   Graph_Graph0112->SetMinimum(-0.1118555);
   Graph_Graph0112->SetMaximum(0.130786);
   Graph_Graph0112->SetDirectory(0);
   Graph_Graph0112->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph0112->SetLineColor(ci);
   Graph_Graph0112->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph0112->GetXaxis()->SetLabelFont(42);
   Graph_Graph0112->GetXaxis()->SetTitleOffset(1);
   Graph_Graph0112->GetXaxis()->SetTitleFont(42);
   Graph_Graph0112->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph0112->GetYaxis()->SetLabelFont(42);
   Graph_Graph0112->GetYaxis()->SetTitleFont(42);
   Graph_Graph0112->GetZaxis()->SetLabelFont(42);
   Graph_Graph0112->GetZaxis()->SetTitleOffset(1);
   Graph_Graph0112->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0112);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
