void poincare_ec()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:17 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(0.1497629,-0.006000099,0.1498916,-0.003510956);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx49[5] = {
   0.1497843,
   0.1498075,
   0.1498295,
   0.1498504,
   0.1498701};
   Double_t Graph0_fy49[5] = {
   -0.005585242,
   -0.005170441,
   -0.0047556,
   -0.004340724,
   -0.003925813};
   TGraph *graph = new TGraph(5,Graph0_fx49,Graph0_fy49);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph049 = new TH1F("Graph_Graph049","",100,0.1497757,0.1498787);
   Graph_Graph049->SetMinimum(-0.005751185);
   Graph_Graph049->SetMaximum(-0.003759871);
   Graph_Graph049->SetDirectory(0);
   Graph_Graph049->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph049->SetLineColor(ci);
   Graph_Graph049->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph049->GetXaxis()->SetLabelFont(42);
   Graph_Graph049->GetXaxis()->SetTitleOffset(1);
   Graph_Graph049->GetXaxis()->SetTitleFont(42);
   Graph_Graph049->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph049->GetYaxis()->SetLabelFont(42);
   Graph_Graph049->GetYaxis()->SetTitleFont(42);
   Graph_Graph049->GetZaxis()->SetLabelFont(42);
   Graph_Graph049->GetZaxis()->SetTitleOffset(1);
   Graph_Graph049->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph049);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
