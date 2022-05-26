void poincare_RK()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:30 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.3769129,-0.1659945,0.5509833,0.1685183);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx105[5] = {
   -0.1896361,
   -0.147433,
   0.3963339,
   -0.2222635,
   -0.113776};
   Double_t Graph0_fy105[5] = {
   -0.1102423,
   0.1120882,
   -0.02151394,
   -0.1076093,
   0.1127662};
   TGraph *graph = new TGraph(5,Graph0_fx105,Graph0_fy105);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph0105 = new TH1F("Graph_Graph0105","",100,-0.2841233,0.4581936);
   Graph_Graph0105->SetMinimum(-0.1325432);
   Graph_Graph0105->SetMaximum(0.135067);
   Graph_Graph0105->SetDirectory(0);
   Graph_Graph0105->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph0105->SetLineColor(ci);
   Graph_Graph0105->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph0105->GetXaxis()->SetLabelFont(42);
   Graph_Graph0105->GetXaxis()->SetTitleOffset(1);
   Graph_Graph0105->GetXaxis()->SetTitleFont(42);
   Graph_Graph0105->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph0105->GetYaxis()->SetLabelFont(42);
   Graph_Graph0105->GetYaxis()->SetTitleFont(42);
   Graph_Graph0105->GetZaxis()->SetLabelFont(42);
   Graph_Graph0105->GetZaxis()->SetTitleOffset(1);
   Graph_Graph0105->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph0105);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
