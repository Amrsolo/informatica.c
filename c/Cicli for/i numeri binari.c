#include <stdio.h>
#include <math.h>
/*Scrivere un programma che converte un numero binario a 
8 bit in un numero decimale. L’utente inserisce le cifre 
del numero binario un bit alla volta, partendo dal bit più significativo.
Il programma dovrà visualizzare il numero decimale corrispondente.
Suggerimento: per calcolare le potenze di 2 utilizzare la funzione pow
includendo la libreria math.h.*/

int main()
{
    int a,b;
    printf("Inserisci un numero in binario di 8 bit \n");
    scanf("%d",&a);

    a=pow(2,a);
    printf("  %d\n",a);
    return 0; 
}
































/*#include <stdio.h>
#include <math.h>

int main() 
{
    int binario, decimale = 0, bit, i;

    printf("Inserisci un numero binario di 8 bit (senza 0b): \n");
    scanf("%d", &binario);

    // Elabora ogni bit a partire dal bit più significativo
    for (i = 7; i >= 0; i--) 
    {
        bit = binario % 10;  // Estrae l'ultimo bit
        decimale += bit * pow(2, i);  // Aggiungi il bit * 2^i al risultato decimale
        binario /= 10;  // Rimuove l'ultimo bit
    }

    printf("Il numero decimale corrispondente è: %d\n", decimale);

    return 0;
}
*/