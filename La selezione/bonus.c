#include <stdio.h>
int main()
{   
    //vf=voto finale
    int vf,crediti;
    float media;

    printf("inserisci la tua media \n");
    scanf("%f",&media);
    printf("insersici quanti credeti hai \n");
    scanf("%d",&crediti);

    if(media>=28)
    {
        if(crediti>24)
        {
            vf=media+2;
            printf("hai recevuto un bonus di 2 voti ,adesso tua media= %.2f",media);
        }
        else
        {
            printf("non pastano i tuoi crediti\n");
        }
        
    }
    if(media>=25)
    {
        if(media<=27)
        {
            if(crediti<=24)
            {
                if(crediti>=18)
                {
                    vf=media+1;
                    printf("hai recevuto un bonus di 1 voti ,adesso tua media= %.2f \n",media);
                }
                else
                {
                     printf("non pastano i tuoi crediti\n");
                }
            }
            else
            {
            printf("non pastano i tuoi crediti\n");
            }
        }
        else
        {
            printf("non pasta la tua media\n");
        }
        
    }
    if(media<=25)
    {
        if(crediti<18)
        {
           
            printf("il voto finale rimane invariato\n");
        }
        else
        {
            printf("non pasta la tua media\n");
        }
    }
    return 0;
}