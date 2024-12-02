#include <stdio.h>

int main() {
    int numin, somma = 0, dispari = 1;

    printf("Inserisci un numero intero: ");
    scanf("%d", &numin);

    for (int i = 0; i < numin; i++) {
        somma += dispari;  // Somma il numero dispari corrente
        dispari += 2;     // Passa al successivo numero dispari
    }

    printf("Somma dei primi %d numeri dispari  = %d\n", numin, numin, somma);

    return 0;
}
