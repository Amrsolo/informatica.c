#include<stdio.h>
int main()
{
    int i,j,a,a1,b ;
    printf("inserisci il primo numero\n");
    scanf("%d",&a);
    printf("inserisci il SECONDO numero\n");
    scanf("%d",&b);
    a1=a;
    for(i=0;i<=b;i++)
    {
        a+=b;
        printf("%d+",a1);
    }

    printf("=%d\n",a);
    

    return 0;
}