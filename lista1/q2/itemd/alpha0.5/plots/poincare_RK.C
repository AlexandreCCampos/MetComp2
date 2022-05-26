void poincare_RK()
{
//=========Macro generated from canvas: c/
//=========  (Mon Dec 13 22:55:32 2021) by ROOT version 6.22/00
   TCanvas *c = new TCanvas("c", "",0,0,900,600);
   c->Range(-0.6120337,-0.5831084,-0.2291171,-0.2376624);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   Double_t Graph0_fx35[20] = {
   -0.5482143,
   -0.3413169,
   -0.2929365,
   -0.3227643,
   -0.3247721,
   -0.3261186,
   -0.3301627,
   -0.3150733,
   -0.3186302,
   -0.3222267,
   -0.3257949,
   -0.3293217,
   -0.3328153,
   -0.3177127,
   -0.3213162,
   -0.3248865,
   -0.3284232,
   -0.3319259,
   -0.3167865,
   -0.3203985};
   Double_t Graph0_fy35[20] = {
   -0.2952367,
   -0.525534,
   -0.4803679,
   -0.4664598,
   -0.4699726,
   -0.4651291,
   -0.4599913,
   -0.4788232,
   -0.4745478,
   -0.4701678,
   -0.4657616,
   -0.4613099,
   -0.456809,
   -0.4756344,
   -0.471288,
   -0.4668937,
   -0.462452,
   -0.4579634,
   -0.4767374,
   -0.4724032};
   TGraph *graph = new TGraph(20,Graph0_fx35,Graph0_fy35);
   graph->SetName("Graph0");
   graph->SetTitle("");
   graph->SetFillStyle(1000);
   graph->SetMarkerStyle(3);
   
   TH1F *Graph_Graph035 = new TH1F("Graph_Graph035","",100,-0.5737421,-0.2674088);
   Graph_Graph035->SetMinimum(-0.5485638);
   Graph_Graph035->SetMaximum(-0.272207);
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
