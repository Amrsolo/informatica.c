#include<stdio.h>
#define N 30
/*
ùLeggere una sequenza di interi da tastiera. 
Fermarsi quando la somma degli interi supera una
 costante N (si ponga N a 30). Visualizzare quindi 
 sul monitor quanti interi sono stati inseriti, 
 la loro media (con le prime 2 cifre decimali) e il numero più grande inserito.

*/

int main()
{
    int i,a,cont=0,somma=0,max=0;
    float media=0;

    printf("devi inserire tanti numeri che hanno la somma di 30 non deve essere prescisa\n");

    
    for(i=a;somma<=N;i++)
    {
        
        scanf("%d",&a);
        if(a>max)
        {
            max=a;
        }
        somma+=a;
        cont++;
        media=(float)somma/(cont);
    }

    printf("hai inseritto %d \n numeri e la loro somma = %d \n e la media = %.2f \n e il numero massimo =  %d \n",cont,somma,media,max);

    return 0;
}