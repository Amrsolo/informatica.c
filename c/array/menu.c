#include <stdio.h>
#define N 10

void CaricaArray(int v1[],int v2[]);
void stampaarray(int v1[],int v2[]);
int num_max(int v1[],int v2[]);
void InvertiAltroVettore(int v1[ ], int v2[ ],int v3[ ]);
int ricercaElemento(int v1[ ], int x);
void azzeraVettore(int v1[]);
void menu(int scelta);
int main()
{
    int numeri[N],r,numeri2[N],numeri3[N],a;
    printf("inserisci un numero per trovare\n");
    scanf("%d",&a);

    CaricaArray(numeri,numeri2);
    stampaarray(numeri,numeri2);
    r=num_max(numeri,numeri2);
    printf("il numero massimo dalla sequenza di numeri e' %d\n",r);
    InvertiAltroVettore(numeri,numeri2,numeri3);
    r=ricercaElemento(numeri,a);
    printf("il numero e' %d\n",r);
    azzeraVettore(numeri);
    return 0;
}
void menu(int scelta)
{
    int numeri[N],r,numeri2[N],numeri3[N],a;
    switch (scelta)
    {
        case 1:
            CaricaArray(numeri,numeri2);
        break;
        case 2:
            stampaarray(numeri,numeri2);
        break;
        case 3:
            r=num_max(numeri,numeri2);
            printf("il numero massimo dalla sequenza di numeri e' %d\n",r);
        break;
        case 4:
            InvertiAltroVettore(numeri,numeri2,numeri3);
        break;
        case 5:
            r=ricercaElemento(numeri,a);
            printf("il numero e' %d\n",r);
        break;
        case 6:
        
        break;
    }
}

void CaricaArray(int v1[],int v2[])
{
    int i;

    printf("inserisci 10 numeri diversi\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&v1[i]); 
    }
    printf("inserisci altri 10 numeri diversi\n");
    for(i=0;i<N;i++)
    {
        scanf("%d",&v2[i]); 
    }
    
}
void stampaarray(int v1[],int v2[])
{
    int i;
     printf("\ni numeri che hai inseritto sono \n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",v1[i]);
    }
    printf("\ni numeri che hai inseritto sono \n");
    for(i=0;i<N;i++)
    {
        printf("%d\n",v2[i]);
    }
}

int num_max(int v1[],int v2[])
{
    int max = v1[0], i;

    for(i = 1; i < N; i++) 
    {
        if(v1[i] > max) 
        {
            max = v1[i];
        }
    }
    for(i = 1; i < N; i++) 
    {
        if(v2[i] > max) 
        {
            max = v2[i];
        }
    }

    return max; 
}
/*
copia tutti gli elementi di v1 in v2  in modo che il 1° elemento di v1 
sia l'ultimo di v2, il 2° di v1 sia il penultimo in v2 e così via. Indicato algoritmo 
risolutivo: un solo ciclo; suggerito uso di 2 indici (uno per il
vettore v1 un altro per v2); risposto alle richieste di chiarimento
*/
void InvertiAltroVettore(int v1[ ], int v2[ ],int v3[ ])
{
    int i;
    for(i=0;i<=N;i++)
    {
        v3[i]=v1[i];
        v1[i]=v2[i];
        v2[i]=v3[i];

    }
    for(i=0;i<N;i++)
    {
        printf("%d \t%d\n",v1[i],v2[i]);
    }
}

int ricercaElemento(int v1[ ], int x) 
{
    int i;
    for(i=0;i<N;i++)
    {
        if(x==v1[i])
        {
            return x;
        }
    }
    return -1;
}

void azzeraVettore(int v1[])
{
    int i;
    
    for(i=0;i<N;i++)
    {
        v1[i]=0;
    }
    for(i=0;i<N;i++)
    {     
        printf("i vettori adesso = %d",v1[i]);
    }
}