#include<stdio.h>
int somma(int x,int y);
int diffirenza(int x,int y);
/*
Somma e differenza di due numeri
Scrivi una funzione somma(int a, int b) che restituisca la 
somma di due numeri interi e una funzione differenza(int a, int b)
 che restituisca la loro differenza.
 */
int main()
{
    int a,b,r;

    printf("inserisci due numeri \n");
    scanf("%d%d",&a,&b);

    r=somma(a,b);
    printf("la somma delle due num = %d\n",r);
    r=diffirenza(a,b);
    printf("la diffirenza delle due num = %d\n",r);
    return 0;
}

int somma(int x,int y)
{
    return x+y;
}

int diffirenza(int x,int y)
{
    return x-y;
}