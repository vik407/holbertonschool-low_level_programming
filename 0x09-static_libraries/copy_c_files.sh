#!/bin/bash
cat list|cut -d "." -f1|
	while read CD_KND
	do
	Filename=$(find ../ -name "${CD_KND}.c" | head -n1)
	echo "copying ${CD_KND} file"
	cat "${Filename}" > "${CD_KND}.c"
	done