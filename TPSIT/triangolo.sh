#!/bin/bash


righe=$1
i=1

while [ "$i" -le "$righe" ]; do
    j=1
    while [ "$j" -le "$i" ]; do
        echo -n "*"
        ((j++))
    done
    echo
    ((i++))
done
