#include <stdio.h>

int main()
{
    int a;
    float div;

    printf("inserisci un numero intero \n");
    scanf("%d", &a);

    do
    {
        div = (float)a / 2;
        printf("a=%.2f \n", div);
        a = (int)div; 
    } while (a > 1);

    return 0;
}
