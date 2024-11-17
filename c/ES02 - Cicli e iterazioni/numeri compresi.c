#include <stdio.h>

/*
Classe: 3H
Nome: 3mr
Cognome: Elsayed
Scrivere un programma in C che chiesti 2 numeri interi all’utente, 
stampi sul monitor tutti i numeri compresi fra i 2 interi, partendo dal numero successivo a quello più piccolo.
Es. se i numeri inseriti sono 4 e 12 stampare 5,6,7,8,9,10,11,12
*/
int main()
{
    int a, b, num;

    printf("Inserisci il primo numero intero: ");
    scanf("%d", &a);
    printf("Inserisci il secondo numero intero: ");
    scanf("%d", &b);

    
    if (a > b) {
        num = b + 1; 
        b = a; 
        printf("i numeri compresi tra il %d e il %d sono \n",a,num-1);
    } else {
        num = a + 1; 
        printf("i numeri compresi tra il %d e il %d sono \n",b,a);
    }
   
    
    while (num < b) {
        printf("%d\n", num);
        num++;
    }

    return 0;
}
