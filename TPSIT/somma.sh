#!/bin/bash


if [ "$1" != "add" ]; then
    echo "Uso: $0 add num1 num2 ..."
    exit 1
fi


somma=0


shift


while [ "$1" ]; do
    somma=$((somma + $1))
    shift
done

# Stampa il risultato
echo "Risultato della somma=$somma"
