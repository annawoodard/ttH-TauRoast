import ROOT as r
import sys

r.gROOT.SetBatch()
r.gStyle.SetOptStat(0)

class Plotter(object):
    def __init__(self, rootfile, pdffile):
        self.__f = r.TFile(rootfile)
        self.__fn = pdffile
        self.__t = self.__f.Get("taus/taus")
        self.__c = r.TCanvas()
        self.__c.SaveAs(self.__fn + "[")

        self.__dcuts = "abs(t_decay) != 11 && abs(t_decay) != 13 && abs(t_visible_eta) < 2.3 && t_visible_pt > 20"
        self.__ncuts = "t_reco_pt > 20 && abs(t_reco_eta) < 2.3"

    def close(self):
        self.__c.SaveAs(self.__fn + "]")

    def plotiso(self, var, titles):
        self.__t.Draw("t_pt>>hist(15, 0, 150)", "({0}) * w".format(self.__dcuts))
        base = r.gDirectory.Get("hist")
        base.SetName("basehist")

        hists = []
        for n, title in enumerate(titles):
            cut = " && ".join([self.__dcuts, self.__ncuts, "{0} >= {1}".format(var, n)])
            print cut
            self.__t.Draw("t_pt>>hist(15, 0, 150)", "({0}) * w".format(cut))
            h = r.gDirectory.Get("hist")
            h.SetName(var + str(n))
            h.SetTitle(title + ";p_{T}^{#tau,gen} / GeV;Expected #tau efficiency")
            h.Divide(base)
            hists.append(h)

        l = r.TLegend(0.5, 0.9 - 0.05 * len(titles), 0.9, 0.9)
        opt = ""
        colors = [r.kBlack, r.kRed, r.kBlue, r.kGreen, r.kMagenta, r.kCyan]
        markers = [r.kFullCircle, r.kFullSquare, r.kFullTriangleUp, r.kFullTriangleDown, r.kFullDiamond, r.kFullCross]
        for h, color, marker in zip(hists, colors, markers):
            if opt == "":
                h.SetTitle("")
                h.GetYaxis().SetRangeUser(0, 1)
            h.SetLineColor(color)
            h.SetMarkerColor(color)
            h.SetMarkerStyle(marker)
            l.AddEntry(h, h.GetTitle() if h.GetTitle() != "" else "No isolation", "lp")
            h.DrawCopy("EP " + opt)
            # h.DrawCopy(opt)
            opt = "same"
        l.Draw()
        self.__c.SaveAs(self.__fn)

p = Plotter(*sys.argv[1:])
p.plotiso("t_iso_3hits", ["No isolation", "Cut-based loose", "Cut-based medium", "Cut-based tight"])
p.plotiso("t_iso_mva", ["No isolation", "MVA-based very loose", "MVA-based loose", "MVA-based medium",
    "MVA-based tight", "MVA-based very tight", "MVA-based very vrey tight"])
p.close()
