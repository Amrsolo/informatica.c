#include<stdio.h>
int main()
{
    int i,a,somma=0;
    float media=0;

    printf("inserisci un numero \n");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        somma+=i;
        
    }
        media=(float)somma/a;
        printf("la somma dei numeri = %d e la ,media = %.2f\n",somma,media);

        return 0;
}