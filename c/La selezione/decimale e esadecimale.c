#include <stdio.h>
int main()
{
    char c;

    printf("inserisci una lettera \n");
    scanf("%c",&c); 

    printf("il numero decimale del %c sara' %d \n",c,c);
    printf("il numero esadecimale del %c sara' %x \n",c,c);

    return 0;
}