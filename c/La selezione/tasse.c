#include <stdio.h>
int main()

{   // RL = reddito lordo
    //RN = reddito netto
    float  RL,RN,tasse;

    printf("inserisci il tuo reddito lordo \n");
    scanf("%f",&RL);

    if(RL<=10000)
    {
        printf("il reddito netto \n= %f",RL);
    }
    else if(RL>10000)
    {
        tasse=RL*0.10;
        RN=RL-tasse;
        printf("le tasse che lo pagi  =%.2f \n il reddito netto = %.2f \n",tasse,RN);
    }
    else if(RL>30000)
    {
        tasse=RL*0.20;
        RN=RL-tasse;
        printf("le tasse che lo pagi  =%.2f \n il reddito netto = %.2f \n",tasse,RN);
    }
    else if(RL>60000)
    {
        tasse=RL*0.30;
        RN=RL-tasse;
        printf("le tasse che lo pagi  =%.2f \n il reddito netto = %.2f \n",tasse,RN);
    }

    return 0;
}