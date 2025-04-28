#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10

void carica(int v[]);
int count_primes(int v[]);
void stampa(int v[]);
int is_prime(int x);

int main() {
    int a[N], b, r;

    printf("Inserisci un numero: ");
    scanf("%d", &b);

    carica(a);

    r = is_prime(b);
    printf("Il numero %d  primo.\n",b);

    r = count_primes(a);
    printf("Nell'array ci sono %d numeri primi.\n", r);

    stampa(a);

    return 0;
}

void carica(int v[]) 
{
    int i;
    srand(time(NULL));
    for(i = 0; i < N; i++) 
    {
        v[i] = rand() % 250 + 1;
    }
}

int is_prime(int x) 
{
    
    for(int i = 2; i <= x / 2; i++) 
    {
        if(x % i == 0)
            return 0;
    }
    return 1;
}

int count_primes(int v[]) 
{
    int count = 0;

    for(int i = 0; i < N; i++) 
    {
        if(is_prime(v[i]))
            count++;
    }
    return count;
}

void stampa(int v[]) {
    printf("nell'array ci sono:\n");
    for(int i = 0; i < N; i++) {
        printf("%d\n", v[i]);
    }
}
