#include<stdio.h>
int main()
{
    int a,i,somma_posiivi=0,somma_negativi=0;

    printf("inserisci un numero \n");
    scanf("%d",&a);


    while(a!=0)
    {
        scanf("%d",&a);
        if(a<0)
        {
            somma_negativi+=a;
        }
        else if(a>0)
        {
           somma_posiivi+=a;
        }
    }

    printf("la somma dei numeri positivi = %d\nla somma dei numeri negativi = %d \n",somma_posiivi,somma_negativi);
    return 0;
}