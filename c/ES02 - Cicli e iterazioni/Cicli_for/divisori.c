#include<stdio.h>
/*
Classe: 3H
Nome: 3mr
Cognome: Elsayed
data:27/11/2024
Scrivere un programma che, richiesto un numero intero, visualizzi tutti i suoi divisori. aggiungere la tabella di traccia
*/
int main() //riga 1
{
    int a, i; //riga 2

    printf("Scrivi un numero intero 'positivo' per trovare i suoi divisori: ");//riga 3
    scanf("%d", &a);//riga 4

    if (a <= 0)//riga 5 
    {
        printf("Ma non capisci?!! \nDeve essere un numero positivo.\n");//riga 6
        return 1; 
    }

    printf("I divisori di %d sono:\n", a);//riga 7
    for(i = 1; i <= a; i++)//riga 8 
    {
        if (a % i == 0)//riga 9 
        {
            printf("%d\n", i);//riga 10
        }
    }

    return 0;
}
