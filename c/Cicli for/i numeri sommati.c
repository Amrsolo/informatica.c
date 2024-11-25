#include<stdio.h>
/*
Classe: 3H
Nome: 3mr
Cognome: Elsayed
Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
*/

int main()
{
    int i,j=15,n;
    n=j;

    printf("i numeri sommati che sono ugale al 15 saranno\n");

    for(i=0;i<=n;i++,j--)
    {
        printf("%d + %d =15\n",i,j);
    }
    return 0;
}
