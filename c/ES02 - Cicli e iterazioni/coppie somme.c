#include <stdio.h>
//Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
int main()
{
    int a,b,s,scelta;

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
                printf("insersici il primo numero intero \n");
                scanf("%d",&a);
                printf("insersici il secondo numero intero \n");
                scanf("%d",&b);

                if(a>b)
                {
                    while(a!=a)
                    {
                        printf("i numeri saranno %d \t+\t %d \n",a,b);
                        a--;
                        b++;
                    }
                }
                else
                {
                    while(b!=a)
                    {
                        printf("i numeri saranno %d \t+\t %d \n",a,b);
                        a++;
                        b--;
                    }
                }    
        break;

        default:
            printf("Scelta non valida.\n");    
    

        return 0;
    
    }
}   