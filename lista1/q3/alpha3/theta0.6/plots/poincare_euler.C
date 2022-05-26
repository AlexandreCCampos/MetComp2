void poincare_euler()
{
//=========Macro generated from canvas: c/
//=========  (Tue Dec 14 00:03:13 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.9128121,-0.4692283,0.8999001,0.5012581);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx28[5] = {
   -0.6106934,
   0.5977814,
   -0.524208,
   0.3561554,
   -0.09086176};
   Double_t Graph0_fy28[5] = {
   0.0494756,
   -0.1291232,
   0.2302272,
   -0.3074805,
   0.3395104};
   TGraph *graph = new TGraph(5,Graph0_fx28,Graph0_fy28);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph028 = new TH1F("Graph_Graph028","",100,-0.7315409,0.7186289);
   Graph_Graph028->SetMinimum(-0.3721796);
   Graph_Graph028->SetMaximum(0.4042095);
   Graph_Graph028->SetDirectory(0);
   Graph_Graph028->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph028->SetLineColor(ci);
   Graph_Graph028->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph028->GetXaxis()->SetLabelFont(42);
   Graph_Graph028->GetXaxis()->SetTitleOffset(1);
   Graph_Graph028->GetXaxis()->SetTitleFont(42);
   Graph_Graph028->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph028->GetYaxis()->SetLabelFont(42);
   Graph_Graph028->GetYaxis()->SetTitleFont(42);
   Graph_Graph028->GetZaxis()->SetLabelFont(42);
   Graph_Graph028->GetZaxis()->SetTitleOffset(1);
   Graph_Graph028->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph028);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
