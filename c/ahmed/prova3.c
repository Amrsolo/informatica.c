#include<stdio.h>
int main()
{
    int a,somma=0,cont=0;
    float media;
    printf("inserisci un numero per iniziare\n");
    scanf("%d",&a);

    while(a!=0)
    {
        scanf("%d",&a);
        somma=somma+a;
        cont++;
    
    }
    media=(float)somma/cont;
    printf("la media = %.2f\n",media);

    return 0;
}