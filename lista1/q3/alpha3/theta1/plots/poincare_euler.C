void poincare_euler()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:16 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-2.320619,-1.960242,2.100685,1.656849);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx42[5] = {
   0.7358478,
   0.5247061,
   0.8773177,
   1.363801,
   -1.583735};
   Double_t Graph0_fy42[5] = {
   0.7136886,
   0.9441036,
   1.054,
   -0.8978503,
   -1.357394};
   TGraph *graph = new TGraph(5,Graph0_fx42,Graph0_fy42);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph042 = new TH1F("Graph_Graph042","",100,-1.878489,1.658554);
   Graph_Graph042->SetMinimum(-1.598533);
   Graph_Graph042->SetMaximum(1.295139);
   Graph_Graph042->SetDirectory(0);
   Graph_Graph042->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph042->SetLineColor(ci);
   Graph_Graph042->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph042->GetXaxis()->SetLabelFont(42);
   Graph_Graph042->GetXaxis()->SetTitleOffset(1);
   Graph_Graph042->GetXaxis()->SetTitleFont(42);
   Graph_Graph042->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph042->GetYaxis()->SetLabelFont(42);
   Graph_Graph042->GetYaxis()->SetTitleFont(42);
   Graph_Graph042->GetZaxis()->SetLabelFont(42);
   Graph_Graph042->GetZaxis()->SetTitleOffset(1);
   Graph_Graph042->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph042);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
