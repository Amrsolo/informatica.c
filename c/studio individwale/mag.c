#include<stdio.h>
int main()
{
    int a,b; 

    printf("dammi due numeri\n");
    scanf("%d %d",&a,&b);

    if (a>b) 
    {
        printf("il numero più grande e' %d\n",a);
    }
    else if(a<b)
    {
        printf("il numero più grande e' %d\n",b);
    }
    else
    {
        printf("i numeri sono  %d %d che sono uguali\n",a,b);
    }

}