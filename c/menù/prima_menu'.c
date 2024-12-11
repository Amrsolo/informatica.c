#include <stdio.h>

int main()
{
    int scelta;
    

    printf("scegli 1 per fare la somma di una sequenza di numeri\n");
    printf("scegli 2 per fare la media di una sequenza di numeri\n");
    printf("scegli 3 per fare il divisore di una sequenza di numeri\n");
    printf("scegli 4 per fare la multiplicazione di una sequenza di numeri\n");
    printf("scegli 0 per uscire\n");
    printf("tua scelta e' :");
    scanf("%d",&scelta);

    do
    {
        /*
        printf("scegli 1 per fare la somma di una sequenza di numeri\n");
        printf("scegli 2 per fare la media di una sequenza di numeri\n");
        printf("scegli 3 per fare il divisore di una sequenza di numeri\n");
        printf("scegli 4 per fare la multiplicazione di una sequenza di numeri\n");
        printf("scegli 0 per uscire\n");
        scanf("%d",scelta);*/
            switch (scelta)
            {   
                case 1:
                    { 
                        int somma=0,a;
                        printf("inserisci la sequenza di numeri che si termina con 0\n");

                        while(a!=0)
                        {   
                            scanf("%d",&a);
                            somma+=a;
                        }  
                        
                        printf("la somma = %d\n",somma);
                    }
                break;
            }

    }while(scelta|=0);



    return 0;
}