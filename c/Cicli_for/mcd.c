#include <stdio.h>

int main() {
    int a, b, c, i, mcd;

    // Input dei tre numeri
    printf("Inserisci il primo numero intero: \n");
    scanf("%d", &a);
    printf("Inserisci il secondo numero intero: \n");
    scanf("%d", &b);
    printf("Inserisci il terzo numero intero: \n");
    scanf("%d", &c);

    // Troviamo il minimo tra i tre numeri (limitare la ricerca fino a min(a, b, c))
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    // Ciclo per trovare il MCD
    for (i = min; i > 0; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            mcd = i;
            break;  // Uscire dal ciclo quando troviamo il massimo divisore comune
        }
    }

    // Stampa il risultato
    printf("Il MCD dei tre numeri è: %d\n", mcd);

    return 0;
}
