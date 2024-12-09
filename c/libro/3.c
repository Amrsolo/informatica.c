#include <stdio.h>

/*Scrivi un programma che esegue la
 somma di tutti i numeri multipli di 5 compresi tra 10 e 100.
*/
int main()
{
    int a,somma=0,multi=5,n=10,n1=100;
    a=n;
    while(a>n&&a<n1)
    {
        multi*=n;
        somma+=multi;
        n++;
    }
    printf("il multipl = %d \tla somma = %d \n",multi,somma);
    return 0;
}