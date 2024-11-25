#include<stdio.h>

int main()
{
    int a, i, dc = 0;  
    //dc = divisorCount

    printf("Scrivi un numero intero 'positivo' per trovare i suoi divisori: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("Ma non capisci?!! \nDeve essere un numero positivo.\n");
        return 1;
    }

    
    printf("I divisori di %d sono:\n", a);
    for(i = 1; i <= a; i++) {
        if (a % i == 0) {
            printf("%d\n", i); 
            dc++;    
        }
    }

    
    if (dc == 2) {
        printf("Il numero %d è primo.\n", a);
    } else {
        printf("Il numero %d non è primo.\n", a);
    }

    return 0;
}
