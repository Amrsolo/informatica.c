#include <stdio.h>

int main()

{
    int a, b, c;
    
    printf("Inserisci il primo numero \n");
    scanf("%d", &a);
    printf("Inserisci il secondo numero \n");
    scanf("%d", &b);
    printf("Inserisci il terzo numero \n");
    scanf("%d", &c);
    
    if(a > b && a > c)
    {
        if(b == c)
        {
            printf("Il numero %d e il piu' grande, e i numeri %d e %d sono uguali.\n", a, b, c);
        }
        else
        {
            printf("Il numero piu' grande e' %d \n", a);
        }
    }
    else if(b > a && b > c)
    {
        if(a == c)
        {
            printf("Il numero %d e il piu' grande, e i numeri %d e %d sono uguali.\n", b, a, c);
        }
        else
        {
            printf("Il numero piu' grande e' %d \n", b);
        }
    }
    else if(c > a && c > b)
    {
        if(a == b)
        {
            printf("Il numero %d e' il pi grande' e i numeri %d e %d sono uguali.\n", c, a, b);
        }
        else
        {
            printf("Il numero piu' grande e' %d \n", c);
        }
    }
    else if(a == b && a == c) 
    {
        printf("Tutti i numeri sono uguali.\n");
    }
    else if(a == b && a > c) 
    {
        printf("I numeri %d e %d sono uguali e sono piu' grandi di %d\n", a, b, c);
    }
    else if(a == b && a < c) 
    {
        printf("I numeri %d e %d sono uguali e sono piu' piccoli di %d\n", a, b, c);
    }
    else if(a > b && b == c) 
    {
        printf("I numeri %d e %d sono uguali e sono piu' piccoli di %d\n", b, c, a);
    }
    else if(a < b && b == c) 
    {
        printf("I numeri %d e %d sono uguali e sono piu' grandi di %d\n", b, c, a);
    }
    else if(b > a && a == c) 
    {
        printf("I numeri %d e %d sono uguali e sono piu' piccoli di %d\n", a, c, b);
    }
    else if(b < a && a == c) 
    {
        printf("I numeri %d e %d sono uguali e sono piu' grandi di %d\n", a, c, b);
    }
    
    return 0;    
}

