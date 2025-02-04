#!/bin/bash


clear


nome=""
cognome=""
ora=""
saluto="Ciao"


echo "Inserisci il tuo nome:"
read nome


echo "Inserisci il tuo cognome:"
read cognome


echo "Inserisci l'ora (in formato 24 ore):"
read ora


# Saluto iniziale
echo "$saluto $nome $cognome"


if [ "$ora" -ge 6 ] && [ "$ora" -lt 12 ]; 
then
    echo "Buongiorno!"
elif [ "$ora" -ge 12 ] && [ "$ora" -lt 18 ]; 
then
    echo "Buon pomeriggio!"
else
    echo "Buona sera!"
fi