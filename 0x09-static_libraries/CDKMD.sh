#!/bin/bash
cat list|cut -d "." -f1|
    while read CD_KND
    do
	Filename=$(find ../ -name "${CD_KND}.c" | head -n1)
	echo "creating ${CD_KND} file"
	gcc -g -O -c "${Filename}" -o "${CD_KND}.o"
	ar rc libholberton.a "${CD_KND}.o"
	done
