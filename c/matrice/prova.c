#include <stdio.h>

// Funzione per leggere una stringa fino al carattere 'fine' (es. '#')
void leggiStringa(char s[], char fine) {
    int i = 0;
    char c;
    do {
        scanf("%c", &c);
        if (c != fine) {
            s[i] = c;
            i++;
        }
    } while (c != fine);
    s[i] = '\0'; // termina la stringa
}

// Funzione per stampare la stringa
void stampaStringa(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        printf("%c", s[i]);
        i++;
    }
    printf("\n");
}

// Funzione per calcolare la lunghezza della stringa
int lunghezzaStringa(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

// Funzione per confrontare due stringhe
int confrontaStringhe(char s1[], char s2[]) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] < s2[i]) return -1;
        if (s1[i] > s2[i]) return 1;
        i++;
    }
    // Una delle due stringhe è finita
    if (s1[i] == '\0' && s2[i] == '\0') return 0;
    if (s1[i] == '\0') return -1;
    return 1;
}

// Funzione principale
int main() {
    char s1[100], s2[100];

    printf("Inserisci la prima stringa (termina con #): ");
    leggiStringa(s1, '#');

    printf("Inserisci la seconda stringa (termina con #): ");
    leggiStringa(s2, '#');

    printf("\nStringa 1: ");
    stampaStringa(s1);

    printf("Stringa 2: ");
    stampaStringa(s2);

    int len1 = lunghezzaStringa(s1);
    int len2 = lunghezzaStringa(s2);

    printf("\nLunghezza Stringa 1: %d\n", len1);
    printf("Lunghezza Stringa 2: %d\n", len2);

    int confronto = confrontaStringhe(s1, s2);
    if (confronto == 0)
        printf("Le stringhe sono uguali.\n");
    else if (confronto < 0)
        printf("La prima stringa precede la seconda (ordine ASCII).\n");
    else
        printf("La seconda stringa precede la prima (ordine ASCII).\n");

    return 0;
}
