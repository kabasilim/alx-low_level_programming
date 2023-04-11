#!/bin/bash

files=`ls ./*.c`

for a in $files
do
    gcc main.c $a -o ${a:0:$((${#a}-1))}o

    echo "$a Completed"
done

echo "Compilation Complete"
echo "creating static lib"

ar rc liball.a *.o

ranlib liball.a

echo "done"
