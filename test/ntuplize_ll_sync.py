import FWCore.ParameterSet.Config as cms
import FWCore.ParameterSet.VarParsing as VarParsing

options = VarParsing.VarParsing('analysis')
options.register("data", False,
        VarParsing.VarParsing.multiplicity.singleton,
        VarParsing.VarParsing.varType.bool,
        "Indicate if data is being used (or MC)")
options.register("globalTag", "76X_mcRun2_asymptotic_v12",
        VarParsing.VarParsing.multiplicity.singleton,
        VarParsing.VarParsing.varType.string,
        "Global tag to use")
options.register("printPreselection", False,
        VarParsing.VarParsing.multiplicity.singleton,
        VarParsing.VarParsing.varType.bool,
        "Print information about preselected leptons")
options.parseArguments()

process = cms.Process("Taus")

process.options = cms.untracked.PSet(wantSummary = cms.untracked.bool(True))

process.load("FWCore.MessageLogger.MessageLogger_cfi")
process.MessageLogger.cerr.FwkReport.reportEvery = 2000

process.maxEvents = cms.untracked.PSet( input = cms.untracked.int32( options.maxEvents ) )

process.load("Configuration.StandardSequences.FrontierConditions_GlobalTag_condDBv2_cff")
process.GlobalTag.globaltag = options.globalTag

process.source = cms.Source("PoolSource",
        fileNames = cms.untracked.vstring(options.inputFiles)
)

process.TFileService = cms.Service("TFileService",
        closeFileFast = cms.untracked.bool(True),
        fileName = cms.string("test/multilepton/ttH2Nonbbgg_125/test.root")
)

import os
dirname = os.path.dirname(process.TFileService.fileName.pythonValue().strip("'"))
if not os.path.isdir(dirname):
    os.makedirs(dirname)

from JetMETCorrections.Configuration.JetCorrectionServices_cff import *

process.ak4PFCHSL1Fastjet = cms.ESProducer(
        'L1FastjetCorrectionESProducer',
        level       = cms.string('L1FastJet'),
        algorithm   = cms.string('AK4PFchs'),
        srcRho      = cms.InputTag('fixedGridRhoFastjetAll')
)
process.ak4PFchsL2Relative = ak4CaloL2Relative.clone(algorithm = 'AK4PFchs')
process.ak4PFchsL3Absolute = ak4CaloL3Absolute.clone(algorithm = 'AK4PFchs')
process.ak4PFchsL1L2L3 = cms.ESProducer("JetCorrectionESChain",
        correctors = cms.vstring(
            'ak4PFCHSL1Fastjet',
            'ak4PFchsL2Relative',
            'ak4PFchsL3Absolute')
)

process.load("RecoEgamma.ElectronIdentification.ElectronMVAValueMapProducer_cfi")
process.load("ttH.LeptonID.ttHLeptons_cfi")

process.taus = cms.EDAnalyzer("TauProcessor",
        data = cms.bool(options.data),
        electrons = cms.InputTag("ttHLeptons"),
        muons = cms.InputTag("ttHLeptons"),
        minJets = cms.uint32(0),
        minTags = cms.uint32(0),
        maxTags = cms.int32(-1),
        minPreselectedLeptons = cms.uint32(2),
        minLooseLeptons = cms.uint32(0),
        minTightLeptons = cms.uint32(0),
        maxLooseLeptons = cms.int32(-1),
        maxTightLeptons = cms.int32(-1),
        minTaus = cms.uint32(0),
        maxTaus = cms.uint32(0),
        minTightTaus = cms.uint32(0),
        subtractLeptons = cms.bool(False),
        minLooseLeptonPt = cms.double(5.),
        minTightElectronPt = cms.double(5.),
        minTightMuonPt = cms.double(5.),
        maxLooseLeptonEta = cms.double(2.4),
        maxTightLeptonEta = cms.double(2.1),
        minJetPt = cms.double(25.),
        minTagPt = cms.double(25.),
        maxJetEta = cms.double(2.4),
        filterPUJets = cms.bool(False),
        printPreselection = cms.bool(options.printPreselection),
        triggerSingleE = cms.vstring("HLT_Ele27_eta2p1_WPLoose_Gsf_v" if options.data else "HLT_Ele27_WPLoose_Gsf_v"),
        triggerSingleMu = cms.vstring("HLT_IsoMu18_v" if options.data else "HLT_IsoMu17_eta2p1_v"),
        debugEvents = cms.vuint32()
)

process.load("RecoEgamma.ElectronIdentification.ElectronMVAValueMapProducer_cfi")
process.load("SimGeneral.HepPDTESSource.pythiapdt_cfi")
process.load("ttH.TauRoast.genHadronMatching_cfi")

process.filter = cms.EDFilter("HiggsDecayFilter",
        daughterIds = cms.vuint32(15, 23, 24)
)

# process.p = cms.Path(process.filter * process.ttHLeptons * process.taus)

if options.data:
    process.p = cms.Path(
            process.electronMVAValueMapProducer
            * process.ttHLeptons
            * process.taus
    )
else:
    process.p = cms.Path(
            process.genParticlesForJetsNoNu
            * process.ak4GenJetsCustom
            * process.selectedHadronsAndPartons
            * process.genJetFlavourInfos
            * process.matchGenBHadron
            * process.matchGenCHadron
            * process.electronMVAValueMapProducer
            * process.ttHLeptons
            * process.taus
    )
