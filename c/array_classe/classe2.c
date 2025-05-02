#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 50

void carica_random(int v1[]);
void stampa(int v1[]);
void copia(int v1[], int v2[], int v3[], int *dimB, int *dimC);
void stampa_tutto(int v1[], int v2[], int v3[], int dimB, int dimC);

int main()
{
    int a[N], b[N], c[N];
    int dimB, dimC;

    carica_random(a);
    stampa(a);
    copia(a, b, c, &dimB, &dimC);
    stampa_tutto(a, b, c, dimB, dimC);

    return 0;
}

void carica_random(int v1[])
{
    int i;
    srand(time(NULL));

    for(i = 0; i < N; i++)
    {
        v1[i] = (rand() % 41) - 20;  // numeri tra -20 e 20
    }
}

void stampa(int v1[])
{
    int i;
    printf("I numeri random dentro sono:\n");
    for(i = 0; i < N; i++)
    {
        printf("%d ", v1[i]);
    }
    printf("\n");
}

void copia(int v1[], int v2[], int v3[], int *dimB, int *dimC)
{
    int i, j = 0, k = 0;

    for(i = 0; i < N; i++)
    {
        if(v1[i] >= 0)
        {
            v2[j] = v1[i];
            j++;
        }
        else
        {
            v3[k] = v1[i];
            k++;
        }
    }

    a = j;
    b = k;
}

void stampa_tutto(int v1[], int v2[], int v3[], int dimB, int dimC)
{
    int i;

    printf("I numeri dentro il primo vettore sono:\n");
    for(i = 0; i < N; i++)
    {
        printf("%d ", v1[i]);
    }
    printf("\n");

    printf("I numeri dentro il secondo vettore (positivi e zeri) sono:\n");
    for(i = 0; i < dimB; i++)
    {
        printf("%d ", v2[i]);
    }
    printf("\n");

    printf("I numeri dentro il terzo vettore (negativi) sono:\n");
    for(i = 0; i < b; i++)
    {
        printf("%d ", v3[i]);
    }
    printf("\n");
}
