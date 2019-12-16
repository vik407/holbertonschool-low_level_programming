#!/bin/bash
echo -e "Creating files ---"
gcc -c -fpic *.c
echo -e "Creating dynamic lib ---"
gcc -shared -o libholberton.so *.o
echo -e "Success!"