#!/bin/bash

# Controlla se sono stati passati esattamente 3 argomenti
if [ "$#" -ne 3 ]; then
    echo "Uso: $0 operazione num1 num2"
    echo "Operazioni supportate: add, sub, mul, div"
    exit 1
fi

# Assegna gli argomenti a variabili
operazione=$1
num1=$2
num2=$3

# Esegue l'operazione richiesta usando if-elif-else
if [ "$operazione" = "add" ]; then
    risultato=$((num1 + num2))
    echo "Risultato della somma=$risultato"
elif [ "$operazione" = "sub" ]; then
    risultato=$((num1 - num2))
    echo "Risultato della sottrazione=$risultato"
elif [ "$operazione" = "mul" ]; then
    risultato=$((num1 * num2))
    echo "Risultato della moltiplicazione=$risultato"
elif [ "$operazione" = "div" ]; then
    if [ "$num2" -eq 0 ]; then
        echo "Errore: divisione per zero non consentita"
        exit 2
    fi
    risultato=$((num1 / num2))
    echo "Risultato della divisione=$risultato"
else
    echo "Errore: operazione non supportata"
    echo "Operazioni disponibili: add, sub, mul, div"
    exit 3
fi
