#include<stdio.h>
int main()
{
    int a,b,c;

    printf("dammi tre numeri\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b&&a>c)
    {   
        if(b>c)
        {
            printf("il numero piu' piccolo e' %d\n",c);
        }
        else 
        {
            printf("il numero piu' piccolo e' %d\n",b);
        }
        printf("il numero piu' grande e' %d\n",a);
    }
    else if(a>b&&a<c)
    {
        printf("il numero piu' grande e' %d \n il numero piu' piccolo e' %d\n ",c,b);
    }
    else if(a<b&&a>c)
    {
        printf("il numero piu' grande e' %d \n il numero piu' piccolo e' %d\n",b,c);
    }
    else


    return 0;
    
}