#include<stdio.h>

int porodotto_dispari(int x);
int main()
{
    int r,a;
    printf("inserici quanti volte vuoi scriver un numero \n");
    scanf("%d",&a);

    printf("\n");
    r=porodotto_dispari(a);
    printf("il risultato = %d\n",r);

    return 0;
}

int porodotto_dispari(int x)
{
    int prod=1,x1,i;

    for(i=0;i<x;i++)
    {
        scanf("%d",&x1);
        if(x1%2!=0)
        {
            prod*=x1;
        }
    }
    return prod;
}