void poincare_euler()
{
//=========Macro generated from canvas: c/
//=========  (Mon Dec 13 22:55:20 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-1.366025,-1.334543,-0.2971747,-0.9319459);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx14[20] = {
   -1.187883,
   -0.4753163,
   -0.6288822,
   -0.6173058,
   -0.6159542,
   -0.6323215,
   -0.6390451,
   -0.6003986,
   -0.6097475,
   -0.6188764,
   -0.6280427,
   -0.6371087,
   -0.646111,
   -0.6073316,
   -0.6165531,
   -0.6257087,
   -0.6347972,
   -0.6438175,
   -0.6049643,
   -0.6142029};
   Double_t Graph0_fy14[20] = {
   -0.9990454,
   -1.267444,
   -1.146441,
   -1.200199,
   -1.178914,
   -1.169017,
   -1.161442,
   -1.199281,
   -1.190582,
   -1.181591,
   -1.172469,
   -1.163255,
   -1.153915,
   -1.192845,
   -1.183889,
   -1.174813,
   -1.165621,
   -1.156312,
   -1.195115,
   -1.186189};
   TGraph *graph = new TGraph(20,Graph0_fx14,Graph0_fy14);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph014 = new TH1F("Graph_Graph014","",100,-1.25914,-0.4040597);
   Graph_Graph014->SetMinimum(-1.294284);
   Graph_Graph014->SetMaximum(-0.9722056);
   Graph_Graph014->SetDirectory(0);
   Graph_Graph014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph014->SetLineColor(ci);
   Graph_Graph014->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph014->GetXaxis()->SetLabelFont(42);
   Graph_Graph014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph014->GetXaxis()->SetTitleFont(42);
   Graph_Graph014->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph014->GetYaxis()->SetLabelFont(42);
   Graph_Graph014->GetYaxis()->SetTitleFont(42);
   Graph_Graph014->GetZaxis()->SetLabelFont(42);
   Graph_Graph014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph014->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph014);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
