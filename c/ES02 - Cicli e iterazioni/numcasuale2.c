#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Classe: 3H
Nome: 3mr
Cognome: Elsayed
Data:27/11/24
bonus - versione semplificata per l’utente - dire all’utente se
 il numero da indovinare è più alto o più basso di quello inserito.
  Il numero random generato deve essere da 1 a 1000

*/
int main()
{
    srand(time(NULL));
    int num_ut,num_pc;

    printf(" inserisci un numero indovinato da 1 a 1000 \n");
    scanf("%d",&num_ut);

    num_pc=rand() % 1000+1;
    
    
        if(num_pc<num_ut)
        {
            printf("il numero che hai inseritto e' maggiore da quello da indovinare  \n");
            
        }
        else if(num_pc>num_ut)
        {
            printf("il numero che hai inseritto e' minore da quello da indovinare \n");
            
        } 
        else
        {
            printf("bravo i due numeri sono ugale il tuo e' %d e quello che era da indovinare = %d \n",num_ut,num_pc);
            
        }  

    printf("bravo i due numeri sono il tuo e' %d e quello che era da indovinare = %d \n",num_ut,num_pc);

    return 0;
}