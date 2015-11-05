from ttH.TauRoast.processing import BasicProcess, CombinedProcess

BasicProcess(
    name="Collisions_DoubleElectron",
    fullname="Collisions",
    limitname="data_obs_ee",
    # add cuts:
    #   - NumLooseElectrons = 2
    paths=["data_DoubleElectron_2012A_06Aug", "data_DoubleElectron_2012A_12Jul", "data_DoubleElectron_2012B_13Jul", "data_DoubleElectron_2012C_24Aug", "data_DoubleElectron_2012C_PR", "data_DoubleElectron_2012D_PR"],
    events=105139786
)

BasicProcess(
    name="Collisions_DoubleMuon",
    # add cuts:
    #   - NumLooseMuons = 2
    fullname="Collisions",
    limitname="data_obs_mumu",
    paths=["data_DoubleMu_2012A_06Aug", "data_DoubleMu_2012A_13Jul", "data_DoubleMu_2012B_PR", "data_DoubleMu_2012C_24Aug", "data_DoubleMu_2012C_PR", "data_DoubleMu_2012D_PR"],
    events=88169930
)

BasicProcess(
    name="Collisions_ElectronMuon",
    # add cuts:
    #   - NumLooseElectrons = 1 and NumLooseMuons = 1
    fullname="Collisions",
    limitname="data_obs_emu",
    paths=["data_MuEG_2012A_06Aug", "data_MuEG_2012A_13Jul", "data_MuEG_2012B_13Jul", "data_MuEG_2012C_24Aug", "data_MuEG_2012C_PR", "data_MuEG_2012D_PR"],
    events=60158786
)

BasicProcess(
    name="collisions_single_e",
    # add cuts:
    #   - NumLooseElectrons = 1
    fullname="Collisions",
    limitname="data_obs_e",
    paths=["data_SingleE_2015D_PR", "data_SingleE_2015D_Oct05"],
    events=297904375
)

BasicProcess(
    name="collisions_single_mu",
    # add cuts:
    #   - NumLooseMuons = 1
    fullname="Collisions",
    limitname="data_obs_mu",
    paths=["data_SingleMu_2015D", "data_SingleMu_2015D_Oct05"],
    events=262813074
)

# CombinedProcess(
#     name="fake_data",
#     limitname="data_obs",
#     subprocesses=["ttjets"]
# )

CombinedProcess(
    name="collisions",
    fullname="Collisions",
    limitname="data_obs",
    subprocesses=["collisions_single_e", "collisions_single_mu"]
)
