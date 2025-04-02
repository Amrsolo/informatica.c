#include <stdio.h>
#define RIGHE 3
#define COLONNE 3

// Metodo 1: Dimensioni fisse
void stampaMatrice1(int m[RIGHE][COLONNE]) {
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

// Metodo 2: Prima dimensione variabile
void stampaMatrice2(int m[][COLONNE], int righe) {
    for (int i = 0; i < righe; i++) {
        for (int j = 0; j < COLONNE; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrice[RIGHE][COLONNE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("Usando il metodo 1:\n");
    stampaMatrice1(matrice);
    
    printf("\nUsando il metodo 2:\n");
    stampaMatrice2(matrice, RIGHE);
    
    return 0;
}