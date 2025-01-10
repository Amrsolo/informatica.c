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
    int scelta,scelta2,somma=0,cont=0,mult=1,a,b,i,b1,a1;
    char a2;
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
        printf("scegli ("BLUE"6"RESET")per stampare tutti i numeri pari sotto a quello che lo inserisci \n");
        printf("scegli ("BLUE"7"RESET")per stampare tutti i numeri dispari sotto a quello che lo inserisci \n");
        printf("scegli ("BLUE"8"RESET")per stampare tutti i numeri pari sopra a quello che lo inserisci "BLUE"(ma devi inserire un limite massimo)"RESET" \n");
        printf("scegli ("BLUE"9"RESET")per stampare tutti i numeri dispari sopra a quello che lo inserisci "BLUE"(ma devi inserire un limite massimo)"RESET" \n");
        printf("scegli ("BLUE"10"RESET")per fare il multiplicazione di numeri e con il numero che scegli te \n");
        printf("scegli ("BLUE"11"RESET") per fare alcune cose con le lettere (c'e' l'espiegazione nel ("BLUE"-1"RESET"))\n");
        printf("scegli ("BLUE"12"RESET")per trovare il fattore di un numero \n");
        printf("scegli ("BLUE"13"RESET")per trovare il mcd di un numero \n");
        printf("scegli ("BLUE"-1"RESET") per per l'epiegazione di ongi opzione\n");
        printf("scegli ("BLUE"0"RESET") per uscire\n");
        printf(BOLD"tua scelta e' :\t"BLUE);
        scanf("%d",&scelta);
        printf("\n"RESET);

            switch (scelta)
            {   
                case 0:
                    printf("Uscita dal programma.\n");
                break;
                case -1:
                    printf("\nSpiegazioni delle opzioni con esempi pratici:\n\n");
                    printf(BLUE BOLD"1: Calcola la somma di una sequenza di numeri.\n"RESET);
                        printf(RED"   Esempio: Inserisci 5, 10, 0. Risultato: 15 (5 + 10).\n");
                    printf(BLUE BOLD"2: Calcola la media di una sequenza di numeri.\n"RESET);
                        printf(RED"   Esempio: Inserisci 5, 10, 15, 0. Risultato: 10 (media di 5, 10 e 15).\n");
                    printf(BLUE BOLD"3: (Non funzionante) Doveva calcolare il divisore cumulativo.\n"RESET);
                    printf(BLUE BOLD"4: Calcola la moltiplicazione cumulativa di una sequenza di numeri.\n"RESET);
                        printf(RED"   Esempio: Inserisci 2, 3, 4, 1. Risultato: 24 (2 × 3 × 4).\n");
                    printf(BLUE BOLD"5: Trova e stampa i numeri compresi tra due valori.\n"RESET);
                        printf(RED"   Esempio: Inserisci 5 e 10. Risultato: 6, 7, 8, 9.\n");
                    printf(BLUE BOLD"6: Stampa tutti i numeri pari sotto un valore.\n"RESET);
                        printf(RED"   Esempio: Inserisci 8. Risultato: 6, 4, 2, 0.\n");
                    printf(BLUE BOLD"7: Stampa tutti i numeri dispari sotto un valore.\n"RESET);
                        printf(RED"   Esempio: Inserisci 9. Risultato: 7, 5, 3, 1.\n");
                    printf(BLUE BOLD"8: Stampa tutti i numeri pari sopra un valore fino a un limite.\n"RESET);
                        printf(RED"   Esempio: Inserisci 5 come valore e 12 come limite. Risultato: 6, 8, 10.\n");
                    printf(BLUE BOLD"9: Stampa tutti i numeri dispari sopra un valore fino a un limite.\n"RESET);
                        printf(RED"   Esempio: Inserisci 5 come valore e 12 come limite. Risultato: 7, 9, 11.\n");
                    printf(BLUE BOLD"10: Somma i prodotti di un numero con una sequenza di valori compresi tra due estremi.\n"RESET);
                        printf(RED"   Esempio: Inserisci 2 come inizio, 4 come fine, 3 come moltiplicatore.\n");
                        printf(RED"   Risultato: (3×2) + (3×3) + (3×4) = 27.\n");
                        printf(BLUE BOLD"11: Esegui operazioni con le lettere.\n"RESET);
                    printf(RED"   Esempio:\n");
                        printf("   - Opzione ("RESET"1"RED"): Inserisci una lettera. Se è maiuscola, verrà convertita in minuscola e viceversa.\n");
                            printf("     Esempio: Inserisci 'A'. Risultato: 'a'.\n");
                            printf("     Oppure: Inserisci 'a'. Risultato: 'A'.\n");
                        printf("   - Opzione ("RESET"2"RED"): Inserisci una lettera. Verranno mostrati i codici decimali e esadecimali corrispondenti.\n");
                            printf("     Esempio: Inserisci 'A'. Risultato: Decimale: 65, Esadecimale: 41.\n");
                    printf(BLUE BOLD"-1: Mostra questa spiegazione con esempi.\n"RESET);
                    printf(BLUE BOLD"0: Esce dal programma.\n\n"RESET);
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
                case 10:

                        printf(MAGENTA"inserici un numero dove si inzia il multiplicazione\n"RESET);
                        scanf("%d",&a);
                        printf(MAGENTA"inserici un numero dove si finisce il multiplicazione\n"RESET);
                        scanf("%d",&b);
                        printf(MAGENTA"inserici un numero che si una per fare il multiplicazione\n"RESET);
                        scanf("%d",&a1);
                        mult=a1;

                        if(a>b)
                        {
                            for(i=b;i<=a;i++)
                            {
                                mult*=i;
                                somma+=mult;
                            }
                        }
                        else if(a<b)
                        {
                            for(i=a;i<=b;i++)
                            {
                                mult*=i;
                                somma+=mult;
                            }
                        }
                        else
                        {
                            (a+b)*mult;
                        }

                        printf(BLUE"i numeri multiplicati = %d"RESET,somma);
                break;
                case 11:
                        
                        printf("inserisci un numero per una opzione\n");
                        printf("\nscegli ("BLUE"1"RESET") per trovare la lettera minuscola o maiuscula da quella inseritta\n");
                        printf("\nscegli ("BLUE"2"RESET") per trovare il numero decimale e esadicimale di una lettera\n");
                        scanf("%d",&scelta2);
                        switch(scelta2)
                        {   /*
                            case 1:

                                printf(MAGENTA"inserici una lettera\n"RESET);
                                scanf("%c",&a2);


                                a2=("%d",a2);
   
                                if(a2<=90&&a2>=65)
                                {  
                                    a2=a2+32;
                                    printf("la lettera era in maioscola e adesso sara' cosi' %c \n",a2);
                                }
                                else if(a2>=97&&a2<=122)
                                {
                                    a=a-32;
                                    printf("la lettera era in maioscolo e adesso sara' cosi' %c \n",a2);
                                }
                                else
                                {
                                    printf("non è una lettera \n");
                                }
                            break;
                            case 2:
                                printf(MAGENTA"inserisci una lettera \n"RESET);
                                scanf("%c",&a2); 

                                printf(BLUE"il numero decimale del %c sara' %d \n",a2,a2);
                                printf("il numero esadecimale del %c sara' %x \n"RESET,a2,a2);
                            break;
                            */
                            case 1:

                                printf(MAGENTA"Inserisci una lettera:\n"RESET);
                                scanf(" %c", &a2); // Nota lo spazio prima di %c per consumare i caratteri di nuova linea

                                if (a2 >= 'A' && a2 <= 'Z') // Controlla se è una lettera maiuscola
                                {  
                                    a2 = a2 + 32; // Converti in minuscola
                                    printf(MAGENTA"La lettera era maiuscola e adesso sarà:"BLUE" %c\n", a2);
                                }
                                else if (a2 >= 'a' && a2 <= 'z') // Controlla se è una lettera minuscola
                                {
                                    a2 = a2 - 32; // Converti in maiuscola
                                    printf(MAGENTA"La lettera era minuscola e adesso sarà: "BLUE"%c\n", a2);
                                }
                                else
                                {
                                    printf(MAGENTA"Non è una lettera.\n"RESET);
                                }
                        break;

                        case 2:

                            printf(MAGENTA"Inserisci una lettera:\n"RESET);
                            scanf(" %c", &a2); // Nota lo spazio prima di %c per gestire correttamente il buffer

                            printf(BLUE"Il numero decimale di '%c' è: %d\n", a2, a2);
                            printf("Il numero esadecimale di '%c' è: %x\n"RESET, a2, a2);
                            break;

                        }
                break;
                case 12:

                    printf(MAGENTA"Inserisci un numero:\n"RESET);
                    scanf(" %d", &a);
                    cont=a;
                    mult=1;
                    
                    while(cont!=0)
                    {
                        mult*=cont;
                        cont--;
                    }
                    printf(BLUE"Il numero fattore del %d e' : %d\n",a,mult);
                break;
                case 13:

                    printf(MAGENTA"Inserisci un numero:\n"RESET);
                    scanf(" %d", &a);
                    printf(MAGENTA"Inserisci un secondo numero:\n"RESET);
                    scanf(" %d", &b);
                    min=a;
                default:
                    printf(MAGENTA"\n\terrore (non c'e' una scelta cosi')\n\t"RESET);
            }

    }while(scelta|=0);

    printf("\narrivederci\n");



    return 0;
}