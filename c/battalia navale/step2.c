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
            campo[i][j] = '~'; 
        }
    }
}

void posizionaNave(char campo[DIMENSIONE][DIMENSIONE]) {
    int i, j, riga, colonna, orientamento;

    printf("Inserisci la posizione della nave (lunghezza %d)\n", LUNGHEZZA_NAVE);

    printf("Scegli se la nave sarà orizzontale (1) o verticale (2): ");
    scanf("%d", &orientamento);

    if (orientamento == 1) {
        printf("Inserisci la riga (0-4) dove posizionare la nave: ");
        scanf("%d", &riga);
        printf("Inserisci la colonna iniziale (0-4) per la nave: ");
        scanf("%d", &colonna);

        if (colonna + LUNGHEZZA_NAVE > DIMENSIONE) {
            printf("Posizione non valida! La nave non entra nella riga.\n");
        } else {
            for (i = 0; i < LUNGHEZZA_NAVE; i++) {
                campo[riga][colonna + i] = '#';  
            }
        }

    } else if (orientamento == 2) {
        printf("Inserisci la colonna (0-4) dove posizionare la nave: ");
        scanf("%d", &colonna);
        printf("Inserisci la riga iniziale (0-4) per la nave: ");
        scanf("%d", &riga);


        if (riga + LUNGHEZZA_NAVE > DIMENSIONE) {
            printf("Posizione non valida! La nave non entra nella colonna.\n");
        } else {
            for (i = 0; i < LUNGHEZZA_NAVE; i++) {
                campo[riga + i][colonna] = '#'; 
            }
        }
    } else {
        printf("Opzione non valida.\n");
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
