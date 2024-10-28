#include <stdio.h>
int main()
{   
    //vf=voto finale
    int crediti;
    float media,vf;

    printf("inserisci la tua media \n");
    scanf("%f",&media);
    printf("insersici quanti credeti hai \n");
    scanf("%d",&crediti);

    if(media>=28&&crediti>24)
    {
        
            vf=media+2;
            printf("hai recevuto un bonus di 2 voti ,adesso tua media= %.2f",vf);

    }
    else if(media>=25 && media<=27)
    {
        if(crediti<=24&&crediti>=18)
        {
            vf=media+1;
            printf("hai recevuto un bonus di 1 voti ,adesso tua media= %.2f \n",vf);
               
        }
        else
        {
            printf("non pasta la tua media\n");
        }
    }
    if(media<=25 && crediti<18)
    {   
            printf("il voto finale rimane invariato\n");
    }
    else
    {
        printf("o che non pasta la tua media o non pastano i tuoi credeti \n");
    }
    
    return 0;
}