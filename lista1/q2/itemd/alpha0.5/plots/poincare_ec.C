void poincare_ec()
{
//=========Macro generated from canvas: c/
//=========  (Mon Dec 13 22:55:24 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.61369,-0.5948428,-0.2389483,-0.2476334);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx21[20] = {
   -0.551233,
   -0.3525896,
   -0.3014052,
   -0.3301048,
   -0.3328168,
   -0.3342097,
   -0.3381639,
   -0.3230401,
   -0.3266192,
   -0.3302242,
   -0.3338031,
   -0.3373406,
   -0.3408436,
   -0.3256949,
   -0.3293107,
   -0.3328923,
   -0.3364395,
   -0.3399518,
   -0.3247655,
   -0.3283899};
   Double_t Graph0_fy21[20] = {
   -0.3055017,
   -0.5369746,
   -0.4944491,
   -0.4797172,
   -0.4828738,
   -0.4782605,
   -0.4731531,
   -0.4918725,
   -0.4876229,
   -0.4832657,
   -0.4788771,
   -0.4744425,
   -0.4699576,
   -0.488706,
   -0.4843799,
   -0.4800045,
   -0.4755804,
   -0.4711081,
   -0.4898036,
   -0.4854901};
   TGraph *graph = new TGraph(20,Graph0_fx21,Graph0_fy21);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph021 = new TH1F("Graph_Graph021","",100,-0.5762158,-0.2764224);
   Graph_Graph021->SetMinimum(-0.5601219);
   Graph_Graph021->SetMaximum(-0.2823544);
   Graph_Graph021->SetDirectory(0);
   Graph_Graph021->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph021->SetLineColor(ci);
   Graph_Graph021->GetXaxis()->SetTitle("#theta(rad)");
   Graph_Graph021->GetXaxis()->SetLabelFont(42);
   Graph_Graph021->GetXaxis()->SetTitleOffset(1);
   Graph_Graph021->GetXaxis()->SetTitleFont(42);
   Graph_Graph021->GetYaxis()->SetTitle("#omega(rad/s)");
   Graph_Graph021->GetYaxis()->SetLabelFont(42);
   Graph_Graph021->GetYaxis()->SetTitleFont(42);
   Graph_Graph021->GetZaxis()->SetLabelFont(42);
   Graph_Graph021->GetZaxis()->SetTitleOffset(1);
   Graph_Graph021->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph021);
   
   graph->Draw("acp");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
