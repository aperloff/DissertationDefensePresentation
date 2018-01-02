#!/bin/bash

declare -a jets=("jets2" "jets3" "jets4")
declare -a leptons=("electron" "muon")
declare -a variables=("Kin" "KinME" "ME")
declare -a formats=("pdf" "eps" "png")

for jet in "${jets[@]}"; do
    for lep in "${leptons[@]}"; do
	for var in "${variables[@]}"; do
	    for format in "${formats[@]}"; do
		export filename="${var}BDT_${lep}.${format}"
		echo "Getting file ${filename} ... "
		scp aperloff@cmslpc-sl6.fnal.gov:/uscms_data/d2/aperloff/Summer12ME8TeV/2017_09_18_LimitHistograms_PU_CSV_TTbar_QCDEta_Scale/nominal/${jet}/${lep}/${filename} ./
		mv "${filename}" "$(basename "${filename}" ${lep}.${format})${jet}_${lep}.${format}"
	    done
	done
    done
done