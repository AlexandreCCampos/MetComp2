void poincare_euler()
{
//=========Macro generated from canvas: c/
//=========  (Mon Dec 13 22:55:15 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.6309391,-0.6487044,-0.1941808,-0.2575212);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx7[20] = {
   -0.558146,
   -0.3276613,
   -0.2669739,
   -0.3050424,
   -0.3079102,
   -0.3083259,
   -0.3129964,
   -0.2962244,
   -0.3001542,
   -0.3041725,
   -0.3081831,
   -0.3121446,
   -0.3160739,
   -0.2991247,
   -0.3031595,
   -0.3071626,
   -0.311134,
   -0.315073,
   -0.2980887,
   -0.3021314};
   Double_t Graph0_fy7[20] = {
   -0.3227184,
   -0.5835072,
   -0.5279512,
   -0.5092087,
   -0.5158162,
   -0.5113257,
   -0.5057689,
   -0.5242663,
   -0.5201481,
   -0.5158446,
   -0.5115251,
   -0.507162,
   -0.5027418,
   -0.5211894,
   -0.5169398,
   -0.5126372,
   -0.5082824,
   -0.5038758,
   -0.522267,
   -0.5180308};
   TGraph *graph = new TGraph(20,Graph0_fx7,Graph0_fy7);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph07 = new TH1F("Graph_Graph07","",100,-0.5872632,-0.2378566);
   Graph_Graph07->SetMinimum(-0.6095861);
   Graph_Graph07->SetMaximum(-0.2966395);
   Graph_Graph07->SetDirectory(0);
   Graph_Graph07->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph07->SetLineColor(ci);
   Graph_Graph07->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph07->GetXaxis()->SetLabelFont(42);
   Graph_Graph07->GetXaxis()->SetTitleOffset(1);
   Graph_Graph07->GetXaxis()->SetTitleFont(42);
   Graph_Graph07->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph07->GetYaxis()->SetLabelFont(42);
   Graph_Graph07->GetYaxis()->SetTitleFont(42);
   Graph_Graph07->GetZaxis()->SetLabelFont(42);
   Graph_Graph07->GetZaxis()->SetTitleOffset(1);
   Graph_Graph07->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph07);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
