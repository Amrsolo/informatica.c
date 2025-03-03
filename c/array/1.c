#include <stdio.h>
#define N 10

void CaricaArray(int v1[], int v2[]);
void stampaarray(int v1[], int v2[]);
int num_max(int v1[], int v2[]);
void InvertiAltroVettore(int v1[], int v2[], int v3[]);
int ricercaElemento(int v1[], int x);
void azzeraVettore(int v1[]);
void menu(int scelta);

int main() {
    int numeri[N], r, numeri2[N], numeri3[N], a;
    
    printf("Inserisci un numero per trovare\n");
    scanf("%d", &a);

    CaricaArray(numeri, numeri2);
    stampaarray(numeri, numeri2);
    r = num_max(numeri, numeri2);
    printf("Il numero massimo dalla sequenza di numeri e' %d\n", r);
    InvertiAltroVettore(numeri, numeri2, numeri3);
    r = ricercaElemento(numeri, a);
    if (r != -1) {
        printf("Il numero trovato e' %d\n", r);
    } else {
        printf("Il numero %d non e' stato trovato\n", a);
    }
    azzeraVettore(numeri);
    return 0;
}

void menu(int scelta) {
    int numeri[N], r, numeri2[N], numeri3[N], a;
    switch (scelta) {
        case 1:
            CaricaArray(numeri, numeri2);
            break;
        case 2:
            stampaarray(numeri, numeri2);
            break;
        case 3:
            r = num_max(numeri, numeri2);
            printf("Il numero massimo dalla sequenza di numeri e' %d\n", r);
            break;
        case 4:
            InvertiAltroVettore(numeri, numeri2, numeri3);
            break;
        case 5:
            r = ricercaElemento(numeri, a);
            if (r != -1) {
                printf("Il numero trovato e' %d\n", r);
            } else {
                printf("Il numero %d non e' stato trovato\n", a);
            }
            break;
        case 6:
            break;
    }
}

void CaricaArray(int v1[], int v2[]) {
    int i;

    printf("Inserisci 10 numeri diversi per il primo array:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &v1[i]);
    }

    printf("Inserisci altri 10 numeri diversi per il secondo array:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &v2[i]);
    }
}

void stampaarray(int v1[], int v2[]) {
    int i;

    printf("\nI numeri nel primo array sono:\n");
    for (i = 0; i < N; i++) {
        printf("%d\n", v1[i]);
    }

    printf("\nI numeri nel secondo array sono:\n");
    for (i = 0; i < N; i++) {
        printf("%d\n", v2[i]);
    }
}

int num_max(int v1[], int v2[]) {
    int max = v1[0], i;

    for (i = 1; i < N; i++) {
        if (v1[i] > max) {
            max = v1[i];
        }
    }
    for (i = 0; i < N; i++) {
        if (v2[i] > max) {
            max = v2[i];
        }
    }

    return max;
}

void InvertiAltroVettore(int v1[], int v2[], int v3[]) {
    int i;
    // Inversione degli elementi tra v1 e v2
    for (i = 0; i < N; i++) {
        v3[i] = v1[N - 1 - i];  // Copia v1 invertito in v3
    }

    // Stampa dei valori invertiti
    printf("\nVettore v3 (invertito v1):\n");
    for (i = 0; i < N; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    // Opzionalmente puoi copiare anche i valori di v3 in v2 se necessario
    for (i = 0; i < N; i++) {
        v2[i] = v3[i];
    }
}

int ricercaElemento(int v1[], int x) {
    int i;
    for (i = 0; i < N; i++) {
        if (v1[i] == x) {
            return v1[i]; // Trova l'elemento e restituiscilo
        }
    }
    return -1; // Elemento non trovato
}

void azzeraVettore(int v1[]) {
    int i;
    
    for (i = 0; i < N; i++) {
        v1[i] = 0;
    }

    printf("\nIl vettore ora è azzerato:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", v1[i]);
    }
    printf("\n");
}
