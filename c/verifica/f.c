#include <stdio.h>
#define N 5  // Costante per il numero di potenze da calcolare

int main() {
    int num, potenza = 1;  // `potenza` inizializzato a 1 perché qualsiasi numero elevato a 0 è 1

    printf("Inserisci un numero intero: ");
    scanf("%d", &num);

    printf("Le prime %d potenze di %d sono:\n", N, num);

    for (int i = 0; i < N; i++) {
        potenza *= num;  
        printf("%d\n", potenza);  
    }

    return 0;
}
