#include <stdio.h>
int main()
{
    int a,b;
    printf(".1\n");
    scanf("%d",&a);
    printf(".2\n");
    scanf("%d",&b);

    if(a!=b)
    {
        printf("non sono uguaole %d %d",a,b);

    }
    else if(a==b)
    {
        printf("sono uguale %d %d",a,b);
    }

    return 0;
}