void poincare_euler()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:11 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.4692724,-0.1716563,0.5739709,0.1869836);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx21[5] = {
   -0.196284,
   -0.1335614,
   0.400097,
   -0.2953985,
   -0.00941665};
   Double_t Graph0_fy21[5] = {
   -0.111883,
   0.1181485,
   -0.04388771,
   -0.1069299,
   0.1272103};
   TGraph *graph = new TGraph(5,Graph0_fx21,Graph0_fy21);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph021 = new TH1F("Graph_Graph021","",100,-0.364948,0.4696466);
   Graph_Graph021->SetMinimum(-0.1357923);
   Graph_Graph021->SetMaximum(0.1511196);
   Graph_Graph021->SetDirectory(0);
   Graph_Graph021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph021->SetLineColor(ci);
   Graph_Graph021->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph021->GetXaxis()->SetLabelFont(42);
   Graph_Graph021->GetXaxis()->SetTitleOffset(1);
   Graph_Graph021->GetXaxis()->SetTitleFont(42);
   Graph_Graph021->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph021->GetYaxis()->SetLabelFont(42);
   Graph_Graph021->GetYaxis()->SetTitleFont(42);
   Graph_Graph021->GetZaxis()->SetLabelFont(42);
   Graph_Graph021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph021->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph021);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
