#include<stdio.h>

int main()
{
    int a,b;
    printf("inseri due numeri interi\n");
    scanf("%d%d",&a,&b);

    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    printf("il mcd = %d\n",a);
    return 0;
}