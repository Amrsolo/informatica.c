#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10
#define NUM_VOTI 10

typedef struct {
    int gg;
    int mm;
    int aa;
} Data;

typedef struct {
    char cognome[20];
    Data nascita;
    int voti[NUM_VOTI];
} Persona;

void carica_tabella(Persona studenti[], int n);
void stampa_tabella(Persona studenti[], int n);
double calcola_media(Persona *p);
int cerca_studente(Persona studenti[], int n, const char *cognome);

int main() {
    Persona studenti[N];

    carica_tabella(studenti, N);

    // Stampa iniziale con medie
    printf("\nDati inseriti e medie:\n");
    for (int i = 0; i < N; i++) {
        printf("\nStudente %d:\n", i + 1);
        printf("Cognome: %s\n", studenti[i].cognome);
        printf("Data di nascita: %02d/%02d/%04d\n",
               studenti[i].nascita.gg,
               studenti[i].nascita.mm,
               studenti[i].nascita.aa);
        printf("Voti: ");
        for (int j = 0; j < NUM_VOTI; j++) {
            printf("%d ", studenti[i].voti[j]);
        }
        double media = calcola_media(&studenti[i]);
        printf("\nMedia voti: %.2f\n", media);
    }

    // Ricerca studente per cognome
    char cerca[20];
    printf("\nInserisci il cognome da cercare: ");
    scanf("%s", cerca);

    int pos = cerca_studente(studenti, N, cerca);
    if (pos >= 0) {
        printf("\nStudente trovato in posizione %d (indice %d):\n", pos + 1, pos);
        printf("Cognome: %s\n", studenti[pos].cognome);
        printf("Data di nascita: %02d/%02d/%04d\n",
               studenti[pos].nascita.gg,
               studenti[pos].nascita.mm,
               studenti[pos].nascita.aa);
        printf("Voti: ");
        for (int j = 0; j < NUM_VOTI; j++) {
            printf("%d ", studenti[pos].voti[j]);
        }
        double media = calcola_media(&studenti[pos]);
        printf("\nMedia voti: %.2f\n", media);
    } else {
        printf("\nStudente con cognome \"%s\" non trovato.\n", cerca);
    }

    return 0;
}

void carica_tabella(Persona studenti[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\n--- Studente %d ---\n", i + 1);
        printf("Inserisci il cognome: ");
        scanf("%s", studenti[i].cognome);

        printf("Inserisci la data di nascita (gg mm aaaa): ");
        scanf("%d %d %d",
              &studenti[i].nascita.gg,
              &studenti[i].nascita.mm,
              &studenti[i].nascita.aa);

        for (int j = 0; j < NUM_VOTI; j++) {
            printf("Inserisci il %d° voto: ", j + 1);
            scanf("%d", &studenti[i].voti[j]);
        }
    }
}

double calcola_media(Persona *p) {
    int somma = 0;
    for (int i = 0; i < NUM_VOTI; i++) {
        somma += p->voti[i];
    }
    return (double)somma / NUM_VOTI;
}

int cerca_studente(Persona studenti[], int n, const char *cognome) {
    for (int i = 0; i < n; i++) {
        if (strcmp(studenti[i].cognome, cognome) == 0) {
            return i;  // restituisce l’indice trovato
        }
    }
    return -1;  // se non lo trova
}
