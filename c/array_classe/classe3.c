#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50

void carica_random(int v1[]);
void stampa(int v1[]);
void controlla(int v1[]);


int main()
{
    int a[N];

    carica_random(a);
    stampa(a);


    return 0;
}

void carica_random(int v1[])
{
    int i;
    srand(time(NULL));
    
    for(i=0;i<N;i++)
    {
        v1[i]=rand() % 30+10;
    }
}
void stampa(int v1[])
{
    int i;

    printf("i numeri ramdpm detro sono\n");
    for(i=0;i<N;i++)
    {
        printf("%d \n",v1[i]);
    }
}