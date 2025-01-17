#include <stdio.h>

int mcd(int x,int y);
void sempelifica(int x,int y,int z)

int main()
{
    int a,b,r;

    printf("inserisci un numero intero denematore\n");
    scanf("%d",%a);
    printf("inserisci un numero intero nomenatore\n");
    scanf("%d",%b);

    r=mcd(a,b);
    printf("il mcd tra %d e %d = %d",a,b,r);
    sempelifica(a,b,r);

    return 0;
}

int mcd(int x,int y)
{
    while(x!=y)
    {
        if(x>y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
    }

    return x;
}

void sempelifica(int x,int y,int z)
{
    x=x/z;
    y=y/z;

    printf("la sempelifica = %d/%d",x,y);
}