#include <stdio.h>
/*Calcolo del voto finale con bonus Scrivere un programma che calcoli il voto finale di uno studente in base alla sua media e al numero di crediti ottenuti durante il semestre. Le regole sono le seguenti:
Se la media è maggiore o uguale a 28 e lo studente ha accumulato più di 24 crediti, aggiungere un bonus di 2 punti al voto finale.
Se la media è tra 25 e 27 inclusi, e lo studente ha accumulato tra 18 e 24 crediti, aggiungere un bonus di 1 punto.
Se la media è inferiore a 25 o i crediti sono meno di 18, il voto finale rimane invariato. Il programma deve visualizzare la media iniziale, il numero di crediti e il voto finale (compreso il bonus, se applicabile).
*/
int main()
{   
    // vf = voto finale
    int crediti;
    float media, vf;

    printf("Inserisci la tua media: ");
    scanf("%f", &media);
    printf("Inserisci quanti crediti hai: ");
    scanf("%d", &crediti);

    if(media >= 28 && crediti > 24)
    {
        vf = media + 2;
        printf("Hai ricevuto un bonus di 2 voti, adesso la tua media è: %.2f\n", vf);
    }
    else if(media >= 25 && media <= 27)
    {
        if(crediti <= 24 && crediti >= 18)
        {
            vf = media + 1;
            printf("Hai ricevuto un bonus di 1 voto, adesso la tua media è: %.2f\n", vf);
        }
        else
        {
            printf("Non soddisfi i requisiti per il bonus.\n");
        }
    }
    else if(media < 25 && crediti < 18)
    {   
        printf("Il voto finale rimane invariato.\n");
    }
    else
    {
        printf("O la tua media o i tuoi crediti non soddisfano i requisiti.\n");
    }
    
    return 0;
}