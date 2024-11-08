#include<stdio.h>

int main()
{
    int a=0,max,min,cont=0,som=0;

    max=min=a;
    
    do
    {
        printf("inserisci un numero intero \n");
        scanf("%d",&a);
        som=som+a;
        cont++;

        if(a != 0)
        {
            if(a>max)
                {
                    max=a;
                }
            
            if(a<min)
                {
                    min=a;
                }
            
        }


    }while(a != 0);

    printf("il numero più grande e' %d \n",max);
    printf("il numero più piccolo e' %d \n",min);
    printf("hai inseritto %d numeri e la somma sara = a %d \n",cont-1,som);

    return 0;
}