#include <stdio.h>
//Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
int main()
{
    int a,b,a1,s,scelta;

    printf("inserisci 1 per la prima programma che cè gia il numero pronto o 2 per darmi tu il numero \n");
    scanf("%d",&scelta);

    switch(scelta)
    {
        case 1:
                 a=0;
                 b=15;
                
                while(a!=16)
                {
                    printf("per arrivare al 15 fai \t %d \t+\t %d \n",a,b);
                    a++;
                    b--;
                }
        break;
        case 2:
                printf("insersici l'intero che doppiamo usarlo per come la somma \n");
                scanf("%d",&a);
                a1=a;
                b=0;

                
                    while(a!=0)
                    {
                        printf("i numeri saranno %d + %d = %d \n",a,b,a1);
                        a--;
                        b++;
                    }
                
        break;

        default:
            printf("Scelta non valida.\n");    
    

        return 0;
    
    }
}   