#!/bin/bash

# Funzione per visualizzare il menù
menu() {
    echo -e "\e[1;34m\e[47m=========================\e[0m" # Colore blu su sfondo bianco
    echo -e "\e[1;34m\e[47m  Seleziona un'opzione  \e[0m"
    echo -e "\e[1;34m\e[47m=========================\e[0m"
    echo -e "\e[1;32m1) Somma di due numeri\e[0m"
    echo -e "\e[1;32m2) Divisione di due numeri\e[0m"
    echo -e "\e[1;32m3) Moltiplicazione di due numeri\e[0m"
    echo -e "\e[1;32m4) Sottrazione di due numeri\e[0m"
    echo -e "\e[1;31m0) Esci\e[0m"
}

# Funzione per eseguire le operazioni
codice() {
    
        if [$cscelta -eq 1];
        then

            echo "Inserisci il primo numero:"
            read num1
            echo "Inserisci il secondo numero:"
            read num2
            echo "La somma è: $((num1 + num2))"
            ;;
        elif[]
            echo "Inserisci il primo numero:"
            read num1
            echo "Inserisci il secondo numero:"
            read num2
            if [ $num2 -ne 0 ]; then
                echo "La divisione è: $((num1 / num2))"
            else
                echo "Errore: Divisione per zero!"
            fi
            ;;
        3)
            echo "Inserisci il primo numero:"
            read num1
            echo "Inserisci il secondo numero:"
            read num2
            echo "La moltiplicazione è: $((num1 * num2))"
            ;;
        4)
            echo "Inserisci il primo numero:"
            read num1
            echo "Inserisci il secondo numero:"
            read num2
            echo "La sottrazione è: $((num1 - num2))"
            ;;
        0)
            echo "Uscita dal programma."
            exit 0
            ;;
        *)
            echo "Opzione non valida. Riprova."
            ;;
    esac
}

# Ciclo principale
while true; do
    menu
    echo "Seleziona un'opzione:"
    read scelta
    codice $scelta
    echo ""
done