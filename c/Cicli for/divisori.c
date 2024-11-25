#include<stdio.h>
/*
Classe: 3H
Nome: 3mr
Cognome: Elsayed
Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori. aggiungere la tabella di traccia
*/

int main()
{
    int a, i;

    printf("Scrivi un numero intero 'positivo' per trovare i suoi divisori: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("Ma non capisci?!! \nDeve essere un numero positivo.\n");
        return 1; 
    }

    printf("I divisori di %d sono:\n", a);
    for(i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
