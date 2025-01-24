#include <stdio.h>

int main()
{

    int a,somma=0;
    float media=0;


    
    while(a!=0)
    {   
        printf("primo num\n");
        scanf("%d",&a);
        somma+=a;
        media=somma/2.0;
    }

    printf("media =%.2f\n",media);





















    /*
    int a,cont=0;

    printf("1\n");
    scanf("%d",&a);


    while(a>0);
    {   
        cont++;
        a--;
    }
    printf("hai fatto il ciclo %d\n",cont);
    
    */
    return 0;
}