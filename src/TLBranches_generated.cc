#ifdef FOOBARBAD
// vim: ts=4:sw=4:et:sta
#include "../interface/TLBranches.h"

using namespace roast;

void
tl::Branches::Clear()
{
    roast::Branches::Clear();

    // >>> Begin clear <<<
    L_Charge->clear();
    L_CorrectedD0->clear();
    L_CorrectedDZ->clear();
    L_EventWeight->clear();
    L_GenMatchDaughter0Id->clear();
    L_GenMatchDaughter0Status->clear();
    L_GenMatchDaughter1Id->clear();
    L_GenMatchDaughter1Status->clear();
    L_GenMatchGrandmother00Id->clear();
    L_GenMatchGrandmother00Status->clear();
    L_GenMatchGrandmother01Id->clear();
    L_GenMatchGrandmother01Status->clear();
    L_GenMatchGrandmother10Id->clear();
    L_GenMatchGrandmother10Status->clear();
    L_GenMatchGrandmother11Id->clear();
    L_GenMatchGrandmother11Status->clear();
    L_GenMatchId->clear();
    L_GenMatchMother0Id->clear();
    L_GenMatchMother0Status->clear();
    L_GenMatchMother1Id->clear();
    L_GenMatchMother1Status->clear();
    L_GenMatchStatus->clear();
    L_ImpactParameter->clear();
    L_IsElectron->clear();
    L_IsLoose->clear();
    L_IsMuon->clear();
    L_IsTight->clear();
    L_P->clear();
    L_RelIso->clear();
    T_Charge->clear();
    T_DecayMode->clear();
    T_EmFraction->clear();
    T_GenMatchDaughter0Id->clear();
    T_GenMatchDaughter0Status->clear();
    T_GenMatchDaughter1Id->clear();
    T_GenMatchDaughter1Status->clear();
    T_GenMatchGrandmother00Id->clear();
    T_GenMatchGrandmother00Status->clear();
    T_GenMatchGrandmother01Id->clear();
    T_GenMatchGrandmother01Status->clear();
    T_GenMatchGrandmother10Id->clear();
    T_GenMatchGrandmother10Status->clear();
    T_GenMatchGrandmother11Id->clear();
    T_GenMatchGrandmother11Status->clear();
    T_GenMatchId->clear();
    T_GenMatchMother0Id->clear();
    T_GenMatchMother0Status->clear();
    T_GenMatchMother1Id->clear();
    T_GenMatchMother1Status->clear();
    T_GenMatchStatus->clear();
    T_HPSagainstElectronDeadECAL->clear();
    T_HPSagainstElectronLoose->clear();
    T_HPSagainstElectronLooseMVA2->clear();
    T_HPSagainstElectronLooseMVA3->clear();
    T_HPSagainstElectronMVA->clear();
    T_HPSagainstElectronMVA2category->clear();
    T_HPSagainstElectronMVA2raw->clear();
    T_HPSagainstElectronMVA3category->clear();
    T_HPSagainstElectronMVA3raw->clear();
    T_HPSagainstElectronMedium->clear();
    T_HPSagainstElectronMediumMVA2->clear();
    T_HPSagainstElectronMediumMVA3->clear();
    T_HPSagainstElectronTight->clear();
    T_HPSagainstElectronTightMVA2->clear();
    T_HPSagainstElectronTightMVA3->clear();
    T_HPSagainstElectronVLooseMVA2->clear();
    T_HPSagainstElectronVTightMVA3->clear();
    T_HPSagainstMuonLoose->clear();
    T_HPSagainstMuonLoose2->clear();
    T_HPSagainstMuonMedium->clear();
    T_HPSagainstMuonMedium2->clear();
    T_HPSagainstMuonTight->clear();
    T_HPSagainstMuonTight2->clear();
    T_HPSbyCombinedIsolationDeltaBetaCorrRaw->clear();
    T_HPSbyCombinedIsolationDeltaBetaCorrRaw3Hits->clear();
    T_HPSbyIsolationMVA2raw->clear();
    T_HPSbyIsolationMVAraw->clear();
    T_HPSbyLooseCombinedIsolationDeltaBetaCorr->clear();
    T_HPSbyLooseCombinedIsolationDeltaBetaCorr3Hits->clear();
    T_HPSbyLooseIsolationMVA->clear();
    T_HPSbyLooseIsolationMVA2->clear();
    T_HPSbyMediumCombinedIsolationDeltaBetaCorr->clear();
    T_HPSbyMediumCombinedIsolationDeltaBetaCorr3Hits->clear();
    T_HPSbyMediumIsolationMVA->clear();
    T_HPSbyMediumIsolationMVA2->clear();
    T_HPSbyTightCombinedIsolationDeltaBetaCorr->clear();
    T_HPSbyTightCombinedIsolationDeltaBetaCorr3Hits->clear();
    T_HPSbyTightIsolationMVA->clear();
    T_HPSbyTightIsolationMVA2->clear();
    T_HPSbyVLooseCombinedIsolationDeltaBetaCorr->clear();
    T_HPSdecayModeFinding->clear();
    T_IsInTheCracks->clear();
    T_JetCSV->clear();
    T_LTIpVtdxy->clear();
    T_LTIpVtdxyError->clear();
    T_LTIpVtdz->clear();
    T_LTIpVtdzError->clear();
    T_LTNormChiSqrd->clear();
    T_LTPt->clear();
    T_LTValidHits->clear();
    T_LTvalid->clear();
    T_LTvx->clear();
    T_LTvy->clear();
    T_LTvz->clear();
    T_MomentumRank->clear();
    T_NProngs->clear();
    T_NSignalGammas->clear();
    T_NSignalNeutrals->clear();
    T_P->clear();
    // >>> End clear <<<
}

void
tl::Branches::Delete()
{
    roast::Branches::Delete();

    // >>> Begin delete <<<
    delete L_Charge;
    delete L_CorrectedD0;
    delete L_CorrectedDZ;
    delete L_EventWeight;
    delete L_GenMatchDaughter0Id;
    delete L_GenMatchDaughter0Status;
    delete L_GenMatchDaughter1Id;
    delete L_GenMatchDaughter1Status;
    delete L_GenMatchGrandmother00Id;
    delete L_GenMatchGrandmother00Status;
    delete L_GenMatchGrandmother01Id;
    delete L_GenMatchGrandmother01Status;
    delete L_GenMatchGrandmother10Id;
    delete L_GenMatchGrandmother10Status;
    delete L_GenMatchGrandmother11Id;
    delete L_GenMatchGrandmother11Status;
    delete L_GenMatchId;
    delete L_GenMatchMother0Id;
    delete L_GenMatchMother0Status;
    delete L_GenMatchMother1Id;
    delete L_GenMatchMother1Status;
    delete L_GenMatchStatus;
    delete L_ImpactParameter;
    delete L_IsElectron;
    delete L_IsLoose;
    delete L_IsMuon;
    delete L_IsTight;
    delete L_P;
    delete L_RelIso;
    delete T_Charge;
    delete T_DecayMode;
    delete T_EmFraction;
    delete T_GenMatchDaughter0Id;
    delete T_GenMatchDaughter0Status;
    delete T_GenMatchDaughter1Id;
    delete T_GenMatchDaughter1Status;
    delete T_GenMatchGrandmother00Id;
    delete T_GenMatchGrandmother00Status;
    delete T_GenMatchGrandmother01Id;
    delete T_GenMatchGrandmother01Status;
    delete T_GenMatchGrandmother10Id;
    delete T_GenMatchGrandmother10Status;
    delete T_GenMatchGrandmother11Id;
    delete T_GenMatchGrandmother11Status;
    delete T_GenMatchId;
    delete T_GenMatchMother0Id;
    delete T_GenMatchMother0Status;
    delete T_GenMatchMother1Id;
    delete T_GenMatchMother1Status;
    delete T_GenMatchStatus;
    delete T_HPSagainstElectronDeadECAL;
    delete T_HPSagainstElectronLoose;
    delete T_HPSagainstElectronLooseMVA2;
    delete T_HPSagainstElectronLooseMVA3;
    delete T_HPSagainstElectronMVA;
    delete T_HPSagainstElectronMVA2category;
    delete T_HPSagainstElectronMVA2raw;
    delete T_HPSagainstElectronMVA3category;
    delete T_HPSagainstElectronMVA3raw;
    delete T_HPSagainstElectronMedium;
    delete T_HPSagainstElectronMediumMVA2;
    delete T_HPSagainstElectronMediumMVA3;
    delete T_HPSagainstElectronTight;
    delete T_HPSagainstElectronTightMVA2;
    delete T_HPSagainstElectronTightMVA3;
    delete T_HPSagainstElectronVLooseMVA2;
    delete T_HPSagainstElectronVTightMVA3;
    delete T_HPSagainstMuonLoose;
    delete T_HPSagainstMuonLoose2;
    delete T_HPSagainstMuonMedium;
    delete T_HPSagainstMuonMedium2;
    delete T_HPSagainstMuonTight;
    delete T_HPSagainstMuonTight2;
    delete T_HPSbyCombinedIsolationDeltaBetaCorrRaw;
    delete T_HPSbyCombinedIsolationDeltaBetaCorrRaw3Hits;
    delete T_HPSbyIsolationMVA2raw;
    delete T_HPSbyIsolationMVAraw;
    delete T_HPSbyLooseCombinedIsolationDeltaBetaCorr;
    delete T_HPSbyLooseCombinedIsolationDeltaBetaCorr3Hits;
    delete T_HPSbyLooseIsolationMVA;
    delete T_HPSbyLooseIsolationMVA2;
    delete T_HPSbyMediumCombinedIsolationDeltaBetaCorr;
    delete T_HPSbyMediumCombinedIsolationDeltaBetaCorr3Hits;
    delete T_HPSbyMediumIsolationMVA;
    delete T_HPSbyMediumIsolationMVA2;
    delete T_HPSbyTightCombinedIsolationDeltaBetaCorr;
    delete T_HPSbyTightCombinedIsolationDeltaBetaCorr3Hits;
    delete T_HPSbyTightIsolationMVA;
    delete T_HPSbyTightIsolationMVA2;
    delete T_HPSbyVLooseCombinedIsolationDeltaBetaCorr;
    delete T_HPSdecayModeFinding;
    delete T_IsInTheCracks;
    delete T_JetCSV;
    delete T_LTIpVtdxy;
    delete T_LTIpVtdxyError;
    delete T_LTIpVtdz;
    delete T_LTIpVtdzError;
    delete T_LTNormChiSqrd;
    delete T_LTPt;
    delete T_LTValidHits;
    delete T_LTvalid;
    delete T_LTvx;
    delete T_LTvy;
    delete T_LTvz;
    delete T_MomentumRank;
    delete T_NProngs;
    delete T_NSignalGammas;
    delete T_NSignalNeutrals;
    delete T_P;
    // >>> End delete <<<
}

void
tl::Branches::Null()
{
    roast::Branches::Null();

    // >>> Begin null <<<
    L_Charge = 0;
    L_CorrectedD0 = 0;
    L_CorrectedDZ = 0;
    L_EventWeight = 0;
    L_GenMatchDaughter0Id = 0;
    L_GenMatchDaughter0Status = 0;
    L_GenMatchDaughter1Id = 0;
    L_GenMatchDaughter1Status = 0;
    L_GenMatchGrandmother00Id = 0;
    L_GenMatchGrandmother00Status = 0;
    L_GenMatchGrandmother01Id = 0;
    L_GenMatchGrandmother01Status = 0;
    L_GenMatchGrandmother10Id = 0;
    L_GenMatchGrandmother10Status = 0;
    L_GenMatchGrandmother11Id = 0;
    L_GenMatchGrandmother11Status = 0;
    L_GenMatchId = 0;
    L_GenMatchMother0Id = 0;
    L_GenMatchMother0Status = 0;
    L_GenMatchMother1Id = 0;
    L_GenMatchMother1Status = 0;
    L_GenMatchStatus = 0;
    L_ImpactParameter = 0;
    L_IsElectron = 0;
    L_IsLoose = 0;
    L_IsMuon = 0;
    L_IsTight = 0;
    L_P = 0;
    L_RelIso = 0;
    T_Charge = 0;
    T_DecayMode = 0;
    T_EmFraction = 0;
    T_GenMatchDaughter0Id = 0;
    T_GenMatchDaughter0Status = 0;
    T_GenMatchDaughter1Id = 0;
    T_GenMatchDaughter1Status = 0;
    T_GenMatchGrandmother00Id = 0;
    T_GenMatchGrandmother00Status = 0;
    T_GenMatchGrandmother01Id = 0;
    T_GenMatchGrandmother01Status = 0;
    T_GenMatchGrandmother10Id = 0;
    T_GenMatchGrandmother10Status = 0;
    T_GenMatchGrandmother11Id = 0;
    T_GenMatchGrandmother11Status = 0;
    T_GenMatchId = 0;
    T_GenMatchMother0Id = 0;
    T_GenMatchMother0Status = 0;
    T_GenMatchMother1Id = 0;
    T_GenMatchMother1Status = 0;
    T_GenMatchStatus = 0;
    T_HPSagainstElectronDeadECAL = 0;
    T_HPSagainstElectronLoose = 0;
    T_HPSagainstElectronLooseMVA2 = 0;
    T_HPSagainstElectronLooseMVA3 = 0;
    T_HPSagainstElectronMVA = 0;
    T_HPSagainstElectronMVA2category = 0;
    T_HPSagainstElectronMVA2raw = 0;
    T_HPSagainstElectronMVA3category = 0;
    T_HPSagainstElectronMVA3raw = 0;
    T_HPSagainstElectronMedium = 0;
    T_HPSagainstElectronMediumMVA2 = 0;
    T_HPSagainstElectronMediumMVA3 = 0;
    T_HPSagainstElectronTight = 0;
    T_HPSagainstElectronTightMVA2 = 0;
    T_HPSagainstElectronTightMVA3 = 0;
    T_HPSagainstElectronVLooseMVA2 = 0;
    T_HPSagainstElectronVTightMVA3 = 0;
    T_HPSagainstMuonLoose = 0;
    T_HPSagainstMuonLoose2 = 0;
    T_HPSagainstMuonMedium = 0;
    T_HPSagainstMuonMedium2 = 0;
    T_HPSagainstMuonTight = 0;
    T_HPSagainstMuonTight2 = 0;
    T_HPSbyCombinedIsolationDeltaBetaCorrRaw = 0;
    T_HPSbyCombinedIsolationDeltaBetaCorrRaw3Hits = 0;
    T_HPSbyIsolationMVA2raw = 0;
    T_HPSbyIsolationMVAraw = 0;
    T_HPSbyLooseCombinedIsolationDeltaBetaCorr = 0;
    T_HPSbyLooseCombinedIsolationDeltaBetaCorr3Hits = 0;
    T_HPSbyLooseIsolationMVA = 0;
    T_HPSbyLooseIsolationMVA2 = 0;
    T_HPSbyMediumCombinedIsolationDeltaBetaCorr = 0;
    T_HPSbyMediumCombinedIsolationDeltaBetaCorr3Hits = 0;
    T_HPSbyMediumIsolationMVA = 0;
    T_HPSbyMediumIsolationMVA2 = 0;
    T_HPSbyTightCombinedIsolationDeltaBetaCorr = 0;
    T_HPSbyTightCombinedIsolationDeltaBetaCorr3Hits = 0;
    T_HPSbyTightIsolationMVA = 0;
    T_HPSbyTightIsolationMVA2 = 0;
    T_HPSbyVLooseCombinedIsolationDeltaBetaCorr = 0;
    T_HPSdecayModeFinding = 0;
    T_IsInTheCracks = 0;
    T_JetCSV = 0;
    T_LTIpVtdxy = 0;
    T_LTIpVtdxyError = 0;
    T_LTIpVtdz = 0;
    T_LTIpVtdzError = 0;
    T_LTNormChiSqrd = 0;
    T_LTPt = 0;
    T_LTValidHits = 0;
    T_LTvalid = 0;
    T_LTvx = 0;
    T_LTvy = 0;
    T_LTvz = 0;
    T_MomentumRank = 0;
    T_NProngs = 0;
    T_NSignalGammas = 0;
    T_NSignalNeutrals = 0;
    T_P = 0;
    // >>> End null <<<
}

void
tl::Branches::SetBranchAddresses()
{
    roast::Branches::SetBranchAddresses();

    // >>> Begin address <<<
    fChain->SetBranchAddress("L_Charge", &L_Charge);
    fChain->SetBranchAddress("L_CorrectedD0", &L_CorrectedD0);
    fChain->SetBranchAddress("L_CorrectedDZ", &L_CorrectedDZ);
    fChain->SetBranchAddress("L_EventWeight", &L_EventWeight);
    fChain->SetBranchAddress("L_GenMatchDaughter0Id", &L_GenMatchDaughter0Id);
    fChain->SetBranchAddress("L_GenMatchDaughter0Status", &L_GenMatchDaughter0Status);
    fChain->SetBranchAddress("L_GenMatchDaughter1Id", &L_GenMatchDaughter1Id);
    fChain->SetBranchAddress("L_GenMatchDaughter1Status", &L_GenMatchDaughter1Status);
    fChain->SetBranchAddress("L_GenMatchGrandmother00Id", &L_GenMatchGrandmother00Id);
    fChain->SetBranchAddress("L_GenMatchGrandmother00Status", &L_GenMatchGrandmother00Status);
    fChain->SetBranchAddress("L_GenMatchGrandmother01Id", &L_GenMatchGrandmother01Id);
    fChain->SetBranchAddress("L_GenMatchGrandmother01Status", &L_GenMatchGrandmother01Status);
    fChain->SetBranchAddress("L_GenMatchGrandmother10Id", &L_GenMatchGrandmother10Id);
    fChain->SetBranchAddress("L_GenMatchGrandmother10Status", &L_GenMatchGrandmother10Status);
    fChain->SetBranchAddress("L_GenMatchGrandmother11Id", &L_GenMatchGrandmother11Id);
    fChain->SetBranchAddress("L_GenMatchGrandmother11Status", &L_GenMatchGrandmother11Status);
    fChain->SetBranchAddress("L_GenMatchId", &L_GenMatchId);
    fChain->SetBranchAddress("L_GenMatchMother0Id", &L_GenMatchMother0Id);
    fChain->SetBranchAddress("L_GenMatchMother0Status", &L_GenMatchMother0Status);
    fChain->SetBranchAddress("L_GenMatchMother1Id", &L_GenMatchMother1Id);
    fChain->SetBranchAddress("L_GenMatchMother1Status", &L_GenMatchMother1Status);
    fChain->SetBranchAddress("L_GenMatchStatus", &L_GenMatchStatus);
    fChain->SetBranchAddress("L_ImpactParameter", &L_ImpactParameter);
    fChain->SetBranchAddress("L_IsElectron", &L_IsElectron);
    fChain->SetBranchAddress("L_IsLoose", &L_IsLoose);
    fChain->SetBranchAddress("L_IsMuon", &L_IsMuon);
    fChain->SetBranchAddress("L_IsTight", &L_IsTight);
    fChain->SetBranchAddress("L_P", &L_P);
    fChain->SetBranchAddress("L_RelIso", &L_RelIso);
    fChain->SetBranchAddress("T_Charge", &T_Charge);
    fChain->SetBranchAddress("T_DecayMode", &T_DecayMode);
    fChain->SetBranchAddress("T_EmFraction", &T_EmFraction);
    fChain->SetBranchAddress("T_GenMatchDaughter0Id", &T_GenMatchDaughter0Id);
    fChain->SetBranchAddress("T_GenMatchDaughter0Status", &T_GenMatchDaughter0Status);
    fChain->SetBranchAddress("T_GenMatchDaughter1Id", &T_GenMatchDaughter1Id);
    fChain->SetBranchAddress("T_GenMatchDaughter1Status", &T_GenMatchDaughter1Status);
    fChain->SetBranchAddress("T_GenMatchGrandmother00Id", &T_GenMatchGrandmother00Id);
    fChain->SetBranchAddress("T_GenMatchGrandmother00Status", &T_GenMatchGrandmother00Status);
    fChain->SetBranchAddress("T_GenMatchGrandmother01Id", &T_GenMatchGrandmother01Id);
    fChain->SetBranchAddress("T_GenMatchGrandmother01Status", &T_GenMatchGrandmother01Status);
    fChain->SetBranchAddress("T_GenMatchGrandmother10Id", &T_GenMatchGrandmother10Id);
    fChain->SetBranchAddress("T_GenMatchGrandmother10Status", &T_GenMatchGrandmother10Status);
    fChain->SetBranchAddress("T_GenMatchGrandmother11Id", &T_GenMatchGrandmother11Id);
    fChain->SetBranchAddress("T_GenMatchGrandmother11Status", &T_GenMatchGrandmother11Status);
    fChain->SetBranchAddress("T_GenMatchId", &T_GenMatchId);
    fChain->SetBranchAddress("T_GenMatchMother0Id", &T_GenMatchMother0Id);
    fChain->SetBranchAddress("T_GenMatchMother0Status", &T_GenMatchMother0Status);
    fChain->SetBranchAddress("T_GenMatchMother1Id", &T_GenMatchMother1Id);
    fChain->SetBranchAddress("T_GenMatchMother1Status", &T_GenMatchMother1Status);
    fChain->SetBranchAddress("T_GenMatchStatus", &T_GenMatchStatus);
    fChain->SetBranchAddress("T_HPSagainstElectronDeadECAL", &T_HPSagainstElectronDeadECAL);
    fChain->SetBranchAddress("T_HPSagainstElectronLoose", &T_HPSagainstElectronLoose);
    fChain->SetBranchAddress("T_HPSagainstElectronLooseMVA2", &T_HPSagainstElectronLooseMVA2);
    fChain->SetBranchAddress("T_HPSagainstElectronLooseMVA3", &T_HPSagainstElectronLooseMVA3);
    fChain->SetBranchAddress("T_HPSagainstElectronMVA", &T_HPSagainstElectronMVA);
    fChain->SetBranchAddress("T_HPSagainstElectronMVA2category", &T_HPSagainstElectronMVA2category);
    fChain->SetBranchAddress("T_HPSagainstElectronMVA2raw", &T_HPSagainstElectronMVA2raw);
    fChain->SetBranchAddress("T_HPSagainstElectronMVA3category", &T_HPSagainstElectronMVA3category);
    fChain->SetBranchAddress("T_HPSagainstElectronMVA3raw", &T_HPSagainstElectronMVA3raw);
    fChain->SetBranchAddress("T_HPSagainstElectronMedium", &T_HPSagainstElectronMedium);
    fChain->SetBranchAddress("T_HPSagainstElectronMediumMVA2", &T_HPSagainstElectronMediumMVA2);
    fChain->SetBranchAddress("T_HPSagainstElectronMediumMVA3", &T_HPSagainstElectronMediumMVA3);
    fChain->SetBranchAddress("T_HPSagainstElectronTight", &T_HPSagainstElectronTight);
    fChain->SetBranchAddress("T_HPSagainstElectronTightMVA2", &T_HPSagainstElectronTightMVA2);
    fChain->SetBranchAddress("T_HPSagainstElectronTightMVA3", &T_HPSagainstElectronTightMVA3);
    fChain->SetBranchAddress("T_HPSagainstElectronVLooseMVA2", &T_HPSagainstElectronVLooseMVA2);
    fChain->SetBranchAddress("T_HPSagainstElectronVTightMVA3", &T_HPSagainstElectronVTightMVA3);
    fChain->SetBranchAddress("T_HPSagainstMuonLoose", &T_HPSagainstMuonLoose);
    fChain->SetBranchAddress("T_HPSagainstMuonLoose2", &T_HPSagainstMuonLoose2);
    fChain->SetBranchAddress("T_HPSagainstMuonMedium", &T_HPSagainstMuonMedium);
    fChain->SetBranchAddress("T_HPSagainstMuonMedium2", &T_HPSagainstMuonMedium2);
    fChain->SetBranchAddress("T_HPSagainstMuonTight", &T_HPSagainstMuonTight);
    fChain->SetBranchAddress("T_HPSagainstMuonTight2", &T_HPSagainstMuonTight2);
    fChain->SetBranchAddress("T_HPSbyCombinedIsolationDeltaBetaCorrRaw", &T_HPSbyCombinedIsolationDeltaBetaCorrRaw);
    fChain->SetBranchAddress("T_HPSbyCombinedIsolationDeltaBetaCorrRaw3Hits", &T_HPSbyCombinedIsolationDeltaBetaCorrRaw3Hits);
    fChain->SetBranchAddress("T_HPSbyIsolationMVA2raw", &T_HPSbyIsolationMVA2raw);
    fChain->SetBranchAddress("T_HPSbyIsolationMVAraw", &T_HPSbyIsolationMVAraw);
    fChain->SetBranchAddress("T_HPSbyLooseCombinedIsolationDeltaBetaCorr", &T_HPSbyLooseCombinedIsolationDeltaBetaCorr);
    fChain->SetBranchAddress("T_HPSbyLooseCombinedIsolationDeltaBetaCorr3Hits", &T_HPSbyLooseCombinedIsolationDeltaBetaCorr3Hits);
    fChain->SetBranchAddress("T_HPSbyLooseIsolationMVA", &T_HPSbyLooseIsolationMVA);
    fChain->SetBranchAddress("T_HPSbyLooseIsolationMVA2", &T_HPSbyLooseIsolationMVA2);
    fChain->SetBranchAddress("T_HPSbyMediumCombinedIsolationDeltaBetaCorr", &T_HPSbyMediumCombinedIsolationDeltaBetaCorr);
    fChain->SetBranchAddress("T_HPSbyMediumCombinedIsolationDeltaBetaCorr3Hits", &T_HPSbyMediumCombinedIsolationDeltaBetaCorr3Hits);
    fChain->SetBranchAddress("T_HPSbyMediumIsolationMVA", &T_HPSbyMediumIsolationMVA);
    fChain->SetBranchAddress("T_HPSbyMediumIsolationMVA2", &T_HPSbyMediumIsolationMVA2);
    fChain->SetBranchAddress("T_HPSbyTightCombinedIsolationDeltaBetaCorr", &T_HPSbyTightCombinedIsolationDeltaBetaCorr);
    fChain->SetBranchAddress("T_HPSbyTightCombinedIsolationDeltaBetaCorr3Hits", &T_HPSbyTightCombinedIsolationDeltaBetaCorr3Hits);
    fChain->SetBranchAddress("T_HPSbyTightIsolationMVA", &T_HPSbyTightIsolationMVA);
    fChain->SetBranchAddress("T_HPSbyTightIsolationMVA2", &T_HPSbyTightIsolationMVA2);
    fChain->SetBranchAddress("T_HPSbyVLooseCombinedIsolationDeltaBetaCorr", &T_HPSbyVLooseCombinedIsolationDeltaBetaCorr);
    fChain->SetBranchAddress("T_HPSdecayModeFinding", &T_HPSdecayModeFinding);
    fChain->SetBranchAddress("T_IsInTheCracks", &T_IsInTheCracks);
    fChain->SetBranchAddress("T_JetCSV", &T_JetCSV);
    fChain->SetBranchAddress("T_LTIpVtdxy", &T_LTIpVtdxy);
    fChain->SetBranchAddress("T_LTIpVtdxyError", &T_LTIpVtdxyError);
    fChain->SetBranchAddress("T_LTIpVtdz", &T_LTIpVtdz);
    fChain->SetBranchAddress("T_LTIpVtdzError", &T_LTIpVtdzError);
    fChain->SetBranchAddress("T_LTNormChiSqrd", &T_LTNormChiSqrd);
    fChain->SetBranchAddress("T_LTPt", &T_LTPt);
    fChain->SetBranchAddress("T_LTValidHits", &T_LTValidHits);
    fChain->SetBranchAddress("T_LTvalid", &T_LTvalid);
    fChain->SetBranchAddress("T_LTvx", &T_LTvx);
    fChain->SetBranchAddress("T_LTvy", &T_LTvy);
    fChain->SetBranchAddress("T_LTvz", &T_LTvz);
    fChain->SetBranchAddress("T_MomentumRank", &T_MomentumRank);
    fChain->SetBranchAddress("T_NProngs", &T_NProngs);
    fChain->SetBranchAddress("T_NSignalGammas", &T_NSignalGammas);
    fChain->SetBranchAddress("T_NSignalNeutrals", &T_NSignalNeutrals);
    fChain->SetBranchAddress("T_P", &T_P);
    // >>> End address <<<
}
#endif
