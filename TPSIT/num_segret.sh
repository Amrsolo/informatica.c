#!/bin/bash

# Genera un numero segreto tra 1 e 100
numero_segreto=$((RANDOM % 100 + 1))

# Numero massimo di tentativi
max_tentativi=10

tentativi=0

echo "Benvenuto nel gioco 'Indovina il Numero Segreto'!"
echo "Prova a indovinare un numero tra 1 e 100. Hai $max_tentativi tentativi."

while [ $tentativi -lt $max_tentativi ]; do
    # Incrementa il numero di tentativi
    ((tentativi++))
    
    # Chiede all'utente di inserire un numero
    read -p "Tentativo $tentativi: " tentativo
    
    # Controlla se l'input è un numero valido
    if ! [[ "$tentativo" =~ ^[0-9]+$ ]]; then
        echo "Errore: Inserisci un numero valido."
        ((tentativi--))  # Non conta il tentativo errato
        continue
    fi
    
    # Converte l'input in intero
    tentativo=$((tentativo))
    
    # Controlla se l'utente ha indovinato
    if [ "$tentativo" -eq "$numero_segreto" ]; then
        echo "Complimenti! Hai indovinato il numero in $tentativi tentativi."
        exit 0
    elif [ "$tentativo" -lt "$numero_segreto" ]; then
        echo "Troppo basso! Riprova."
    else
        echo "Troppo alto! Riprova."
    fi

done

# Se l'utente supera il numero massimo di tentativi
echo "Hai esaurito i tentativi! Il numero segreto era $numero_segreto. Ritenta!"
exit 1