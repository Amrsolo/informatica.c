#include <stdio.h>

/*Scrivere un programma in C che chiesti 2 numeri interi all’utente, 
stampi sul monitor tutti i numeri compresi fra i 2 interi. 
Es. se i numeri inseriti sono 4 e 12 stampare 4,5,6,7,8,9,10,11,12
*/
int main()
{
    int a,b,num;

    printf("inserisci il primo numero intero \n");
    scanf("%d",&a);
    printf("inserisci il secondo numero intero \n");
    scanf("%d",&b);

    while(num>a&&num<b)
    {
        num++;
        printf("i numeri saranno %d",num);
    }


    return 0;


}