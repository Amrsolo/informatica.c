#include<stdio.h>
#define N 10

void carica_interi(int v[]);
void vis(int v[]);
int main()
{
    int num[N];


    carica_interi(num);
    vis(num);

    return 0;
}

void carica_interi(int v[])
{   
    int i;
    printf("inserisci una sequenza di 10 numeri interi\n");

    for(i=0;i<N;i++)
    {
        scanf("%d",&v[i]);
    }
}

void vis(int v[])
{
    int i;
    printf("il contenuto dell'array =\n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",v[i]);
    }
}
