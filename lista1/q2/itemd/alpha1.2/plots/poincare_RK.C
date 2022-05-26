void poincare_RK()
{
//=========Macro generated from canvas: c/
//=========  (Mon Dec 13 22:55:36 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-1.339705,-1.234504,-0.3934383,-0.8642457);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx42[20] = {
   -1.181994,
   -0.5511495,
   -0.6739103,
   -0.6685767,
   -0.6680928,
   -0.6816385,
   -0.6883239,
   -0.6530908,
   -0.6615871,
   -0.6699106,
   -0.6782224,
   -0.6864455,
   -0.694598,
   -0.6594049,
   -0.6677911,
   -0.6761066,
   -0.6843504,
   -0.6925218,
   -0.6572505,
   -0.6656548};
   Double_t Graph0_fy42[20] = {
   -0.9259555,
   -1.172794,
   -1.068701,
   -1.110709,
   -1.092414,
   -1.082212,
   -1.073905,
   -1.113202,
   -1.10413,
   -1.094852,
   -1.085458,
   -1.075971,
   -1.066375,
   -1.106478,
   -1.097227,
   -1.087869,
   -1.078405,
   -1.068837,
   -1.108825,
   -1.099601};
   TGraph *graph = new TGraph(20,Graph0_fx42,Graph0_fy42);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph042 = new TH1F("Graph_Graph042","",100,-1.245079,-0.488065);
   Graph_Graph042->SetMinimum(-1.197478);
   Graph_Graph042->SetMaximum(-0.9012716);
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
