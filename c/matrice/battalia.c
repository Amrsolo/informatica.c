#include <stdio.h>

# define R 4
# define C 4

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
    int i, j,h;
    printf("Carica i matrici:\n");
    printf("Inserisci elemento per posizione (%d, %d): ", i, j);
    for (i = 0; i < R; i++) 
    {
        for (j = 0; j < C; j++)  
        {
            printf("\n");
            scanf("%d", &v1[i][j]);
            for(h=0;h<1;h++)
            
        }
    }
}

void stampa(int v1[R][C])
{
    int i, j;
    printf("Stampa i matrici\n");
    for (i = 0; i < R; i++) 
    {
        for (j = 0; j < C; j++) 
        {
            printf("%d ", v1[i][j]);
        }
        printf("\n");
    }
}
