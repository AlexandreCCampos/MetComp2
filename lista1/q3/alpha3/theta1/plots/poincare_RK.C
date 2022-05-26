void poincare_RK()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:35 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-1.312929,-1.060202,0.9003153,1.058393);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx126[5] = {
   0.5314413,
   -0.2675194,
   -0.9440546,
   -0.7246952,
   0.05605404};
   Double_t Graph0_fy126[5] = {
   0.678319,
   0.7052936,
   0.3206968,
   -0.6017402,
   -0.7071032};
   TGraph *graph = new TGraph(5,Graph0_fx126,Graph0_fy126);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph0126 = new TH1F("Graph_Graph0126","",100,-1.091604,0.6789909);
   Graph_Graph0126->SetMinimum(-0.8483429);
   Graph_Graph0126->SetMaximum(0.8465333);
   Graph_Graph0126->SetDirectory(0);
   Graph_Graph0126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph0126->SetLineColor(ci);
   Graph_Graph0126->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph0126->GetXaxis()->SetLabelFont(42);
   Graph_Graph0126->GetXaxis()->SetTitleOffset(1);
   Graph_Graph0126->GetXaxis()->SetTitleFont(42);
   Graph_Graph0126->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph0126->GetYaxis()->SetLabelFont(42);
   Graph_Graph0126->GetYaxis()->SetTitleFont(42);
   Graph_Graph0126->GetZaxis()->SetLabelFont(42);
   Graph_Graph0126->GetZaxis()->SetTitleOffset(1);
   Graph_Graph0126->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0126);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
