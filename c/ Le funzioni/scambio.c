#include <stdio.h>

void scambio(int *x, int *y);

int main()
{
    int a,b,r;

    printf("inserisci due numeri interi che lo faccio lo scambio nper loro\n");
    scanf("%d%d",&a,&b);

    scambio(&a,&b);
    printf("il primo num sarà %d e il secondo %d\n",a,b);
    return 0;
}

void scambio(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;

}