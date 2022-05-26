void poincare_ec()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:20 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.3796144,-0.1660013,0.5509886,0.1685278);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx63[5] = {
   -0.1918669,
   -0.1451411,
   0.3958881,
   -0.2245139,
   -0.1113937};
   Double_t Graph0_fy63[5] = {
   -0.1102464,
   0.112095,
   -0.02155816,
   -0.1076053,
   0.112773};
   TGraph *graph = new TGraph(5,Graph0_fx63,Graph0_fy63);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph063 = new TH1F("Graph_Graph063","",100,-0.2865541,0.4579283);
   Graph_Graph063->SetMinimum(-0.1325484);
   Graph_Graph063->SetMaximum(0.1350749);
   Graph_Graph063->SetDirectory(0);
   Graph_Graph063->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph063->SetLineColor(ci);
   Graph_Graph063->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph063->GetXaxis()->SetLabelFont(42);
   Graph_Graph063->GetXaxis()->SetTitleOffset(1);
   Graph_Graph063->GetXaxis()->SetTitleFont(42);
   Graph_Graph063->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph063->GetYaxis()->SetLabelFont(42);
   Graph_Graph063->GetYaxis()->SetTitleFont(42);
   Graph_Graph063->GetZaxis()->SetLabelFont(42);
   Graph_Graph063->GetZaxis()->SetTitleOffset(1);
   Graph_Graph063->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph063);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
