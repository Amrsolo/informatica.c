#include <stdio.h>

int main()

{
    int a,b;
    
    printf("Inserisci il primo numero  \n");
    scanf("%d", &a);
    printf("Inserisci il secondo numero  \n");
    scanf("%d", &b);
    
    if (a > b)
    {
        printf("Il numero piu' grande e' %d \n", a);
    }
    else if (b > a)
    {
        printf("Il numero piu' grande e' %d \n", b);
        
    }
    else 
    {
        printf("I due numeri sono uguali e sono %d e %d \n", a, b);
    }
    
    return 0;
}

