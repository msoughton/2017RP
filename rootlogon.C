{
  gROOT->SetStyle("Pub");
  //  gSystem->SetIncludePath(" -I$ADSTROOT/RecEvent/src");
  //  gSystem->Load("$ADSTROOT/lib/libRecEventKG.so");

  // RECOMMENDED STYLE

  //set the default line color for a histogram to be blue
  gStyle->SetHistLineColor(kBlue);

  //set the default line color for a fit function to be red
  gStyle->SetFuncColor(kRed);

  //set the default title color to be black
  gStyle->SetTitleTextColor(kBlack);

  //marker settings
  gStyle->SetMarkerStyle(21);
  gStyle->SetMarkerSize(1.0);
  gStyle->SetMarkerColor(kBlue);
  //gStyle->SetLineColor(kBlue);
  gStyle->SetLineWidth(2);

  //set standard palette
  gStyle->SetPalette(1);

  //edit statistics
  gStyle->SetOptStat(1110);
  gStyle->SetStatColor(0);

  //set the margins
  gStyle->SetPadBottomMargin(0.15);
  gStyle->SetPadLeftMargin(0.175);
  gStyle->SetPadTopMargin(0.075);
  gStyle->SetPadRightMargin(0.10);

  //set axis label and title text sizes
  gStyle->SetLabelSize(0.05,"xyz");
  gStyle->SetTitleSize(0.06,"xyz");
  gStyle->SetTitleOffset(1.00,"xyz");
  gStyle->SetStatFontSize(0.05);
  gStyle->SetTextSize(0.07);
  gStyle->SetTitleBorderSize(0);

  //align the titles to be centred
  //gStyle->SetTextAlign(22);

  //set frame line width
  gStyle->SetFrameLineWidth(2);

  //set number of divisions
  gStyle->SetNdivisions(10,"xyz");

  // Fonts
  gStyle->SetStatFont(62);
  gStyle->SetLabelFont(62,"xyz");
  gStyle->SetTitleFont(62,"xyz");
  gStyle->SetTextFont(62);

  // Set the paper size for output
  gStyle->SetPaperSize(TStyle::kA4);
}
