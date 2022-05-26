void poincare_RK()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:33 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.9126368,-0.6488515,1.107808,0.6724843);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx119[5] = {
   -0.2858941,
   -0.4531178,
   0.7710672,
   -0.1509183,
   -0.575896};
   Double_t Graph0_fy119[5] = {
   0.4488426,
   -0.4286289,
   -0.1675063,
   0.4522617,
   -0.3870427};
   TGraph *graph = new TGraph(5,Graph0_fx119,Graph0_fy119);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph0119 = new TH1F("Graph_Graph0119","",100,-0.7105923,0.9057635);
   Graph_Graph0119->SetMinimum(-0.5167179);
   Graph_Graph0119->SetMaximum(0.5403507);
   Graph_Graph0119->SetDirectory(0);
   Graph_Graph0119->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph0119->SetLineColor(ci);
   Graph_Graph0119->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph0119->GetXaxis()->SetLabelFont(42);
   Graph_Graph0119->GetXaxis()->SetTitleOffset(1);
   Graph_Graph0119->GetXaxis()->SetTitleFont(42);
   Graph_Graph0119->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph0119->GetYaxis()->SetLabelFont(42);
   Graph_Graph0119->GetYaxis()->SetTitleFont(42);
   Graph_Graph0119->GetZaxis()->SetLabelFont(42);
   Graph_Graph0119->GetZaxis()->SetTitleOffset(1);
   Graph_Graph0119->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0119);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
