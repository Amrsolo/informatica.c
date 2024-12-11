#include <stdio.h>
#include <stdlib.h>

int main()
{
    int scelta, somma = 0, cont = 0, a;
    float media = 0;

    do {
        // Mostra il menu
        printf("\nscegli 1 per fare la somma di una sequenza di numeri\n");
        printf("scegli 2 per fare la media di una sequenza di numeri\n");
        printf("scegli 0 per uscire\n");
        printf("tua scelta e' : ");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                somma = 0; // Resetta la somma
                printf("Inserisci la sequenza di numeri (termina con 0):\n");
                
                do {
                    scanf("%d", &a);
                    somma += a;
                } while (a != 0);

                printf("La somma = %d\n", somma);
                break;

            case 2:
                somma = 0; // Resetta la somma
                cont = 0;  // Resetta il contatore
                printf("Inserisci la sequenza di numeri (termina con 0):\n");
                
                do {
                    scanf("%d", &a);
                    if (a != 0) {
                        somma += a;
                        cont++;
                    }
                } while (a != 0);

                if (cont > 0) {
                    media = (float)somma / cont;
                    printf("La media = %.2f\n", media);
                } else {
                    printf("Nessun numero valido inserito.\n");
                }
                break;

            case 0:
                printf("Uscita dal programma.\n");
                break;

            default:
                printf("\nErrore: scelta non valida. Riprova.\n");
        }

    } while (scelta != 0);

    return 0;
}
