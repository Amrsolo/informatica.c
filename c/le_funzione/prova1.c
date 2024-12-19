#include <stdio.h>

int prova(int x, int y)
{
    int a = 0;
    a = x + y;

    return a;
}
int multi(int x,int y)
{
    int multi=1;
    multi = x * y;

    return multi;
}
int diviso(int x,int y)
{
    float diviso;
    diviso=(float)x/y;

    return diviso;
}

int main()
{
    int x1, y1, a1;
    float a2;

    printf("Inserisci due numeri:\n");
    scanf("%d %d", &x1, &y1);

    a1 = prova(x1, y1);
    printf("La somma è: %d\n", a1);
    a1 = prova(x1+25, y1+58);
    printf("La somma è: %d\n", a1);
    a1 = multi(x1, y1);
    printf("il multiplicazione è: %d\n", a1);
    a2 = diviso(x1, y1);
    printf("il diviso è: %.2f\n", a2);
    return 0;
}
