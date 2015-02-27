#ifdef FOOBARBAD
// vim: ts=4:sw=4:et:sta
#include "../interface/Branches.h"

using namespace roast;

void
Branches::Clear()
{
    // >>> Begin clear <<<
    CSVeventWeight->clear();
    CSVeventWeightCErr1down->clear();
    CSVeventWeightCErr1up->clear();
    CSVeventWeightCErr2down->clear();
    CSVeventWeightCErr2up->clear();
    CSVeventWeightHFStats1down->clear();
    CSVeventWeightHFStats1up->clear();
    CSVeventWeightHFStats2down->clear();
    CSVeventWeightHFStats2up->clear();
    CSVeventWeightHFdown->clear();
    CSVeventWeightHFup->clear();
    CSVeventWeightLFStats1down->clear();
    CSVeventWeightLFStats1up->clear();
    CSVeventWeightLFStats2down->clear();
    CSVeventWeightLFStats2up->clear();
    CSVeventWeightLFdown->clear();
    CSVeventWeightLFup->clear();
    GJ_Eta->clear();
    GJ_IsBjet->clear();
    GJ_MomentumRank->clear();
    GJ_Phi->clear();
    GJ_Pt->clear();
    GT_Eta->clear();
    GT_MomentumRank->clear();
    GT_ParentEta->clear();
    GT_ParentId->clear();
    GT_ParentP->clear();
    GT_ParentPhi->clear();
    GT_ParentPt->clear();
    GT_Phi->clear();
    GT_Pt->clear();
    GT_ToElectron->clear();
    GT_ToHadrons->clear();
    GT_ToMuon->clear();
    GT_VisEta->clear();
    GT_VisPhi->clear();
    GT_VisPt->clear();
    HT->clear();
    IsTauEvent = 0;
    J_Charge->clear();
    J_MomentumRank->clear();
    J_NumJets->clear();
    J_P->clear();
    J_PartonGrandParentId->clear();
    J_PartonGrandmother00Id->clear();
    J_PartonGrandmother00Status->clear();
    J_PartonGrandmother01Id->clear();
    J_PartonGrandmother01Status->clear();
    J_PartonGrandmother10Id->clear();
    J_PartonGrandmother10Status->clear();
    J_PartonGrandmother11Id->clear();
    J_PartonGrandmother11Status->clear();
    J_PartonId->clear();
    J_PartonMother0Id->clear();
    J_PartonMother0Status->clear();
    J_PartonMother1Id->clear();
    J_PartonMother1Status->clear();
    J_PartonParentId->clear();
    J_PartonStatus->clear();
    J_combSecVtxBTag->clear();
    J_combSecVtxLooseBTag->clear();
    J_combSecVtxMediumBTag->clear();
    J_combSecVtxTightBTag->clear();
    MET_P->clear();
    MHT->clear();
    MomentumRank->clear();
    NTruePV = 0;
    NumCSVLbtagJets->clear();
    NumCSVMbtagJets->clear();
    NumCSVTbtagJets->clear();
    NumCleanCSVLbtagJets->clear();
    NumCleanCSVMbtagJets->clear();
    NumCleanCSVTbtagJets->clear();
    NumCleanNonCSVLbtagJets->clear();
    NumCleanNonCSVMbtagJets->clear();
    NumCleanNonCSVTbtagJets->clear();
    NumCombos = 0;
    NumExLooseElectrons->clear();
    NumExLooseMuons->clear();
    NumGenJets = 0;
    NumGenTaus = 0;
    NumInteractionsBX0 = 0;
    NumInteractionsBXm1 = 0;
    NumInteractionsBXp1 = 0;
    NumLooseElectrons->clear();
    NumLooseMuons->clear();
    NumNonCSVLbtagJets->clear();
    NumNonCSVMbtagJets->clear();
    NumNonCSVTbtagJets->clear();
    NumTaus = 0;
    NumTightElectrons->clear();
    NumTightMuons->clear();
    NumVertices = 0;
    TriggerEventWeight->clear();
    V_NormChiSquared->clear();
    V_NumDOF->clear();
    V_Rho->clear();
    V_Xcoord->clear();
    V_XcoordErr->clear();
    V_Ycoord->clear();
    V_YcoordErr->clear();
    V_Zcoord->clear();
    V_ZcoordErr->clear();
    bQuarkCount = 0;
    cQuarkCount = 0;
    event = 0;
    higgsDecayMode = 0;
    lumi = 0;
    puWeight = 0;
    puWeightDown = 0;
    puWeightUp = 0;
    q2WeightDown = 0;
    q2WeightUp = 0;
    run = 0;
    topPtWeight = 0;
    topPtWeightDown = 0;
    topPtWeightUp = 0;
    // >>> End clear <<<
}

void
Branches::Delete()
{
    // >>> Begin delete <<<
    delete CSVeventWeight;
    delete CSVeventWeightCErr1down;
    delete CSVeventWeightCErr1up;
    delete CSVeventWeightCErr2down;
    delete CSVeventWeightCErr2up;
    delete CSVeventWeightHFStats1down;
    delete CSVeventWeightHFStats1up;
    delete CSVeventWeightHFStats2down;
    delete CSVeventWeightHFStats2up;
    delete CSVeventWeightHFdown;
    delete CSVeventWeightHFup;
    delete CSVeventWeightLFStats1down;
    delete CSVeventWeightLFStats1up;
    delete CSVeventWeightLFStats2down;
    delete CSVeventWeightLFStats2up;
    delete CSVeventWeightLFdown;
    delete CSVeventWeightLFup;
    delete GJ_Eta;
    delete GJ_IsBjet;
    delete GJ_MomentumRank;
    delete GJ_Phi;
    delete GJ_Pt;
    delete GT_Eta;
    delete GT_MomentumRank;
    delete GT_ParentEta;
    delete GT_ParentId;
    delete GT_ParentP;
    delete GT_ParentPhi;
    delete GT_ParentPt;
    delete GT_Phi;
    delete GT_Pt;
    delete GT_ToElectron;
    delete GT_ToHadrons;
    delete GT_ToMuon;
    delete GT_VisEta;
    delete GT_VisPhi;
    delete GT_VisPt;
    delete HT;
    delete J_Charge;
    delete J_MomentumRank;
    delete J_NumJets;
    delete J_P;
    delete J_PartonGrandParentId;
    delete J_PartonGrandmother00Id;
    delete J_PartonGrandmother00Status;
    delete J_PartonGrandmother01Id;
    delete J_PartonGrandmother01Status;
    delete J_PartonGrandmother10Id;
    delete J_PartonGrandmother10Status;
    delete J_PartonGrandmother11Id;
    delete J_PartonGrandmother11Status;
    delete J_PartonId;
    delete J_PartonMother0Id;
    delete J_PartonMother0Status;
    delete J_PartonMother1Id;
    delete J_PartonMother1Status;
    delete J_PartonParentId;
    delete J_PartonStatus;
    delete J_combSecVtxBTag;
    delete J_combSecVtxLooseBTag;
    delete J_combSecVtxMediumBTag;
    delete J_combSecVtxTightBTag;
    delete MET_P;
    delete MHT;
    delete MomentumRank;
    delete NumCSVLbtagJets;
    delete NumCSVMbtagJets;
    delete NumCSVTbtagJets;
    delete NumCleanCSVLbtagJets;
    delete NumCleanCSVMbtagJets;
    delete NumCleanCSVTbtagJets;
    delete NumCleanNonCSVLbtagJets;
    delete NumCleanNonCSVMbtagJets;
    delete NumCleanNonCSVTbtagJets;
    delete NumExLooseElectrons;
    delete NumExLooseMuons;
    delete NumLooseElectrons;
    delete NumLooseMuons;
    delete NumNonCSVLbtagJets;
    delete NumNonCSVMbtagJets;
    delete NumNonCSVTbtagJets;
    delete NumTightElectrons;
    delete NumTightMuons;
    delete TriggerEventWeight;
    delete V_NormChiSquared;
    delete V_NumDOF;
    delete V_Rho;
    delete V_Xcoord;
    delete V_XcoordErr;
    delete V_Ycoord;
    delete V_YcoordErr;
    delete V_Zcoord;
    delete V_ZcoordErr;
    // >>> End delete <<<
}

void
Branches::Null()
{
    // >>> Begin null <<<
    CSVeventWeight = 0;
    CSVeventWeightCErr1down = 0;
    CSVeventWeightCErr1up = 0;
    CSVeventWeightCErr2down = 0;
    CSVeventWeightCErr2up = 0;
    CSVeventWeightHFStats1down = 0;
    CSVeventWeightHFStats1up = 0;
    CSVeventWeightHFStats2down = 0;
    CSVeventWeightHFStats2up = 0;
    CSVeventWeightHFdown = 0;
    CSVeventWeightHFup = 0;
    CSVeventWeightLFStats1down = 0;
    CSVeventWeightLFStats1up = 0;
    CSVeventWeightLFStats2down = 0;
    CSVeventWeightLFStats2up = 0;
    CSVeventWeightLFdown = 0;
    CSVeventWeightLFup = 0;
    GJ_Eta = 0;
    GJ_IsBjet = 0;
    GJ_MomentumRank = 0;
    GJ_Phi = 0;
    GJ_Pt = 0;
    GT_Eta = 0;
    GT_MomentumRank = 0;
    GT_ParentEta = 0;
    GT_ParentId = 0;
    GT_ParentP = 0;
    GT_ParentPhi = 0;
    GT_ParentPt = 0;
    GT_Phi = 0;
    GT_Pt = 0;
    GT_ToElectron = 0;
    GT_ToHadrons = 0;
    GT_ToMuon = 0;
    GT_VisEta = 0;
    GT_VisPhi = 0;
    GT_VisPt = 0;
    HT = 0;
    IsTauEvent = 0;
    J_Charge = 0;
    J_MomentumRank = 0;
    J_NumJets = 0;
    J_P = 0;
    J_PartonGrandParentId = 0;
    J_PartonGrandmother00Id = 0;
    J_PartonGrandmother00Status = 0;
    J_PartonGrandmother01Id = 0;
    J_PartonGrandmother01Status = 0;
    J_PartonGrandmother10Id = 0;
    J_PartonGrandmother10Status = 0;
    J_PartonGrandmother11Id = 0;
    J_PartonGrandmother11Status = 0;
    J_PartonId = 0;
    J_PartonMother0Id = 0;
    J_PartonMother0Status = 0;
    J_PartonMother1Id = 0;
    J_PartonMother1Status = 0;
    J_PartonParentId = 0;
    J_PartonStatus = 0;
    J_combSecVtxBTag = 0;
    J_combSecVtxLooseBTag = 0;
    J_combSecVtxMediumBTag = 0;
    J_combSecVtxTightBTag = 0;
    MET_P = 0;
    MHT = 0;
    MomentumRank = 0;
    NTruePV = 0;
    NumCSVLbtagJets = 0;
    NumCSVMbtagJets = 0;
    NumCSVTbtagJets = 0;
    NumCleanCSVLbtagJets = 0;
    NumCleanCSVMbtagJets = 0;
    NumCleanCSVTbtagJets = 0;
    NumCleanNonCSVLbtagJets = 0;
    NumCleanNonCSVMbtagJets = 0;
    NumCleanNonCSVTbtagJets = 0;
    NumCombos = 0;
    NumExLooseElectrons = 0;
    NumExLooseMuons = 0;
    NumGenJets = 0;
    NumGenTaus = 0;
    NumInteractionsBX0 = 0;
    NumInteractionsBXm1 = 0;
    NumInteractionsBXp1 = 0;
    NumLooseElectrons = 0;
    NumLooseMuons = 0;
    NumNonCSVLbtagJets = 0;
    NumNonCSVMbtagJets = 0;
    NumNonCSVTbtagJets = 0;
    NumTaus = 0;
    NumTightElectrons = 0;
    NumTightMuons = 0;
    NumVertices = 0;
    TriggerEventWeight = 0;
    V_NormChiSquared = 0;
    V_NumDOF = 0;
    V_Rho = 0;
    V_Xcoord = 0;
    V_XcoordErr = 0;
    V_Ycoord = 0;
    V_YcoordErr = 0;
    V_Zcoord = 0;
    V_ZcoordErr = 0;
    bQuarkCount = 0;
    cQuarkCount = 0;
    event = 0;
    higgsDecayMode = 0;
    lumi = 0;
    puWeight = 0;
    puWeightDown = 0;
    puWeightUp = 0;
    q2WeightDown = 0;
    q2WeightUp = 0;
    run = 0;
    topPtWeight = 0;
    topPtWeightDown = 0;
    topPtWeightUp = 0;
    // >>> End null <<<
}

void
Branches::SetBranchAddresses()
{
    // >>> Begin address <<<
    fChain->SetBranchAddress("CSVeventWeight", &CSVeventWeight);
    fChain->SetBranchAddress("CSVeventWeightCErr1down", &CSVeventWeightCErr1down);
    fChain->SetBranchAddress("CSVeventWeightCErr1up", &CSVeventWeightCErr1up);
    fChain->SetBranchAddress("CSVeventWeightCErr2down", &CSVeventWeightCErr2down);
    fChain->SetBranchAddress("CSVeventWeightCErr2up", &CSVeventWeightCErr2up);
    fChain->SetBranchAddress("CSVeventWeightHFStats1down", &CSVeventWeightHFStats1down);
    fChain->SetBranchAddress("CSVeventWeightHFStats1up", &CSVeventWeightHFStats1up);
    fChain->SetBranchAddress("CSVeventWeightHFStats2down", &CSVeventWeightHFStats2down);
    fChain->SetBranchAddress("CSVeventWeightHFStats2up", &CSVeventWeightHFStats2up);
    fChain->SetBranchAddress("CSVeventWeightHFdown", &CSVeventWeightHFdown);
    fChain->SetBranchAddress("CSVeventWeightHFup", &CSVeventWeightHFup);
    fChain->SetBranchAddress("CSVeventWeightLFStats1down", &CSVeventWeightLFStats1down);
    fChain->SetBranchAddress("CSVeventWeightLFStats1up", &CSVeventWeightLFStats1up);
    fChain->SetBranchAddress("CSVeventWeightLFStats2down", &CSVeventWeightLFStats2down);
    fChain->SetBranchAddress("CSVeventWeightLFStats2up", &CSVeventWeightLFStats2up);
    fChain->SetBranchAddress("CSVeventWeightLFdown", &CSVeventWeightLFdown);
    fChain->SetBranchAddress("CSVeventWeightLFup", &CSVeventWeightLFup);
    fChain->SetBranchAddress("GJ_Eta", &GJ_Eta);
    fChain->SetBranchAddress("GJ_IsBjet", &GJ_IsBjet);
    fChain->SetBranchAddress("GJ_MomentumRank", &GJ_MomentumRank);
    fChain->SetBranchAddress("GJ_Phi", &GJ_Phi);
    fChain->SetBranchAddress("GJ_Pt", &GJ_Pt);
    fChain->SetBranchAddress("GT_Eta", &GT_Eta);
    fChain->SetBranchAddress("GT_MomentumRank", &GT_MomentumRank);
    fChain->SetBranchAddress("GT_ParentEta", &GT_ParentEta);
    fChain->SetBranchAddress("GT_ParentId", &GT_ParentId);
    fChain->SetBranchAddress("GT_ParentP", &GT_ParentP);
    fChain->SetBranchAddress("GT_ParentPhi", &GT_ParentPhi);
    fChain->SetBranchAddress("GT_ParentPt", &GT_ParentPt);
    fChain->SetBranchAddress("GT_Phi", &GT_Phi);
    fChain->SetBranchAddress("GT_Pt", &GT_Pt);
    fChain->SetBranchAddress("GT_ToElectron", &GT_ToElectron);
    fChain->SetBranchAddress("GT_ToHadrons", &GT_ToHadrons);
    fChain->SetBranchAddress("GT_ToMuon", &GT_ToMuon);
    fChain->SetBranchAddress("GT_VisEta", &GT_VisEta);
    fChain->SetBranchAddress("GT_VisPhi", &GT_VisPhi);
    fChain->SetBranchAddress("GT_VisPt", &GT_VisPt);
    fChain->SetBranchAddress("HT", &HT);
    fChain->SetBranchAddress("IsTauEvent", &IsTauEvent);
    fChain->SetBranchAddress("J_Charge", &J_Charge);
    fChain->SetBranchAddress("J_MomentumRank", &J_MomentumRank);
    fChain->SetBranchAddress("J_NumJets", &J_NumJets);
    fChain->SetBranchAddress("J_P", &J_P);
    fChain->SetBranchAddress("J_PartonGrandParentId", &J_PartonGrandParentId);
    fChain->SetBranchAddress("J_PartonGrandmother00Id", &J_PartonGrandmother00Id);
    fChain->SetBranchAddress("J_PartonGrandmother00Status", &J_PartonGrandmother00Status);
    fChain->SetBranchAddress("J_PartonGrandmother01Id", &J_PartonGrandmother01Id);
    fChain->SetBranchAddress("J_PartonGrandmother01Status", &J_PartonGrandmother01Status);
    fChain->SetBranchAddress("J_PartonGrandmother10Id", &J_PartonGrandmother10Id);
    fChain->SetBranchAddress("J_PartonGrandmother10Status", &J_PartonGrandmother10Status);
    fChain->SetBranchAddress("J_PartonGrandmother11Id", &J_PartonGrandmother11Id);
    fChain->SetBranchAddress("J_PartonGrandmother11Status", &J_PartonGrandmother11Status);
    fChain->SetBranchAddress("J_PartonId", &J_PartonId);
    fChain->SetBranchAddress("J_PartonMother0Id", &J_PartonMother0Id);
    fChain->SetBranchAddress("J_PartonMother0Status", &J_PartonMother0Status);
    fChain->SetBranchAddress("J_PartonMother1Id", &J_PartonMother1Id);
    fChain->SetBranchAddress("J_PartonMother1Status", &J_PartonMother1Status);
    fChain->SetBranchAddress("J_PartonParentId", &J_PartonParentId);
    fChain->SetBranchAddress("J_PartonStatus", &J_PartonStatus);
    fChain->SetBranchAddress("J_combSecVtxBTag", &J_combSecVtxBTag);
    fChain->SetBranchAddress("J_combSecVtxLooseBTag", &J_combSecVtxLooseBTag);
    fChain->SetBranchAddress("J_combSecVtxMediumBTag", &J_combSecVtxMediumBTag);
    fChain->SetBranchAddress("J_combSecVtxTightBTag", &J_combSecVtxTightBTag);
    fChain->SetBranchAddress("MET_P", &MET_P);
    fChain->SetBranchAddress("MHT", &MHT);
    fChain->SetBranchAddress("MomentumRank", &MomentumRank);
    fChain->SetBranchAddress("NTruePV", &NTruePV);
    fChain->SetBranchAddress("NumCSVLbtagJets", &NumCSVLbtagJets);
    fChain->SetBranchAddress("NumCSVMbtagJets", &NumCSVMbtagJets);
    fChain->SetBranchAddress("NumCSVTbtagJets", &NumCSVTbtagJets);
    fChain->SetBranchAddress("NumCleanCSVLbtagJets", &NumCleanCSVLbtagJets);
    fChain->SetBranchAddress("NumCleanCSVMbtagJets", &NumCleanCSVMbtagJets);
    fChain->SetBranchAddress("NumCleanCSVTbtagJets", &NumCleanCSVTbtagJets);
    fChain->SetBranchAddress("NumCleanNonCSVLbtagJets", &NumCleanNonCSVLbtagJets);
    fChain->SetBranchAddress("NumCleanNonCSVMbtagJets", &NumCleanNonCSVMbtagJets);
    fChain->SetBranchAddress("NumCleanNonCSVTbtagJets", &NumCleanNonCSVTbtagJets);
    fChain->SetBranchAddress("NumCombos", &NumCombos);
    fChain->SetBranchAddress("NumExLooseElectrons", &NumExLooseElectrons);
    fChain->SetBranchAddress("NumExLooseMuons", &NumExLooseMuons);
    fChain->SetBranchAddress("NumGenJets", &NumGenJets);
    fChain->SetBranchAddress("NumGenTaus", &NumGenTaus);
    fChain->SetBranchAddress("NumInteractionsBX0", &NumInteractionsBX0);
    fChain->SetBranchAddress("NumInteractionsBXm1", &NumInteractionsBXm1);
    fChain->SetBranchAddress("NumInteractionsBXp1", &NumInteractionsBXp1);
    fChain->SetBranchAddress("NumLooseElectrons", &NumLooseElectrons);
    fChain->SetBranchAddress("NumLooseMuons", &NumLooseMuons);
    fChain->SetBranchAddress("NumNonCSVLbtagJets", &NumNonCSVLbtagJets);
    fChain->SetBranchAddress("NumNonCSVMbtagJets", &NumNonCSVMbtagJets);
    fChain->SetBranchAddress("NumNonCSVTbtagJets", &NumNonCSVTbtagJets);
    fChain->SetBranchAddress("NumTaus", &NumTaus);
    fChain->SetBranchAddress("NumTightElectrons", &NumTightElectrons);
    fChain->SetBranchAddress("NumTightMuons", &NumTightMuons);
    fChain->SetBranchAddress("NumVertices", &NumVertices);
    fChain->SetBranchAddress("TriggerEventWeight", &TriggerEventWeight);
    fChain->SetBranchAddress("V_NormChiSquared", &V_NormChiSquared);
    fChain->SetBranchAddress("V_NumDOF", &V_NumDOF);
    fChain->SetBranchAddress("V_Rho", &V_Rho);
    fChain->SetBranchAddress("V_Xcoord", &V_Xcoord);
    fChain->SetBranchAddress("V_XcoordErr", &V_XcoordErr);
    fChain->SetBranchAddress("V_Ycoord", &V_Ycoord);
    fChain->SetBranchAddress("V_YcoordErr", &V_YcoordErr);
    fChain->SetBranchAddress("V_Zcoord", &V_Zcoord);
    fChain->SetBranchAddress("V_ZcoordErr", &V_ZcoordErr);
    fChain->SetBranchAddress("bQuarkCount", &bQuarkCount);
    fChain->SetBranchAddress("cQuarkCount", &cQuarkCount);
    fChain->SetBranchAddress("event", &event);
    fChain->SetBranchAddress("higgsDecayMode", &higgsDecayMode);
    fChain->SetBranchAddress("lumi", &lumi);
    fChain->SetBranchAddress("puWeight", &puWeight);
    fChain->SetBranchAddress("puWeightDown", &puWeightDown);
    fChain->SetBranchAddress("puWeightUp", &puWeightUp);
    fChain->SetBranchAddress("q2WeightDown", &q2WeightDown);
    fChain->SetBranchAddress("q2WeightUp", &q2WeightUp);
    fChain->SetBranchAddress("run", &run);
    fChain->SetBranchAddress("topPtWeight", &topPtWeight);
    fChain->SetBranchAddress("topPtWeightDown", &topPtWeightDown);
    fChain->SetBranchAddress("topPtWeightUp", &topPtWeightUp);
    // >>> End address <<<
}
#endif
