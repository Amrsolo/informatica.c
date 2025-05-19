#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define R 5
#define C 5
#define N 50

void carica_random(int m[][C]);
void stampa_mat(int m[][C]);
void ordina_mat(int m[][C]);
void stampa_mat1(int m[][C]);
void cambia_righe(int m[][C]);
void diagonale(int m[][C]);
int main()
{
    int m1[R][C];

    carica_random(m1);
    stampa_mat(m1);
    ordina_mat(m1);
    stampa_mat1(m1);
    cambia_righe(m1);
    diagonale(m1);
    return 0;
}

void carica_random(int m[][C])
{
    int i,j;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            m[i][j]=rand() % 20+10;  // Genera numeri tra -2 e 37
        }
    }
}

void stampa_mat(int m[][C])
{
    int i,j;
    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d",m[i][j]);
            printf("\t");
        }
        printf("\n\n");
    }
}

void ordina_mat(int m[][C])
{
    int i, j,k, l;
    for(i = 0; i < R; i++)
    {
        // Bubble Sort per ordinare ogni riga
        for(j = 0; j < C - 1; j++)  // -1 per evitare l'out of bounds
        {
            for( k = 0; k < C - j - 1; k++)  // Confronta e scambia gli elementi
            {
                if(m[i][k] > m[i][k + 1])  // Confronta coppie adiacenti
                {
                    // Scambio degli elementi
                    l = m[i][k];
                    m[i][k] = m[i][k + 1];
                    m[i][k + 1] = l;
                }
            }
        }
    }
}

void stampa_mat1(int m[][C])
{
    int i,j;

    printf("\n\n");
    printf("\n\n");
    for(i=0;i<R;i++)
    {

        for(j=0;j<C;j++)
        {
            printf("%d",m[i][j]);
            printf("\t");
        }
        printf("\n\n");
    }
}

void cambia_righe(int m[][C])
{
    int a,i=0,j;

    for(j=0;j<C;j++)
    {
        a=m[i][j];
        m[i][j]=m[i+1][j];
        m[i+1][j]=a;
    }
}

void diagonale(int m[][C])
{
    int i,j;
    for(i=0,j=C-1;i<R;i++,j--)
    {   
        m[i][i]=0;
        m[i][C - 1 - i] = 1; 
    }
    printf("\n\n");
    printf("\n\n");
    for(i=0;i<R;i++)
    {

        for(j=0;j<C;j++)
        {
            printf("%d",m[i][j]);
            printf("\t");
        }
        printf("\n\n");
    }
}

