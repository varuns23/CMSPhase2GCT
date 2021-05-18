import os
import sys
import numpy as np
import parseTV as parse
from ROOT import *

gROOT.SetBatch(1)
gStyle.SetOptStat(0)
def DrawInputTV(tv):
    
    hsname = "vis_%s"%(tv.fname.replace(".txt","").replace("../","").replace("/","_"))
    neta = parse.T_ETA
    nphi = parse.T_PHI
    clusters = TH2I(hsname+"_clusters","%s;iPhi;iEta"%hsname,nphi,0,nphi,neta,-neta/2,neta/2)
    # towers = TH2I(hsname+"_towers","%s;iPhi;iEta"%hsname,tphi,0,nphi,teta,0,neta)

    for ybin in range(neta):
        if ybin < 17: clusters.GetYaxis().SetBinLabel(ybin+1,str( -1*(ybin-17) ))
        else: clusters.GetYaxis().SetBinLabel(ybin+1,str( -1*(ybin-16) ))

    for xbin in range(nphi):
        if xbin%4 == 0: clusters.GetXaxis().SetBinLabel(xbin+1,str(xbin))
        # else: clusters.GetXaxis().SetBinLabel(xbin+1,"")
        

    for tower in tv.towers:
        teta = tower.eta
        tphi = tower.phi
        
        if tower.tower_et > 0:
            if teta < 0: teta += 0.5
            else:        teta -= 0.5
            clusters.Fill(tphi,teta*-1,tower.tower_et)
    c = TCanvas(hsname,hsname,800,800)
    c.SetGrid()
    clusters.Draw("COLZ TEXT")
    # towers.Draw("BOX TEXT same")
    # towers.SetLineColor(kRed)
    lines = []
    line = TLine(0,0,nphi,0)
    line.SetLineWidth(2)
    line.Draw()
    lines.append(line)
    for x in range(1,parse.T_PHI/4):
        line = TLine(4*x,-neta/2,4*x,neta/2)
        line.SetLineWidth(2)
        line.Draw()
        lines.append(line)
    c.Write()
    
output = TFile(parse.args.write,"recreate")
for tv in parse.args.input: DrawInputTV(tv)
for tv in parse.args.output:DrawInputTV(tv)
output.Close()
