#include <stdio.h>
/* Scrivi un programma che legge un numero NUM e 
visualizza tutti i numeri pari inferiori a tale numero.
*/
int main()
{
    int a;
    printf("inserisci un numero \n");
    scanf("%d",&a);
    printf("i numeri pari che sono sotto il %d = \n",a);
    do
    {
        a--;
        if(a%2==0)
        {
            printf("%d \n",a);
        }
    }while(a!=0);

    return 0;
}