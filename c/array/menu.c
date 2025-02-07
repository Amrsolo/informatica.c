#include <stdio.h>
#define N 10

void CaricaArray(int v[]);
void stampaarray(int v[]);
int num_max(int v[]);
int main()
{
    int numeri[N],r;

    CaricaArray(numeri);
    stampaarray(numeri);
    r=num_max(numeri);
    printf("il numero massimo dalla sequenza di numeri e' %d\n",r);
    return 0;
}

void CaricaArray(int v[])
{
    int i;

    printf("inserisci 10 numeri diversi\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&v[i]); 
    }
}
void stampaarray(int v[])
{
    int i;
     printf("\ni numeri che hai inseritto sono \n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",v[i]);
    }
}

int num_max(int v[])
{
    int max = v[0], i;

    for(i = 1; i < N; i++) 
    {
        if(v[i] > max) 
        {
            max = v[i];
        }
    }

    return max; 
}
