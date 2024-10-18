#include <stdio.h>
int main()
{
    int a , quantita;

    printf("insersici un numero da 1 a 4 \n");
    scanf("%d",&a);
    printf("insersici una quantita \n");
    scanf("%d",&quantita);

    switch (a)
    {
    case 1:     
                if(quantita>50)
                {
                    printf("la quantità chiesta non disponibile");
                }
                else
                {
                    printf("la chiesta e' disponibile hai chiesto %d per il 1 prodotto \n",quantita);
                }
                
        break;
    case 2:     
                if(quantita>100)
                {
                    printf("la quantità chiesta non disponibile");
                }
                else
                {
                    printf(" la chiesta e' disponibile hai chiesto %d per il 2 prodotto \n",quantita);
                }
                
        break;
    case 3:     
                if(quantita>25)
                {
                    printf("la quantità chiesta non disponibile");
                }
                else
                {
                    printf(" la chiesta e' disponibile hai chiesto %d per il 3 prodotto \n",quantita);
                }
                
        break;
    case 4:     
                if(quantita>10)
                {
                    printf("  la quantità chiesta non disponibile (!errore!!!)");
                }
                else
                {
                    printf(" la chiesta e' disponibile hai chiesto %d per il 4 prodotto \n",quantita);
                }
                
        break; 
    }
    return 0;
}