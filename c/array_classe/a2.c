#include<stdio.h>
#define N 10

void carica_interi(float v[]);
void vis(float v[]);
float somma(float v[]);
float media(float v[]);
int main()
{
    float num[N],r;


    carica_interi(num);
    r=somma(num);
    printf("la somma = %.2f\n",r);
    r=media(num);
    printf("la media = %.2f\n",r);
    return 0;
}

void carica_interi(float v[])
{   
    int i;
    printf("inserisci una sequenza di 10 numeri interi\n");

    for(i=0;i<N;i++)
    {
        scanf("%f",&v[i]);
    }
}
float somma(float v[])
{
    int i,somma=0;
    for(i=0;i<N;i++)
    {
        somma+=v[i];
    }
    return somma;
}
float media(float v[])
{
    int i;
    float somma=0,media=0;
    for(i=0;i<N;i++)
    {
        somma+=v[i];
        
    }
    media=(float)somma/N;
    return media;
}

