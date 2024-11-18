#include <stdio.h>

/*
Classe: 3H
Nome: 3mr
Cognome: Elsayed
Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori.
*/

int main() {
    int a, i = 1; 

    printf("Scrivi un numero intero 'positivo' per trovare i suoi divisori: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("ma non capisci?!! \n deve essere un numero posetivo.\n");
        return 1; //perchè non puo essere ne uno no di meno 
    }

    printf("I divisori del %d sono:\n", a);

  
    while (i <= a) {
        if (a % i == 0) {
            printf("%d\n", i); 
        }
        i++; 
    }

    return 0;
}
