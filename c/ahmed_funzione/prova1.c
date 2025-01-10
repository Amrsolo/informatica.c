#include<stdio.h>
float media(int,int);
int mcd(int,int);

int main()
{
    int a,b,c;
    float r;

    printf("inserisci due numeri \n");
    scanf("%d%d",&a,&b);
    r= media(a,b);
    c=mcd(a,b);
    printf("la media = %.2f\nil mcd = %d\n",r,c);

    return 0;
}


float media(int x,int y)
{
    float m;
    m=(x+y)/2.0;
    return m;
}

int mcd(int x,int y)
{
    int min = x,i,mcd;
    if (y < min) min = y;

    // Ciclo per trovare il MCD
    for (i = min; i > 0; i--) {
        if (x % i == 0 && y % i == 0) {
            mcd = i;
            break;  // Uscire dal ciclo quando troviamo il massimo divisore comune
        }
    }
}