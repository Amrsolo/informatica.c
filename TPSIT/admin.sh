#!/bin/bash

# Credenziali predefinite
USERNAME_CORRETTO="zio Amr"
PASSWORD_CORRETTA="123456789"

# Richiedi nome utente
echo -n "Inserisci il nome utente: "
read username

# Richiedi password in modo nascosto
echo -n "Inserisci la password: "
read -s password
echo ""

# Verifica credenziali
if [ "$username" == "$USERNAME_CORRETTO" ] && [ "$password" == "$PASSWORD_CORRETTA" ]; then
    echo "Accesso riuscito. Benvenuto, $username!"
else
    echo "Accesso negato. Nome utente o password errati."
fi
