#include <stdio.h>
#define N 10

void carica(int v1[], int x);
void stampa(int v1[]);
void NuovoInserisci (int v1[], int x);

int main() {
    int num[N], a,b;

    printf("Inserisci un intero: ");
    scanf("%d", &a);
    printf("Inserisci un intero: ");
    scanf("%d", &b);

    // Se il numero è dispari, trasformalo nel pari successivo
    if (a % 2 != 0) {
        a += 1;
    }

    carica(num, a);
    stampa(num);
    NuovoInserisci(num,b);
    return 0;
}

void carica(int v1[], int x) {
    for (int i = 0; i < N; i++) {
        v1[i] = x;
        x += 2;  // Incremento corretto
    }
}

void stampa(int v1[]) 
{
    for (int i = 0; i < N; i++) {
        printf("%d\n", v1[i]);
    }
}
void NuovoInserisci (int v1[], int x)
{
    int a=2,i;
    for(i=0;i<N+1;i++)
    {
        x=x*a;
        v1[i]=x;
        a++;
    }
    for(i=0;i<11;i++)
    {
        printf("%d",v1[i]);
    }
}