#include<stdio.h>

/*
Scrivere un programma C che letti 10 interi da tastiera 
li visualizzi tutti (nel ciclo) e stampi la loro somma (fuori dal ciclo).
*/

int main()
{
    int i,a,somma=0;

    printf("inserisci 10 numeri\n");

    
    for(i=0;i<10;i++)
    {
        
        scanf("%d",&a);
        somma+=a;
    }
    
    printf(" la somma = %d\n",somma);
    printf("i numeri che hai inseritto sono %d",a);
    return 0;
}