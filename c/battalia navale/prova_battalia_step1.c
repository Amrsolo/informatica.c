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
