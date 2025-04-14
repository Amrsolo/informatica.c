#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10
int ricerca(int v[],int center,int inizio);
void carica_array(int v[]);
void sistema_array(int v[]);

int main()
{
    int v1[N],in,cen;

    carica_array(v1);
    sistema_array(v1);
    return 0;
}

void carica_array(int v[])
{
    int i;
    srand(time(NULL));

    for(i=0;i<N;i++)
    {
        v[i]=rand() % 250+1;
    }
    for(i=0;i<N;i++)
    {
        printf("%d\n",v[i]);
    }
    printf("\n\n\n");
}

void sistema_array(int v[])
{
    int i,j,l;

    for(i=0;i<N;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(v[i]>v[j])
            {
                l=v[i];
                v[i]=v[j];
                v[j]=l;
            }
        }

    }
    for(i=0;i<N;i++)
    {
        printf("%d\n",v[i]);
    }
}
