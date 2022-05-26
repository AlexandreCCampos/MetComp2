void poincare_euler()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:10 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.2117677,-0.02382507,0.1558253,0.02308079);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx14[5] = {
   0.09455983,
   -0.00432974,
   -0.1025012,
   -0.1505022,
   -0.08742173};
   Double_t Graph0_fy14[5] = {
   -0.01468714,
   -0.01600743,
   -0.0142037,
   0.001762856,
   0.01526314};
   TGraph *graph = new TGraph(5,Graph0_fx14,Graph0_fy14);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph014 = new TH1F("Graph_Graph014","",100,-0.1750084,0.119066);
   Graph_Graph014->SetMinimum(-0.01913449);
   Graph_Graph014->SetMaximum(0.0183902);
   Graph_Graph014->SetDirectory(0);
   Graph_Graph014->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph014->SetLineColor(ci);
   Graph_Graph014->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph014->GetXaxis()->SetLabelFont(42);
   Graph_Graph014->GetXaxis()->SetTitleOffset(1);
   Graph_Graph014->GetXaxis()->SetTitleFont(42);
   Graph_Graph014->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph014->GetYaxis()->SetLabelFont(42);
   Graph_Graph014->GetYaxis()->SetTitleFont(42);
   Graph_Graph014->GetZaxis()->SetLabelFont(42);
   Graph_Graph014->GetZaxis()->SetTitleOffset(1);
   Graph_Graph014->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph014);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
