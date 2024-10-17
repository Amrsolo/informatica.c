#include <stdio.h>
int main()

{
    char a;

    printf("inserisci una lettera \n");
    scanf("%c",&a);

    a=("%d",a);
    
    if(a<=90)
    {   
        a=("%d",a)+32;
        printf("la lettera era in maioscola e adesso sara' cosi' %c \n",a);
    }
    else if(a>=97)
    {
        a=("%d",a)-32;
        printf("la lettera era in minoscolo e adesso sara' cosi' %c \n",a);
    }
    else
    {
        printf("non è una lettera");
    }
    return 0;
}