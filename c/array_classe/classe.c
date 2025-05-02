#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50

void carica_random(int v1[]);
void stampa(int v1[]);
void copia(int v1[],int v2[],int v3[],int *a,int *b);
void stampa_tutto(int v1[],int v2[],int v3[],int a,int b);

int main()
{
    int a[N],b[N],c[N],a1,b1;

    carica_random(a);
    stampa(a);
    copia(a,b,c,&a1,&b1);
    stampa_tutto(a,b,c,a1,b1);

    return 0;
}

void carica_random(int v1[])
{
    int i;
    srand(time(NULL));
    
    for(i=0;i<N;i++)
    {
        v1[i]=(rand() % 41)-20;
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
void copia(int v1[],int v2[],int v3[],int *a,int *b)
{
    int i,j=0,k=0;

    for(i=0;i<N;i++)
    {
        if(v1[i]>=0)
        {
            v2[j]=v1[i];
            j++;
            
        }
        else
        {
            v3[k]=v1[i];
            k++;
            
        }
    }
    *a=j;
    *b=k;
}

void stampa_tutto(int v1[],int v2[],int v3[],int a,int b)
{
    int i;

    printf("i numeri detro il primo vettore sono\n");
    for(i=0;i<N;i++)
    {
        printf("%d \n",v1[i]);
    }
    printf("i numeri detro il secondo vettore sono\n");
    for(i=0;i<a;i++)
    {
        printf("%d \n",v1[i]);
    }
    printf("i numeri detro il terzo vettore sono\n");
    for(i=0;i<b;i++)
    {
        printf("%d \n",v3[i]);
    }
}