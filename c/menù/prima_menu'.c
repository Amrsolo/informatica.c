#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define RED         "\033[31m"
#define RESET       "\033[0m"
#define BLUE        "\033[34m"
#define BOLD        "\033[1m"
#define MAGENTA     "\033[35m"


int main()
{
    int scelta,somma=0,cont=0,mult=1,a,b,i,b1,a1;
    float media=0,div=1;
    
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
        
        printf("\nscegli ("BLUE"1"RESET") per fare la somma di una sequenza di numeri\n");
        printf("scegli ("BLUE"2"RESET") per fare la media di una sequenza di numeri\n");
        printf("scegli ("BLUE"3"RESET") per fare il divisore di una sequenza di numeri\t" RED "(scusate il case 3 non funziona per adesso)\n" RESET );
        printf("scegli ("BLUE"4"RESET")per fare la multiplicazione di una sequenza di numeri\n");
        printf("scegli ("BLUE"5"RESET")per trovare i numeri compresi tra due numeri\n");
        printf("scegli ("BLUE"6"RESET")per stampare titti i numeri pari sotto a quello che lo inserisci \n");
        printf("scegli ("BLUE"7"RESET")per stampare titti i numeri dispari sotto a quello che lo inserisci \n");
        printf("scegli ("BLUE"8"RESET")per stampare titti i numeri pari sopra a quello che lo inserisci "BLUE"(ma devi inserire un limite massimo)"RESET" \n");
        printf("scegli ("BLUE"9"RESET")per stampare titti i numeri dispari sopra a quello che lo inserisci "BLUE"(ma devi inserire un limite massimo)"RESET" \n");
        printf("scegli ("BLUE"0"RESET") per uscire\n");
        printf(BOLD"tua scelta e' :\t"BLUE);
        scanf("%d",&scelta);
        printf("\n"RESET);

            switch (scelta)
            {   
                case 0:
                    printf("Uscita dal programma.\n");
                break;
                case 1:
                        somma=0;
                        printf(MAGENTA"inserisci la sequenza di numeri che si termina con ("BLUE"0"RESET")\n"RESET);

                        do
                        {   
                            scanf("%d",&a);
                            somma+=a;
                        }while(a!=0);  
                        printf("la somma = " BLUE "%d\n"RESET,somma);
                     
                break;
                
                case 2:

                        somma=0,media=0,cont=0;
                        printf(MAGENTA"inserisci una sequenza di numeri che si termina con ("BLUE"0"RESET")\n"RESET);
                        
                        do
                        {
                            scanf("%d",&a);
                            somma+=a;
                            cont++;
                        }while(a!=0);
                        
                        media=(float)somma/(cont-1);

                        printf("la media = " BLUE "%.2f\n"RESET,media);
                    
                        
                break;
                case 3:

                        printf("" RED "scusa il case 3 non funziona per adesso scegli un'altra opzione\n" RESET );
                        /*
                        div=0;
                        printf(MAGENTA"inserisci una sequenza di numeri che si termina con ("BLUE"0"RESET") \n"RESET);

                        do
                        {
                            scanf("%d",&a);
                            div/=a;
                        }while(a|=0);

                        printf("il divesore =" BLUE "%.3f\n"RESET,div);
                        */
                break;    
                case 4:

                        
                        mult=1;
                        printf(MAGENTA"inserisci una sequenza di numeri che si termina con ("BLUE"1"RESET MAGENTA")\n"RESET);
                        printf(MAGENTA"cmq l'uno non si serve perche' qualsiasi numero per il ("BLUE"1"RESET MAGENTA") = allo stesso numero ma il ("BLUE"0"RESET MAGENTA") no\n"RESET);
                        printf(MAGENTA"digita ("BLUE"1"RESET MAGENTA") per uscire (uno)\n"RESET);

                        do
                        {   
                            scanf("%d",&a);
                            mult*=a;
                        }while(a!=1);

                        printf("il multiplicazione = " BLUE "%d\n"RESET,mult);
                break;
                case 5:
                        printf("inserisci un numero \n");
                        scanf("%d",&a1);
                        printf("inserisci un'altro numero \n");
                        scanf("%d",&b1);

                        if(a1<b1)
                        {
                            printf(MAGENTA"\ni numeri tra il %d e %d =\n\n"RESET,a1,b1);
                                for(i=a1+1;i<b1;i++)
                                {
                                    printf(BLUE"%d\n"RESET,i);
                                }
                        }
                        else if(a1>b1)
                        {
                            printf(MAGENTA"\ni numeri tra il %d e %d =\n\n"RESET,b1,a1);
                                for(i=b1+1;i<a1;i++)
                                {
                                    printf(BLUE"%d\n"RESET,i);
                                }
                        }
                        else
                        {
                            printf(MAGENTA"i due numeri che hai inserito sono uguali che sono %d e %d\n"RESET,a1,b1);
                        }
                break;
                case 6:

                        printf(MAGENTA"inserisci un numero \n"RESET);
                        scanf("%d",&a);
                        printf(MAGENTA"i numeri pari che sono sotto il "BLUE" %d "RESET" = \n"RESET,a);
                        
                        do
                        {
                            a--;
                            if(a%2==0)
                            {
                                printf(BLUE"%d\n"RESET,a );
                            }
                        }while(a!=0);
                break;
                case 7:

                        printf(MAGENTA"inserisci un numero \n"RESET );
                        scanf("%d",&a );
                        printf(MAGENTA"i numeri dispari che sono sotto il "BLUE" %d "RESET" = \n"RESET,a );
                        
                        do
                        {
                            a--;
                            if(a%2==1)
                            {
                                printf(BLUE"%d\n"RESET,a );
                            }
                        }while(a!=0);
                break;
                case 8:

                        printf(MAGENTA"inserisci un numero \n"RESET );
                        scanf("%d",&a );
                        printf(MAGENTA"inserisci un limite massimo \n"RESET );
                        scanf("%d",&b );
                        
                        printf(MAGENTA"i numeri dispari che sono sopra il "BLUE" %d "RESET" = \n"RESET,a );
                        
                        do
                        {
                            a++;
                            if(a%2==1)
                            {
                                printf(BLUE"%d\n"RESET,a );
                            }
                        }while(a<b);
                break;
                case 9:

                        printf(MAGENTA"inserisci un numero \n"RESET);
                        scanf("%d",&a );
                        printf(MAGENTA"inserisci un limite massimo \n"RESET);
                        scanf("%d",&b );
                        printf(MAGENTA"i numeri pari che sono sopra il"BLUE" %d "RESET"= \n"RESET,a);
                        
                        do
                        {
                            a++;
                            if(a%2==0)
                            {
                                printf(BLUE"%d\n"RESET,a );
                            }
                        }while(a<b);
                break;
                default:
                    printf(MAGENTA"\n\terrore (non c'e' una scelta cosi')\n\t"RESET);
            }

    }while(scelta|=0);

    printf("\narrivederci\n");



    return 0;
}