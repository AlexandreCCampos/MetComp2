void poincare_ec()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:19 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.2106103,-0.0236149,0.1551793,0.02261454);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx56[5] = {
   0.09421434,
   -0.004129673,
   -0.1016818,
   -0.1496454,
   -0.08831661};
   Double_t Graph0_fy56[5] = {
   -0.01460285,
   -0.01590999,
   -0.01415174,
   0.001478879,
   0.01490963};
   TGraph *graph = new TGraph(5,Graph0_fx56,Graph0_fy56);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph056 = new TH1F("Graph_Graph056","",100,-0.1740313,0.1186003);
   Graph_Graph056->SetMinimum(-0.01899196);
   Graph_Graph056->SetMaximum(0.01799159);
   Graph_Graph056->SetDirectory(0);
   Graph_Graph056->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph056->SetLineColor(ci);
   Graph_Graph056->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph056->GetXaxis()->SetLabelFont(42);
   Graph_Graph056->GetXaxis()->SetTitleOffset(1);
   Graph_Graph056->GetXaxis()->SetTitleFont(42);
   Graph_Graph056->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph056->GetYaxis()->SetLabelFont(42);
   Graph_Graph056->GetYaxis()->SetTitleFont(42);
   Graph_Graph056->GetZaxis()->SetLabelFont(42);
   Graph_Graph056->GetZaxis()->SetTitleOffset(1);
   Graph_Graph056->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph056);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
