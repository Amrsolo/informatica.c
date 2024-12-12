#include <stdio.h>
/*Scrivere un programma in C che chiesti 2 numeri
interi all’utente, stampi sul monitor tutti i numeri
compresi fra i 2 interi. Es. se i numeri inseriti 
sono 4 e 12 stampare 4,5,6,7,8,9,10,11,12. Allegare
diagramma di flusso e tabella di traccia. Come
modificare il programma per farlo funzionare
anche con il primo numero maggiore del secondo?.
*/
int main()
{
    int a,b,i,j;

    printf("inserisci un numero \n");
    scanf("%d",&a);
    printf("inserisci un'altro numero \n");
    scanf("%d",&b);

    if(a<b)
    {
        printf("i numeri tra il %d e %d =\n",a,b);
        for(i=a+1;i<b;i++)
        {
            printf("%d\n",i);
        }
    }
    else if(a>b)
    {
        printf("i numeri tra il %d e %d =\n",b,a);
        for(i=b+1;i<a;i++)
        {
            printf("%d\n",i);
        }
    }
    else
    {
        printf("i due numeri che hai inserito sono uguali che sono %d e %d\n",a,b);
    }

    return 0;
}