#include<stdio.h>
int main()
{
    int a,b; 
    float media=0;
    printf("dammi due numeri\n");
    scanf("%d %d",&a,&b);

    media=(a+b)/2.0;

    printf("la media tra %d e %d = %.1f\n",a,b,media);

    return 0; 
}