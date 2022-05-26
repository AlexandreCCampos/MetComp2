void poincare_ec()
{
//=========Macro generated from canvas: c/
//=========  (Mon Dec 13 22:55:28 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-1.350485,-1.265228,-0.4128741,-0.8865863);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx28[20] = {
   -1.194216,
   -0.5691425,
   -0.6863888,
   -0.6828086,
   -0.6823572,
   -0.6956876,
   -0.7025318,
   -0.6671172,
   -0.6756516,
   -0.684015,
   -0.6923597,
   -0.7006165,
   -0.7088007,
   -0.6734622,
   -0.681885,
   -0.6902356,
   -0.698513,
   -0.7067166,
   -0.6712982,
   -0.6797395};
   Double_t Graph0_fy28[20] = {
   -0.9496932,
   -1.202121,
   -1.098758,
   -1.139365,
   -1.121729,
   -1.111552,
   -1.103276,
   -1.142233,
   -1.133243,
   -1.124057,
   -1.11475,
   -1.105347,
   -1.095832,
   -1.135569,
   -1.126409,
   -1.117139,
   -1.10776,
   -1.098273,
   -1.137892,
   -1.128761};
   TGraph *graph = new TGraph(20,Graph0_fx28,Graph0_fy28);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph028 = new TH1F("Graph_Graph028","",100,-1.256724,-0.5066352);
   Graph_Graph028->SetMinimum(-1.227364);
   Graph_Graph028->SetMaximum(-0.9244505);
   Graph_Graph028->SetDirectory(0);
   Graph_Graph028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph028->SetLineColor(ci);
   Graph_Graph028->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph028->GetXaxis()->SetLabelFont(42);
   Graph_Graph028->GetXaxis()->SetTitleOffset(1);
   Graph_Graph028->GetXaxis()->SetTitleFont(42);
   Graph_Graph028->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph028->GetYaxis()->SetLabelFont(42);
   Graph_Graph028->GetYaxis()->SetTitleFont(42);
   Graph_Graph028->GetZaxis()->SetLabelFont(42);
   Graph_Graph028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph028->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph028);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
