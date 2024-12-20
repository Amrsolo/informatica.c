#include <stdio.h>

void  prova(int x, int y)
{
    int a = 0;
    a = x + y;
    printf("La somma è: %d\n", a);
}
void  multi(int x,int y)
{
    int multi=1;
    multi = x * y;
    printf("il multiplicazione è: %d\n",multi);
}
void diviso(int x,int y)
{
    float diviso;
    diviso=(float)x/y;
    printf("il diviso è: %.2f\n", diviso);
}
void numeri_pari(int x)
{   
    printf("i numeri pari che ci sono dal 1 al %d sono\n",x);
    for(int i=1;i<=x;i++)
    if(i%2==0)
    {
        printf("%d\n",i);
    }
   
}


int main()
{
    int x1, y1, a1;
    float a2;

    printf("Inserisci due numeri:\n");
    scanf("%d %d", &x1, &y1);

    prova(x1, y1);
    prova(x1+25, y1+58);
    multi(x1, y1);
    diviso(x1, y1);
    numeri_pari(x1);
    return 0;
}
