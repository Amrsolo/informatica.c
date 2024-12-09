#include <stdio.h>
/*Scrivi un programma che legge un numero NUM e quindi successivamente esegue la somma di
NUM numeri inseriti dall'utente.
*/
int main()
{
    int a,num,somma=0,cont=0;

    printf("insersici un numero per eseguire la somma \n");
    scanf("%d",&num);

    printf("insersici %d numeri \n",num);
    do
    {   
        scanf("%d",&a);
        somma+=a;
        cont++;
    }while(cont!=num);

    printf("la somma dei %d numeri = %d \n",num,somma);
    
    return 0;
}