from lobster import cmssw
from lobster.core import *

from ttH.TauRoast.datasets import datasets

version = "v27"

storage = StorageConfiguration(
        output=[
            "hdfs:///store/user/matze/ttH/" + version,
            "file:///hadoop/store/user/matze/ttH/" + version,
            "root://ndcms.crc.nd.edu//store/user/matze/ttH/" + version,
            "srm://T3_US_NotreDame/store/user/matze/ttH/" + version,
            "chirp://earth.crc.nd.edu:9666/ttH/" + version
        ]
)

data = Category(
        name='data',
        cores=1,
        runtime=30 * 60
)

tth = Category(
        name='ttH',
        cores=1,
        runtime=30 * 60
)

mc = Category(
        name='mc',
        cores=1,
        runtime=30 * 60
)

workflows = []
for label, path in datasets + datasets_2015D:
    mask = None
    params = ['channel=ttl']
    category = mc

    if '2015' in label:
        mask = 'https://cms-service-dqm.web.cern.ch/cms-service-dqm/CAF/certification/Collisions15/13TeV/Cert_246908-260627_13TeV_PromptReco_Collisions15_25ns_JSON_Silver_v2.txt'
        params += ['data=True', 'globalTag=76X_dataRun2_v12']
        category = data
    elif label.startswith('ttH'):
        category = tth

    workflows.append(Workflow(
        label=label,
        dataset=cmssw.Dataset(
            dataset=path,
            events_per_task=200000,
            lumi_mask=mask
        ),
        category=category,
        pset='ntuplize.py',
        arguments=params,
        merge_size='3.5G'
    ))

config = Config(
        label='tau_' + version,
        workdir='/tmpscratch/users/matze/tau_' + version,
        plotdir='/afs/crc.nd.edu/user/m/mwolf3/www/lobster/tau_' + version,
        storage=storage,
        workflows=workflows,
        advanced=AdvancedOptions(log_level=1)
)
