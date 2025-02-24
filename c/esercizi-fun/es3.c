#include <stdio.h>

int invertiSegno(int n);

int main() {
    int num,r;
    printf("Inserisci un numero: ");
    scanf("%d", &num);
    r=invertiSegno(num);
    printf("Il numero con segno opposto è: %d\n", r);

    return 0;
}

int invertiSegno(int n) 
{
    
    return -n;
}
