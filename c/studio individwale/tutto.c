#include<stdio.h>

int main()
{
    int a,somma=0,per=0,div,ris;

    printf("cosa vuoi inserisci 1 per la somma dei numeri , 2 per il multiplo dei numeri e 3 per il divisore\n");
    scanf("%d",&ris);

    switch(ris)
    {
        case 1:
            while(a!=0)
            {
                printf("inserisci un numero \n");
                scanf("%d",&a);
                somma=somma+a;

            }
            printf("la somma = %d \n",somma);
        break;

        case 2:
            while(a!=0)
            {
                printf("inserisci un numero \n");
                scanf("%d",&a);
                per*=a;
            }
            printf("il multilplu = %d \n",per);
        break;

        default:
			printf("errore \n");
    }

    return 0;
}