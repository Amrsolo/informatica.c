#!/bin/bash

# Controlla se il primo argomento è 'add'
if [ "$1" != "add" ]; then
    echo "Uso: $0 add num1 num2 ..."
    exit 1
fi

# Inizializza la somma a 0
somma=0

# Rimuove il primo argomento ("add")
shift

# Itera attraverso tutti gli argomenti rimanenti
while [ "$1" ]; do
    somma=$((somma + $1))
    shift
done

# Stampa il risultato
echo "Risultato della somma=$somma"
