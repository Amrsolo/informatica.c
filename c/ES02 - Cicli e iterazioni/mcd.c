#include <stdio.h>
//scrivere un programma C che calcoli l’MCD di tre numeri
int main()
{
    int a,b,c,mcd;

    printf("inserisci il primo numero intero \n");
    scanf("%d",&a);
    printf("inserisci il second numero intero \n");
    scanf("%d",&b);
    printf("inserisci il terzo numero intero \n");
    scanf("%d",&c);

    while(a!=b&&b!=c)
    {
        if(a>b&&a>c)
        {
            if(c<b)
            {
                a=a-c;
                b=b-c;
            }
            else if(c>b)
            {
                a=a-b;
                c=c-b;
            }
            else
            {
                a=a-b;
            }
        }
        else if(a>b&&a<c)
        {
            c=c-b;
            a=a-b;
        }
        else if(a<b&&b<c)
        {
            c=c-a;
            b=b-a;
        }
        else if(a<b&&a>c)
        {
            b=b-c;
            a=a-c;
        }

    }

    printf("il MCD di tre numeri sarà  %d \n",a);
    return 0;
}