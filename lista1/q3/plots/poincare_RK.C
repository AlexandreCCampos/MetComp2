void poincare_RK()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:27 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(0.1498838,-0.005998528,0.1499711,-0.003132979);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx91[5] = {
   0.1498984,
   0.1499152,
   0.1499305,
   0.1499443,
   0.1499565};
   Double_t Graph0_fy91[5] = {
   -0.005520936,
   -0.005043417,
   -0.004565846,
   -0.004088229,
   -0.00361057};
   TGraph *graph = new TGraph(5,Graph0_fx91,Graph0_fy91);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph091 = new TH1F("Graph_Graph091","",100,0.1498925,0.1499624);
   Graph_Graph091->SetMinimum(-0.005711973);
   Graph_Graph091->SetMaximum(-0.003419534);
   Graph_Graph091->SetDirectory(0);
   Graph_Graph091->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph091->SetLineColor(ci);
   Graph_Graph091->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph091->GetXaxis()->SetLabelFont(42);
   Graph_Graph091->GetXaxis()->SetTitleOffset(1);
   Graph_Graph091->GetXaxis()->SetTitleFont(42);
   Graph_Graph091->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph091->GetYaxis()->SetLabelFont(42);
   Graph_Graph091->GetYaxis()->SetTitleFont(42);
   Graph_Graph091->GetZaxis()->SetLabelFont(42);
   Graph_Graph091->GetZaxis()->SetTitleOffset(1);
   Graph_Graph091->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph091);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
