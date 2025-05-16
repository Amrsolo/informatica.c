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
int main()
{
    int m1[R][C];

    carica_random(m1);
    stampa_mat(m1);
    ordina_mat(m1);
    stampa_mat1(m1);
    return 0;
}

void carica_random(int m[][C])
{
    int i,j;
    for(i=0;i<R;i++)
    {

        for(j=0;j<C;j++)
        {
            m[i][j]=rand() % 40-2; 
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
    int a,i,j;

    for(i=0;i<R;i++)
    {

        for(j=0;j<C;j++)
        {
            if(m[i][j]>m[i][j+1])
            {
                a=m[i][j];
                m[i][j]=m[i][j+1];
                m[i][j+1]=a;
            }
           }
    }
}

void stampa_mat1(int m[][C])
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