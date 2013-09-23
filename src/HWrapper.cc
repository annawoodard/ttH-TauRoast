// vim: ts=4:sw=4:et:sta
#include <iostream>

#include "boost/lexical_cast.hpp"

#include "TRandom.h"
#include "TTimeStamp.h"

#include "../interface/Branches.h"
#include "../interface/HWrapper.h"

using namespace std;
using namespace roast;

// Default constructor
HWrapper::HWrapper() : histo(0), xval(0), yval(0), max(0), xadd(0), yadd(0), translate(false) {}

// Copy constructor
HWrapper::HWrapper(const HWrapper& iHWrapper) :
    histo(0),
    xval(0),
    yval(0),
    max(0),
    xadd(iHWrapper.xadd),
    yadd(iHWrapper.yadd)
{
    if (iHWrapper.GetHisto())
        this->SetHisto(iHWrapper.GetHisto());

    xval = iHWrapper.xval;
    yval = iHWrapper.yval;
    max = iHWrapper.max;

    translate = iHWrapper.translate;

    name = iHWrapper.GetName();
    subdir = iHWrapper.GetSubDir();
    NOEraw = iHWrapper.GetNOEraw();
}

HWrapper::HWrapper(const std::string& subdir, TH1* hist, GetValue_t x, GetValue_t y, GetValue_t m) :
    subdir(subdir),
    xval(x),
    yval(y),
    max(m),
    xadd(0),
    yadd(0),
    translate(false)
{
    histo = dynamic_cast<TH1*>(hist->Clone());
}

HWrapper::~HWrapper()
{
    if (histo)
        delete histo;
}

HWrapper *
HWrapper::Create1D(const std::string& subdir, TH1* hist, const std::string& xfill, const std::string max)
{
    auto x = get_accessor(xfill);
    auto m = (max != "") ? get_accessor(max) : 0;

    return new HWrapper(subdir, hist, x, 0, m);
}

HWrapper *
HWrapper::Create2D(const std::string& subdir, TH1* hist, const std::string& xfill, const std::string& yfill, const std::string max)
{
    auto x = get_accessor(xfill);
    auto y = get_accessor(yfill);
    auto m = (max != "") ? get_accessor(max) : 0;

    return new HWrapper(subdir, hist, x, y, m);
}

void
HWrapper::Fill(Branches* b, int i, float w)
{
    if (yval) {
        if (!max) {
            auto x = xval(b, i, -1);
            auto y = yval(b, i, -1);

            if (translate) {
                if (xadd)
                    x = b->TranslateMatchIndex(int(x + 0.5), int(xadd(b, i, -1) + 0.5));
                else
                    x = b->TranslateMatchIndex(int(x + 0.5));

                if (yadd)
                    y = b->TranslateMatchIndex(int(y + 0.5), int(yadd(b, i, -1) + 0.5));
                else
                    y = b->TranslateMatchIndex(int(y + 0.5));
            }

            dynamic_cast<TH2*>(histo)->Fill(x, y, w);
        } else {
            for (int n = 0; n < max(b, i, -1); ++n) {
                auto x = xval(b, i, n);
                auto y = yval(b, i, n);

                if (translate) {
                    if (xadd)
                        x = b->TranslateMatchIndex(int(x + 0.5), int(xadd(b, i , n) + 0.5));
                    else
                        x = b->TranslateMatchIndex(int(x + 0.5));

                    if (yadd)
                        y = b->TranslateMatchIndex(int(y + 0.5), int(yadd(b, i, n) + 0.5));
                    else
                        y = b->TranslateMatchIndex(int(y + 0.5));
                }

                dynamic_cast<TH2*>(histo)->Fill(x, y, w);
            }
        }
    } else {
        if (!max) {
            float x = xval(b, i, -1);

            if (translate) {
                if (xadd)
                    x = b->TranslateMatchIndex(x, xadd(b, i, -1));
                else
                    x = b->TranslateMatchIndex(x);
            }

            histo->Fill(x, w);
        } else {
            for (int n = 0; n < max(b, i, -1); ++n) {
                auto x = xval(b, i, n);

                if (translate) {
                    if (xadd)
                        x = b->TranslateMatchIndex(x, xadd(b, i, n));
                    else
                        x = b->TranslateMatchIndex(x);
                }

                histo->Fill(x, w);
            }
        }
    }
}

void
HWrapper::SetHisto(const TH1* hist)
{
    TTimeStamp timestamp;
    TRandom random(timestamp.GetTimeSpec().tv_nsec);
    stringstream ssName; ssName.str("");
    ssName << hist->GetName() << timestamp.GetTimeSpec().tv_sec << timestamp.GetTimeSpec().tv_nsec << random.Gaus();

    if (histo)
        delete histo;

    histo = dynamic_cast<TH1*>(hist->Clone((ssName.str()).c_str()));
}

void HWrapper::SetMaximum(double const iValue){ histo->SetMaximum(iValue); }
void HWrapper::ResetMaximum(double const iFactor){ histo->SetMaximum(iFactor*histo->GetBinContent(histo->GetMaximumBin())); }

// Other methods
void HWrapper::Add(TH1 const & iHisto, double iFactor){ 
	if(iFactor != iFactor){ cerr << "ERROR: trying to Add(TH1&, nan)" << endl; exit(1); }
	histo->Add(&iHisto, iFactor);
}
void HWrapper::Add(HWrapper const & iHisto, double const iFactor){ 
	histo->Add((iHisto.GetHisto()), iFactor);
}
void HWrapper::ScaleBy(double const iFactor){
	if(iFactor != iFactor){ cerr << "ERROR: trying to ScaleBy(nan)" << endl; exit(1); }
	histo->Scale(iFactor);
}

void HWrapper::ScaleErrorBy(double const iFactor){	
	if(iFactor != iFactor){ cerr << "ERROR: trying to ScaleErrorBy(nan)" << endl; exit(1); }
	for(int b=0; b<=histo->GetNbinsX(); b++){ histo->SetBinError(b, iFactor*(histo->GetBinError(b))); }
}

void HWrapper::AddRelErrorInQuadrature(double const iError){	
	if(iError != iError){ cerr << "ERROR: trying to AddRelErrorInQuadrature(nan)" << endl; exit(1); }
	for(int b=0; b<=histo->GetNbinsX(); b++){ 
        AddRelErrorInQuadrature(iError, b); 
    }
}

void HWrapper::AddRelErrorInQuadrature(double const iError, int iBin){	
	if(iError != iError){ cerr << "ERROR: trying to AddRelErrorInQuadrature(nan)" << endl; exit(1); }
    double newError = sqrt(histo->GetBinError(iBin)*histo->GetBinError(iBin) + iError*histo->GetBinContent(iBin)*iError*histo->GetBinContent(iBin));
    histo->SetBinError(iBin,newError); 
}

void HWrapper::NormalizeTo(double const iNormalization){	ScaleBy(iNormalization/(double)histo->Integral()); }

// Zero negative bins only
void HWrapper::Positivize(){
    for(int b = 1; b <= histo->GetNbinsX(); b++){
        float oldContent = histo->GetBinContent(b);
        if(oldContent < 0){ histo->SetBinContent(b, 0); }
    }
}

double
HWrapper::GetMaximum() const
{
    return histo->GetBinContent(histo->GetMaximumBin());
}

double
HWrapper::GetMaximumWithError() const
{
	double result = 0;
	for(int b = 1; b <= histo->GetNbinsX(); b++){
		double content = histo->GetBinContent(b);	
		double error = histo->GetBinError(b);	
		if((content+error) > result){ result = content+error; }
	}
	return result;
}

ClassImp(roast::HWrapper)
