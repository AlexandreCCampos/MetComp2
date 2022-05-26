void poincare_ec()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:23 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.9235294,-0.6487818,1.105388,0.6725802);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx77[5] = {
   -0.2765131,
   -0.4624729,
   0.767235,
   -0.1402372,
   -0.5853765};
   Double_t Graph0_fy77[5] = {
   0.4489485,
   -0.4285548,
   -0.1688102,
   0.4523532,
   -0.3862752};
   TGraph *graph = new TGraph(5,Graph0_fx77,Graph0_fy77);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph077 = new TH1F("Graph_Graph077","",100,-0.7206377,0.9024962);
   Graph_Graph077->SetMinimum(-0.5166456);
   Graph_Graph077->SetMaximum(0.540444);
   Graph_Graph077->SetDirectory(0);
   Graph_Graph077->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph077->SetLineColor(ci);
   Graph_Graph077->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph077->GetXaxis()->SetLabelFont(42);
   Graph_Graph077->GetXaxis()->SetTitleOffset(1);
   Graph_Graph077->GetXaxis()->SetTitleFont(42);
   Graph_Graph077->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph077->GetYaxis()->SetLabelFont(42);
   Graph_Graph077->GetYaxis()->SetTitleFont(42);
   Graph_Graph077->GetZaxis()->SetLabelFont(42);
   Graph_Graph077->GetZaxis()->SetTitleOffset(1);
   Graph_Graph077->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph077);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
