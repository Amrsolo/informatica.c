#include<stdio.h>
#define   N 10

void Carica(int v[], int x );
void cazzo(int v[]);
void NuovoInserisci (int v [ ], int x );
void cazzo1(int v[]);
int main()
{
    int num[N],a,ex[N],b;

    printf("Inserisci un intero: ");
    scanf("%d", &a);
    printf("Inserisci un intero: ");
    scanf("%d", &b);

    Carica(num,a);
    cazzo(num);
    NuovoInserisci(ex,b);
    cazzo1(ex);
    return 0;
}
 
void Carica(int v[],int x )
{
    int i;
    if(x%2!=0)
    {
        x++;
    }
    for(i=0;i<N;i++)
    {
        v[i]=x;
        x+=2;
    }
}

void cazzo(int v[])
{
    int i=0;
    while(i!=N)
    {
        printf("%d\n",v[i]);
        i++;

    }
}

void NuovoInserisci (int v [ ], int x )
{
    int i,r=2;
    for(i=0;i<N;i++)
    {   
        v[i]=x;
        x=x*r;
        r++;

    }
}
