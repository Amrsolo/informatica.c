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
    int a,i,b;

    printf(" inserisci un numero indovinato da 1 a 20 \n");
    scanf("%d",&a);

    if(a>20||a<1)
    {
        printf(" inserisci un numero indovinato da 1 a 20 un altra volta che hai spaglato \n");
        scanf("%d",&a);
    }

    b=rand() % a;
    
    while(b>a)
    {
        
    }

}