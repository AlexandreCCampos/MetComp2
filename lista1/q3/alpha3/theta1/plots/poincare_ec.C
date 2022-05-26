void poincare_ec()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:25 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-1.306745,-1.060503,0.9165322,1.058756);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx84[5] = {
   0.5459859,
   -0.2514191,
   -0.9361989,
   -0.7401024,
   0.03690848};
   Double_t Graph0_fy84[5] = {
   0.6783328,
   0.7055461,
   0.3244363,
   -0.5998168,
   -0.7072935};
   TGraph *graph = new TGraph(5,Graph0_fx84,Graph0_fy84);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph084 = new TH1F("Graph_Graph084","",100,-1.084417,0.6942044);
   Graph_Graph084->SetMinimum(-0.8485774);
   Graph_Graph084->SetMaximum(0.8468301);
   Graph_Graph084->SetDirectory(0);
   Graph_Graph084->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph084->SetLineColor(ci);
   Graph_Graph084->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph084->GetXaxis()->SetLabelFont(42);
   Graph_Graph084->GetXaxis()->SetTitleOffset(1);
   Graph_Graph084->GetXaxis()->SetTitleFont(42);
   Graph_Graph084->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph084->GetYaxis()->SetLabelFont(42);
   Graph_Graph084->GetYaxis()->SetTitleFont(42);
   Graph_Graph084->GetZaxis()->SetLabelFont(42);
   Graph_Graph084->GetZaxis()->SetTitleOffset(1);
   Graph_Graph084->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph084);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
