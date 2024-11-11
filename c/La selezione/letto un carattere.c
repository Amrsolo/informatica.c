#include <stdio.h>
int main()


{
    char a;


    printf("inserisci una lettera \n");
    scanf("%c",&a);


    a=("%d",a);
   
    if(a<=90&&a>=65)
    {  
        a=a+32;
        printf("la lettera era in maioscola e adesso sara' cosi' %c \n",a);
    }
    else if(a>=97&&a<=122)
    {
        a=a-32;
        printf("la lettera era in maioscolo e adesso sara' cosi' %c \n",a);
    }
    else
    {
        printf("non è una lettera \n");
    }
    return 0;
}

