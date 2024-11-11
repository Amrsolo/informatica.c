#include <stdio.h>

int main()
{
    int a,div=0;
    

    printf("inserisci un numero intero \n");
    scanf("%d", &a);

    do
    {
        div = a / 2;
        printf("a=%d \n", div);
        a = (int)div; 
    } while (a > 1);

    return 0;
}
