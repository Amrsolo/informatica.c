#include<stdio.c>
int main()
{
    int i,a,somma;
    float media;

    printf("inserisci un numero \n");
    scanf("%d",&a);

    for(i=1;i<=a;i++)
    {
        somma+=a;
        
    }
        media=(float)somma/a;
        printf("la somma dei numeri = %d e la ,media = %.2f",somma,media);

        return 0;
}