void poincare_euler()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:08 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(0.1423338,-0.006599662,0.3089192,-0.001150297);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx7[5] = {
   0.170098,
   0.1928807,
   0.2187054,
   0.2479773,
   0.281155};
   Double_t Graph0_fy7[5] = {
   -0.005691435,
   -0.005192797,
   -0.004458797,
   -0.003435442,
   -0.002058525};
   TGraph *graph = new TGraph(5,Graph0_fx7,Graph0_fy7);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph07 = new TH1F("Graph_Graph07","",100,0.1589923,0.2922607);
   Graph_Graph07->SetMinimum(-0.006054726);
   Graph_Graph07->SetMaximum(-0.001695234);
   Graph_Graph07->SetDirectory(0);
   Graph_Graph07->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph07->SetLineColor(ci);
   Graph_Graph07->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph07->GetXaxis()->SetLabelFont(42);
   Graph_Graph07->GetXaxis()->SetTitleOffset(1);
   Graph_Graph07->GetXaxis()->SetTitleFont(42);
   Graph_Graph07->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph07->GetYaxis()->SetLabelFont(42);
   Graph_Graph07->GetYaxis()->SetTitleFont(42);
   Graph_Graph07->GetZaxis()->SetLabelFont(42);
   Graph_Graph07->GetZaxis()->SetTitleOffset(1);
   Graph_Graph07->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph07);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
