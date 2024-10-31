#include<stdio.h>
int main()
{
    int a,b;
    printf("inserisci il primo numero (deve essere maggiore di 10) \n ");
    scanf("%d",&a);
    printf("inserisci il secondo numero (deve essere ugale a 1 :) non so perche' ti ho questo a inserilo ne anche' ) \n ");
    scanf("%d",&b);

    do
    {   printf("i numeri saranno %d %d \n",a,b);
        a--;
        b++;
        
    } while (a!=0);
    
    return 0;
}