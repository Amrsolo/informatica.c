#include <stdio.h>
/*
scrivere un programma C che visualizzi sul monitor la media di una sequenza di 
interi letti da tastiera. La sequenza termina appena si digita zero 

*/

int main()
{
    int a,cont=0,somma=0;
    float media;


    do
    {
        printf("inserisci un intero\n");
        scanf("%d", &a);
        somma =somma+a;
        cont++;
        media=(float)somma/cont;

    } while (a!=0);
    printf("la media uguale a %.2f \n",media);

    return 0;
}
