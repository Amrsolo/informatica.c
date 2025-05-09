#include <stdio.h>

#define N 100

char legge_string(char v[],char fine);
int main()
{
    int b;

    char a[N],c='*',l;

    printf("inserisci una parola\n");
    scanf("%s",a);
    printf("hai inserito %s\n",a);

    l=legge_string(a,c);

    return 0;
}
char legge_string(char v[],char fine)
{
    char a=0;

    while(v[a]!='*')
    {   
        scanf("%s",&v[a]);
        a++;
    }

    return 1;
}