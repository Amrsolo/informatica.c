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
    int num_ut,num_pc;

    printf(" inserisci un numero indovinato da 1 a 10 \n");
    scanf("%d",&num_ut);

    num_pc=rand() % 10+1;
    
    do
    {
        if(num_pc<num_ut)
        {
            printf("il numero che hai inseritto e' maggiore da quello da indovinare riindovini \n");
            scanf("%d",&num_ut);
        }
        else if(num_pc>num_ut)
        {
            printf("il numero che hai inseritto e' minore da quello da indovinare riindovini \n");
            scanf("%d",&num_ut);
        } 
        else
        {
            printf("bravo i due numeri sono ugale il tuo e' %d e quello che era da indovinare = %d \n",num_ut,num_pc);
            
        }  
    }while(num_pc!=num_ut);

    printf("bravo i due numeri sono ugale il tuo e' %d e quello che era da indovinare = %d \n",num_ut,num_pc);

    return 0;
}