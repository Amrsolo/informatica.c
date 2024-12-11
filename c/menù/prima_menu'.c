#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int scelta,somma=0,cont=0,a;
    float media=0;
    
    /*
    printf("scegli 1 per fare la somma di una sequenza di numeri\n");
    printf("scegli 2 per fare la media di una sequenza di numeri\n");
    printf("scegli 3 per fare il divisore di una sequenza di numeri\n");
    printf("scegli 4 per fare la multiplicazione di una sequenza di numeri\n");
    printf("scegli 0 per uscire\n");
    printf("tua scelta e' :\t");
    scanf("%d",&scelta);
    */

    /*
    // Cancella lo schermo
    printf("\033[2J");
    // Modifica il colore del testo (rosso) e lo sfondo (giallo)
    printf("\033[31;43m");
    printf("Testo rosso su sfondo giallo\n");

    // Modifica il colore del testo (bianco) su sfondo blu
    printf("\033[37;44m");
    printf("Testo bianco su sfondo blu\n");

    // Cambia il testo in grassetto
    printf("\033[1m");
    printf("Testo in grassetto\n");

    // Cambia il testo in sottolineato
    printf("\033[4m");
    printf("Testo sottolineato\n");

    // Resetta i colori e formati al predefinito
    printf("\033[0m");

    // Mostra messaggio finale
    printf("Programma terminato.\n");
    */

    do
    {
        
        printf("\nscegli (1) per fare la somma di una sequenza di numeri\n");
        printf("scegli (2) per fare la media di una sequenza di numeri\n");
        printf("scegli (3) per fare il divisore di una sequenza di numeri\n");
        printf("scegli (4) per fare la multiplicazione di una sequenza di numeri\n");
        printf("scegli (0) per uscire\n");
        scanf("%d",&scelta);

            switch (scelta)
            {   
                case 0:
                    printf("Uscita dal programma.\n");
                break;
                case 1:
                    
                        printf("inserisci la sequenza di numeri che si termina con 0\n");

                        while(a!=0)
                        {   
                            scanf("%d",&a);
                            somma+=a;
                        }  
                        printf("la somma = %d\n",somma);
                     
                break;
                
                case 2:
                    
                        printf("inserisci una sequenza di numeri che si termina con 0\n");
                        
                        do
                        {
                            scanf("%d",&a);
                            somma+=a;
                            cont++;
                        }while(a!=0);
                        
                        media=(float)somma/(cont-1);

                        printf("la media = %.2f\n",media);
                    
                        
                break;
                default:
                    printf("\n\terrore (non c'e' una scelta cosi')\n\t");
            }

    }while(scelta|=0);

    printf("\narrivederci\n");



    return 0;
}