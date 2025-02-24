#include<stdio.h>
/*
Verifica numero pari o dispari
Scrivi una funzione isPari(int n) che restituisca 1 se il numero è pari e 0 se è dispari.
*/
int pari_dispari(int x);
int main()
{
    int a,r;

    printf("inserisci due numeri \n");
    scanf("%d",&a);

    r=pari_dispari(a);
    printf("il numero e = %d\n",r);
    
    return 0;
}
int pari_dispari(int x)
{
    if(x%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}