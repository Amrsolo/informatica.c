#include <stdio.h>
//Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma è 15. 
int main()
{
    int scelta;

    printf("inserisci 1 per la prima programma che cè gia il numero pronto o 2 per darmi tu il numero \n");
    scanf("%d",&scelta);

    switch(scelta)
    {
        case 1:
                 int a=0;
                 int b=15;
                
                while(a!=16)
                {
                    printf("i numeri saranno %d \t+\t %d \n",a,b);
                    a++;
                    b--;
                }
        break;
        case 2;
                int a,b;
                printf("insersici il primo numero intero \n");
                scanf("%d",a);
                printf("insersici il secondo numero intero \n");
                scanf("%d",b);

                if(a>b)
                {
                    while(a!=a+1)
                    {
                        printf("i numeri saranno %d \t+\t %d \n",a,b);
                        a++;
                        b--;
                    }
                }
                else
                {
                    printf("i numeri saranno %d \t+\t %d \n",a,b);
                    a--;
                    b++;
                }
        break;

        default: 
            printf("c'è qualcosa andata storta");    
    }

    return 0;
    
}