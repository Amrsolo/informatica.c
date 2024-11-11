#include <stdio.h>

int main() {
    int a, b, c;
    int min, max;

   printf("inserisci tre numeri diversi \n");
    printf("Inserisci il primo numero \n");
    scanf("%d", &a);
    printf("Inserisci il secondo numero \n");
    scanf("%d", &b);
    printf("Inserisci il terzo numero \n");
    scanf("%d", &c);
   
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

  
    printf("Il minimo è: %d\n", min);
    printf("Il massimo è: %d\n", max);

    return 0;
}
