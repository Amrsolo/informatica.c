#include<stdio.h>
#define C 5
#define R 5
void carica(int m[][C],int x);
void stampa(int m[][C]);
void sostetuire(int m[][C],int x,int y);

int main()
{
    int m1[R][C],a,b;

    printf("\n");
    scanf("%d%d",&a,&b);

    carica(m1,a);
    stampa(m1);

    return 0;
}

void carica(int m[][C],int x)
{
    int i,j;

    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            m[i][j]=x;
            x++;
        }
    }
}

void stampa(int m[][C])
{
    int i,j;
    for(i=0;i<R;i++)
    {
        printf("\n\n");
        for(j=0;j<R;j++)
        {
            printf("%d\t",m[i][j]);
        }
    }
}