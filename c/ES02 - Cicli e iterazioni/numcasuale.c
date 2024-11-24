#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Classe: 3H
Nome: 3mr
Cognome: Elsayed
Chiedere all'utente di indovinare un numero 
segreto generato casualmente. Il programma continua a 
chiedere finché l'utente non indovina il numero. Stampare
 in quanti tentativi è stato indovinato il numero. Codice di esempio
*/

int main()
{
    srand(time(NULL));
    int a,i,b,cont=0;

    printf(" inserisci un numero massimo \n");
    scanf("%d",&a);

    b=rand() % a;
    
    printf(" indovina un numero \n");
    for(i=0;i<=a;i++)
    {   
        cont++;
        printf("se il numero indovinato e' %d giusto allora ah questa e' la %d prova \n",b,cont);
    }
}