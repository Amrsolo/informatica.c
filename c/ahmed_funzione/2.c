
#include <stdio.h>

#define N 10
//Elsayed Amr 3H
void CaricaArray(int[]);
void StampaArray(int[]);
int ricercaElemento(int[], int);
void InvertiAltroVettore(int[], int[]);
void copiaDoppioAltroVettore(int[], int[]);
void azzeraVettore(int[]);
int visualizzaMenu(void);
void copiaPari(int[], int[]);
int trovaMax(int[]);
int trovaIndiceDelMax(int[]);

int main() {
    int voti1[N], voti2[N];
    int scelta;

    CaricaArray(voti1);

    do {
        scelta = visualizzaMenu();

        switch (scelta) {
            case 1:
                CaricaArray(voti1);
                break;
            case 2:
                StampaArray(voti1);
                break;
            case 3: {
                int elemento;
                printf("Inserisci l'elemento da cercare: ");
                scanf("%d", &elemento);
                int indice = ricercaElemento(voti1, elemento);
                if (indice != -1)
                    printf("Elemento trovato all'indice %d\n", indice);
                else
                    printf("Elemento non trovato\n");
                break;
            }
            case 4:
                InvertiAltroVettore(voti1, voti2);
                printf("Voti1 invertito in Voti2 con successo.\n");
                break;
            case 5:
                copiaDoppioAltroVettore(voti1, voti2);
                printf("Doppio dei voti1 copiato in voti2 con successo.\n");
                break;
            case 6:
                azzeraVettore(voti1);
                printf("Vettore azzerato.\n");
                break;
            case 7:
                copiaPari(voti1, voti2);
                printf("Elementi pari copiati con successo in voti2.\n");
                break;
            case 8: {
                int massimo = trovaMax(voti1);
                printf("Il valore più grande nel vettore è %d.\n", massimo);
                break;
            }
            case 9: {
                int indiceMax = trovaIndiceDelMax(voti1);
                printf("Il numero più grande è %d e si trova in posizione %d.\n", voti1[indiceMax], indiceMax);
                break;
            }
            case 0:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida.\n");
        }
    } while (scelta != 0);

    return 0;
}

int visualizzaMenu(void) {
    int scelta;
    printf("\nMenu:\n");
    printf("1. Carica Array\n");
    printf("2. Stampa Array\n");
    printf("3. Ricerca Elemento\n");
    printf("4. Inverti un Altro Vettore\n");
    printf("5. Copia Doppio Altro Vettore\n");
    printf("6. Azzera Vettore\n");
    printf("7. Copia Pari\n");
    printf("8. Trova Massimo\n");
    printf("9. Trova Indice del Massimo\n");
    printf("0. Esci\n");
    printf("Scelta: ");
    scanf("%d", &scelta);
    return scelta;
}

void CaricaArray(int arr[]) 
{
	int i;
    printf("Inserisci %d interi:\n", N);

    for ( i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
}

void StampaArray(int arr[]) 
{
	int i;
    printf("Contenuto dell'array:\n");

    for ( i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int ricercaElemento(int arr[], int x) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

void InvertiAltroVettore(int v1[], int v2[]) 
{
	int i;
    for (i = 0; i < N; i++) {
        v2[N - 1 - i] = v1[i];
    }
}

void copiaDoppioAltroVettore(int v1[], int v2[]) 
{
	int i;
    for ( i = 0; i < N; i++) {
        v2[i] = 2 * v1[i];
    }
}

void azzeraVettore(int arr[]) 
{
	int i;
    for ( i = 0; i < N; i++) 
	{
        arr[i] = 0;
    }
}

void copiaPari(int v1[], int v2[]) 
{
    int i,j = 0;
    for ( i = 0; i < N; i++) {
        if (v1[i] % 2 == 0) {
            v2[j] = v1[i];
            j++;
        }
    }
}

int trovaMax(int v[]) 
{
	
    int i,max = v[0];
    for ( i = 1; i < N; i++) {
        if (v[i] > max) {
            max = v[i];
        }
    }
    return max;
}

int trovaIndiceDelMax(int v[]) {
    int i,max = v[0];
    int indiceMax = 0;
    for ( i = 1; i < N; i++) {
        if (v[i] > max) {
            max = v[i];
            indiceMax = i;
        }
    }
    return indiceMax;
}
