void poincare_RK()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:28 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.2107206,-0.02361472,0.1555523,0.02261423);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx98[5] = {
   0.09450682,
   -0.003810456,
   -0.1013974,
   -0.1496751,
   -0.08861712};
   Double_t Graph0_fy98[5] = {
   -0.0146027,
   -0.0159099,
   -0.01415172,
   0.001478433,
   0.0149094};
   TGraph *graph = new TGraph(5,Graph0_fx98,Graph0_fy98);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph098 = new TH1F("Graph_Graph098","",100,-0.1740933,0.118925);
   Graph_Graph098->SetMinimum(-0.01899183);
   Graph_Graph098->SetMaximum(0.01799133);
   Graph_Graph098->SetDirectory(0);
   Graph_Graph098->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph098->SetLineColor(ci);
   Graph_Graph098->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph098->GetXaxis()->SetLabelFont(42);
   Graph_Graph098->GetXaxis()->SetTitleOffset(1);
   Graph_Graph098->GetXaxis()->SetTitleFont(42);
   Graph_Graph098->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph098->GetYaxis()->SetLabelFont(42);
   Graph_Graph098->GetYaxis()->SetTitleFont(42);
   Graph_Graph098->GetZaxis()->SetLabelFont(42);
   Graph_Graph098->GetZaxis()->SetTitleOffset(1);
   Graph_Graph098->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph098);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
