void poincare_ec()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:22 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.8947829,-0.1428264,0.8902638,0.1618335);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx70[5] = {
   -0.5972751,
   0.592756,
   -0.5861452,
   0.5775118,
   -0.5669437};
   Double_t Graph0_fy70[5] = {
   0.03019598,
   -0.05142725,
   0.07211304,
   -0.09204976,
   0.1110569};
   TGraph *graph = new TGraph(5,Graph0_fx70,Graph0_fy70);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph070 = new TH1F("Graph_Graph070","",100,-0.7162782,0.7117591);
   Graph_Graph070->SetMinimum(-0.1123604);
   Graph_Graph070->SetMaximum(0.1313675);
   Graph_Graph070->SetDirectory(0);
   Graph_Graph070->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph070->SetLineColor(ci);
   Graph_Graph070->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph070->GetXaxis()->SetLabelFont(42);
   Graph_Graph070->GetXaxis()->SetTitleOffset(1);
   Graph_Graph070->GetXaxis()->SetTitleFont(42);
   Graph_Graph070->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph070->GetYaxis()->SetLabelFont(42);
   Graph_Graph070->GetYaxis()->SetTitleFont(42);
   Graph_Graph070->GetZaxis()->SetLabelFont(42);
   Graph_Graph070->GetZaxis()->SetTitleOffset(1);
   Graph_Graph070->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph070);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
