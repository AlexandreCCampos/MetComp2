void poincare_euler()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:14 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-1.188168,-0.9515524,1.430077,1.048836);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx35[5] = {
   -0.2268739,
   -0.751794,
   0.2788418,
   0.9937029,
   0.7085637};
   Double_t Graph0_fy35[5] = {
   0.4986191,
   -0.3706765,
   -0.6181543,
   -0.04788813,
   0.7154383};
   TGraph *graph = new TGraph(5,Graph0_fx35,Graph0_fy35);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph035 = new TH1F("Graph_Graph035","",100,-0.9263437,1.168253);
   Graph_Graph035->SetMinimum(-0.7515135);
   Graph_Graph035->SetMaximum(0.8487976);
   Graph_Graph035->SetDirectory(0);
   Graph_Graph035->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph035->SetLineColor(ci);
   Graph_Graph035->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph035->GetXaxis()->SetLabelFont(42);
   Graph_Graph035->GetXaxis()->SetTitleOffset(1);
   Graph_Graph035->GetXaxis()->SetTitleFont(42);
   Graph_Graph035->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph035->GetYaxis()->SetLabelFont(42);
   Graph_Graph035->GetYaxis()->SetTitleFont(42);
   Graph_Graph035->GetZaxis()->SetLabelFont(42);
   Graph_Graph035->GetZaxis()->SetTitleOffset(1);
   Graph_Graph035->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph035);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
