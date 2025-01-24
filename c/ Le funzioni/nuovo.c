#include <stdio.h>
#define RESET       "\033[0m"
#define BOLD        "\033[1m"
#define CYAN        "\033[36m"
#define MAGENTA     "\033[35m"
#define RED         "\033[31m"

// Dichiarazioni delle funzioni
int area_rettangolo(int x, int y);
int mcd(int x, int y);
int somma_divisori(int x);
int pari_dispari(int x);
int cifra_1(int x);
int somma_cifre(int x);
int cont_cifre(int x);
int somma_due_num(int x,int y);

void menu();

int main() {
    menu(); // Chiamata al menu
    return 0;
}

void menu() {
    int scelta, a, b, c, ris;

    do {
        printf(BOLD"\n--- MENU ---\n"RESET);
        printf("1."MAGENTA" Calcola l'area del rettangolo\n"RESET);
        printf("2."MAGENTA" Calcola il massimo comune divisore (MCD)\n"RESET);
        printf("3."MAGENTA" Somma dei divisori di un numero\n"RESET);
        printf("4."MAGENTA" Determina se un numero è pari o dispari\n"RESET);
        printf("5."MAGENTA" Trova l'ultima cifra di un numero\n"RESET);
        printf("6."MAGENTA" Somma delle cifre di un numero\n"RESET);
        printf("7."MAGENTA" Conta le cifre di un numero\n"RESET);
        printf("8."MAGENTA" dammi due numeri per fare sequenza di Fibonacci corrispondente\n"RESET);
        printf("0. Esci\n");
        printf(BOLD"Scegli un'opzione: "RESET);
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                printf(MAGENTA"Inserisci la base: "RESET);
                scanf("%d", &a);
                printf(MAGENTA"Inserisci l'altezza: "RESET);
                scanf("%d", &b);
                ris = area_rettangolo(a, b);
                printf(BOLD"L'area del rettangolo è: %d\n", ris);
                break;
            case 2:
                printf(MAGENTA"Inserisci il primo numero: "RESET);
                scanf("%d", &a);
                printf(MAGENTA"Inserisci il secondo numero: "RESET);
                scanf("%d", &b);
                ris = mcd(a, b);
                printf(BOLD"Il MCD è: %d\n", ris);
                break;
            case 3:
                printf(MAGENTA"Inserisci un numero: "RESET);
                scanf("%d", &a);
                ris = somma_divisori(a);
                printf(BOLD"La somma dei divisori di %d è: %d\n", a, ris);
                break;
            case 4:
                printf(MAGENTA"Inserisci un numero: "RESET);
                scanf("%d", &a);
                ris = pari_dispari(a);
                printf(BOLD"Il numero è %s.\n", ris == 0 ? "pari" : "dispari");
                break;
            case 5:
                printf(MAGENTA"Inserisci un numero: "RESET);
                scanf("%d", &a);
                ris = cifra_1(a);
                printf(BOLD"L'ultima cifra di %d è: %d\n", a, ris);
                break;
            case 6:
                printf(MAGENTA"Inserisci un numero: "RESET);
                scanf("%d", &a);
                ris = somma_cifre(a);
                printf(BOLD"La somma delle cifre di %d è: %d\n", a, ris);
                break;
            case 7:
                printf(MAGENTA"Inserisci un numero: "RESET);
                scanf("%d", &a);
                ris = cont_cifre(a);
                printf(BOLD"Il numero %d ha %d cifre.\n", a, ris);
                break;
            case 8:
                printf(MAGENTA"dammi il numero inziale\n"RESET);
                scanf("%d",&a);
                printf(MAGENTA"dammi il numero finale\n"RESET);
                scanf("%d",&b);
                ris=somma_due_num(a,b);
                break;
            case 0:
                printf(BOLD"Uscita dal programma.\n");
                break;
            default:
                printf(RED"Opzione non valida. Riprova.\n"RESET);
                break;
        }
    } while (scelta != 0);
}

/*
Scrivere una funzione chiamata "area_rettangolo" che prende in input la base e l'altezza di un rettangolo e restituisce l'area. 
*/

int area_rettangolo(int x, int y) 
{
    return x * y;
}

/*
Scrivere una funzione chiamata "mcd" che prende in input due numeri interi e restituisce il loro 
massimo comune divisore utilizzando l'algoritmo di Euclide. 
*/

int mcd(int x, int y) 
{
    while (x != y) {
        if (x > y) {
            x = x - y;
        } else {
            y = y - x;
        }
    }
    return x;
}

/*
Scrivere una funzione chiamata "somma_divisori" che prende in input un numero intero e restituisce la somma dei suoi divisori.
*/

int somma_divisori(int x) 
{
    int somma = 0;
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            somma += i;
        }
    }
    return somma;
}

/*
Scrivere la funzione int pari_dispari(in numero), attraverso sottrazioni successive 
determinare se il numero passato alla funzione è pari o dispari, restituire 0 (zero) se il numero è pari, 1 se dispari.
*/
int pari_dispari(int x) 
{
    return x % 2;
}

/*
stampa l'ultimo numero(cifra) da un numero grande
*/

int cifra_1(int x) 
{
    return x % 10;
}

/*
Scrivi una funzione che trovi la somma
delle cifre di un dato numero intero.
Ad esempio, la somma delle cifre di 123 è 6.
*/

int somma_cifre(int x) 
{
    int somma = 0;
    while (x != 0) {
        somma += x % 10;
        x /= 10;
    }
    return somma;
}
/*
conta quanti cifre ho scritto
*/
int cont_cifre(int x) 
{
    int cont = 0;
    while (x != 0) {
        x /= 10;
        cont++;
    }
    return cont;
}
/*
Scrivere una funzione che prende in input un numero intero e restituisce la sua sequenza di Fibonacci corrispondente stampandola a schermo.
*/
int somma_due_num(int x,int y)
{   
    int i,somma=0;
    for(i=x,;i>=y;i++)
    {
        somma+=
    }
}
