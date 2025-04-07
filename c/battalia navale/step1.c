#include <stdio.h>

#define R 5  // Numero di righe
#define C 5  // Numero di colonne

void carica(char v1[R][C]);
void stampa(char v1[R][C]);

int main()
{
    char matrice[R][C];

    carica(matrice);
    stampa(matrice);
    return 0;
}

void carica(char v1[R][C])
{
    int i, j;

    printf("Carica i valori nella matrice %d x %d (inserisci un carattere per ogni posizione):\n", R, C);
    
    for (i = 0; i < R; i++) 
    {
        for (j = 0; j < C; j++)  
        {
            printf("Inserisci elemento per posizione (%d, %d): ", i, j);
            scanf(" %c", &v1[i][j]); 
        }
    }
}

void stampa(char v1[R][C])
{
    int i, j;

    printf("    ");
    for (j = 0; j < C; j++) 
    {
        printf("  %d ", j); 
    }
    printf("\n");

    for (i = 0; i < R; i++) 
    {   
        printf(" %d  ", i);  
        for (j = 0; j < C; j++) 
        {   
            printf("| %c ", v1[i][j]);  
        }
        printf("|\n");
    }
}
