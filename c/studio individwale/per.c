#include <stdio.h>

int main()
{
    int a,per,b;
    

    printf("inserisci un primo numero intero \n");
    scanf("%d", &a);
    printf("inserisci un altro numero intero \n");
    scanf("%d", &b);

    per=a*b;

    printf("%d * %d = %d \n",a,b,per);
    return 0;
}