#include <stdio.h>
#define N 1000 

int main() {
    int a, min, max;

    printf("Inserisci un numero: ");
    scanf("%d", &a);

    min = max = a;

    for (int i = 1; i < N; i++) {
        printf("Inserisci un numero: ");
        scanf("%d", &a);

        if (a > max) {
            max = a;
        }
        if (a < min) {
            min = a;
        }
    }

  
    printf("Il numero piu' grande = %d\n", max);
    printf("Il numero piu' piccolo = %d\n", min);

    return 0;
}
