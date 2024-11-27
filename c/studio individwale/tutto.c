#include<stdio.h>

int main()
{
    int a,somma=0,per=0,div=0,ris;

    printf("cosa vuoi inserisci 1 per la somma dei numeri , 2 per il multiplo dei numeri e 3 per il divisore \n");
    scanf("%d",&ris);
    printf("nella seconda e la terza programma digita 1 per terminarla (per fermarla)\n");

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
            printf("inserisci numeri per trovare la moltiplicazione\n");
            while(a!=1)
            {
                scanf("%d",&a);
                per*=a;
            }
            printf("il multilplu = %d \n",per);
        break;

        case 3:
            printf("inserisci numeri per trovare i divisori\n");
            for(int i=0;i<=10;i++)
             {
                scanf("%d",&a);
                div=div/a;
             }
            
            printf("i divisori = %d \n",div);
        break;
        default:
			printf("errore \n");
    }

    return 0;
}