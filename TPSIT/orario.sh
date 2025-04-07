#!/bin/bash


if [ -z "$1" ] || [ -z "$2" ]; 
then
    echo "Utilizzo: $0 [nome] [orario 0-24]"
    exit 1
fi

nome="$1"
ora="$2"


if ! [[ "$ora" =~ ^[0-9]+$ ]] || [ "$ora" -lt 0 ] || [ "$ora" -gt 24 ]; 
then
    echo "Orario non valido. Inserisci un numero tra 0 e 24."
    exit 1
fi

# Messaggio in base all'orario
if [ "$ora" -le 12 ]; 
then
    echo "Buongiorno $nome!"
elif [ "$ora" -le 18 ]; 
then
    echo "Buon pomeriggio $nome!"
else
    echo "Buonasera $nome!"
fi
