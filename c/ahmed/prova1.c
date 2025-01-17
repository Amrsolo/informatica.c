#include<stdio.h>

float media(int a,int b);
int main()
{
    int x,y;
    float r;

    printf("dammi2num\n");
    scanf("%d%d",&x,&y);

    r=media(x,y);

    printf("%.2f\n",r); 
    return 0;
}

float media(int a,int b)
{   
    float media;
    media=(a+b)/2.0;

    return media;
}

