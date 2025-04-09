#include<stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 15

void carica_random(int v[]);
int cerca_ramdom(int v[],int x);

int main() {
    int num[N],a,r;

    printf("inserisci un numero da trovare\n");
    scanf("%d",&a);

    carica_random(num);
    r=cerca_ramdom(num,a);
    printf("il numero c'e' nelle celle come il %dth",r);


    return 0;
}

void carica_random(int v[]) {
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        v[i] = rand() % 20 + 1;
    }
}

int cerca_ramdom(int v[],int x)
{   
    int i;
    for(i=0;i<N;i++)
    {
        if(v[i]==x)
        {
            return i;
        }
        else
        {
            printf("il numero non c'è nelle celle");
            return 1;
        }
    }

}

