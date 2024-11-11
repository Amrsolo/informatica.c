#include <stdio.h>

int main ()

{
    int l1,l2,l3;

    printf("inserisci il primo lato \n");
    scanf("%d",&l1);
    printf("inserisci il secondo lato \n");
    scanf("%d",&l2);
    printf("inserisci il terzo lato \n");
    scanf("%d",&l3);

    if(l1==l2)
    {
        if(l1==l3)
        {
            printf("il tiriango e' equilatero \n");
        }
    }
    else if(l1!=l2)
    {
        if(l1==l3)
        {
            printf("il tiriango e' isoscele  \n");
        }
    }
    else if(l1!=l3)
    {
        if(l1==l2)
        {
            printf("il tiriango e' isoscele  \n");
        }
    }
    else if(l2!=l3)
    {
        if(l2==l1)
        {
            printf("il tiriango e' isoscele  \n");
        }
    }
    else if(l1!=l2) 
    {
        if(l2!=l3)
        {
            printf("il tiriango e' scaleno \n");
        }
    }

    return 0;
}