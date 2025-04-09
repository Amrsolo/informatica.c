/*
#include <stdio.h>

#define R 4
#define C 4

void carica(int v1[R][C]);
void stampa(int v1[R][C]);

int main()
{
    int matrice[R][C];

    carica(matrice);
    stampa(matrice);
    return 0;
}

void carica(int v1[R][C])
{
    int i, j;
    printf("Carica i valori nella matrice %dx%d:\n", R, C);
    
    for (i = 0; i < R; i++) 
    {
        for (j = 0; j < C; j++)  
        {
            printf("Inserisci elemento per posizione (%d, %d): ", i, j);
            scanf("%d", &v1[i][j]);
        }
    }
}

void stampa(int v1[R][C])
{
    int i, j;
    printf("Matrice inserita:\n");

    for (i = 0; i < R; i++) 
    {   
        printf("|");
        for (j = 0; j < C; j++) 
        {   
            printf("%d |", v1[i][j]);
        }
        
        printf("\n"); 
    }
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIMENSIONE 5
#define LUNGHEZZA_NAVE 3

void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]);
void posizionaNave(char campo[DIMENSIONE][DIMENSIONE]);
void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE], int mostraNave);

int main() {
    char campo[DIMENSIONE][DIMENSIONE];

    inizializzaCampo(campo);
    posizionaNave(campo);
    visualizzaCampo(campo, 1);

    return 0;
}

void inizializzaCampo(char campo[DIMENSIONE][DIMENSIONE]) {
    int i, j;
    for (i = 0; i < DIMENSIONE; i++) {
        for (j = 0; j < DIMENSIONE; j++) {
            campo[i][j] = '~';  // Imposta acqua
        }
    }
}

void posizionaNave(char campo[DIMENSIONE][DIMENSIONE]) {
    int riga, colonna, orientamento, i;
    srand(time(NULL));  // Inizializza il generatore di numeri casuali

    orientamento = rand() % 2 + 1;  // 1 o 2

    if (orientamento == 1) {  // Orizzontale
        riga = rand() % DIMENSIONE;
        colonna = rand() % (DIMENSIONE - LUNGHEZZA_NAVE + 1);

        for (i = 0; i < LUNGHEZZA_NAVE; i++) {
            campo[riga][colonna + i] = '#';
        }

    } else if (orientamento == 2) {  // Verticale
        riga = rand() % (DIMENSIONE - LUNGHEZZA_NAVE + 1);
        colonna = rand() % DIMENSIONE;

        for (i = 0; i < LUNGHEZZA_NAVE; i++) {
            campo[riga + i][colonna] = '#';
        }
    }
}

void visualizzaCampo(char campo[DIMENSIONE][DIMENSIONE], int mostraNave) {
    int i, j;

    printf("    ");
    for (j = 0; j < DIMENSIONE; j++) {
        printf("  %d ", j);
    }
    printf("\n");

    for (i = 0; i < DIMENSIONE; i++) {
        printf(" %d  ", i);
        for (j = 0; j < DIMENSIONE; j++) {
            if (mostraNave) {
                printf("| %c ", campo[i][j]);
            } else {
                if (campo[i][j] == '#') {
                    printf("| ~ ");
                } else {
                    printf("| %c ", campo[i][j]);
                }
            }
        }
        printf("|\n");
    }
}
