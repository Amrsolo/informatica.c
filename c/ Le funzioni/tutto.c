#include<stdio.h>


void area_rettangolo(int x,int y)
{
    int a=0;
    a=x*y;
    printf("l'area = %d \n",a);
}
void mcd(int x,int y)
{
    int mcd,i;
    int min = x;
    if (y < min) min = y;

    for (i = min; i > 0; i--) {
        if (x % i == 0 && y % i == 0) {
            mcd = i;
            break;  // Uscire dal ciclo quando troviamo il massimo divisore comune
        }
    }
    printf("Il MCD dei tre numeri è: %d\n", mcd);
}
void somma_divisori(int x)
{
    int somma=0,i;
    
    printf("i divisori = \n");
    for(i=1;i<=x;i++)
    {   
        if(x % i == 0)
        {
            somma+=i;
            printf("%d\n",i);
        }   
    }
    printf("la somma dei divisori = %d \n",somma);

}
void pari_dispari(int x)
{  
    if(x%2==0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
    }
}
/*
int sommaCifre(int numero) {
    numero = abs(numero); // Assicurarsi che il numero sia positivo
    int somma = 0;

    while (numero > 0) {
        somma += numero % 10; // Aggiungi l'ultima cifra
        numero /= 10;         // Rimuovi l'ultima cifra
    }

    return somma;
}
*/
void cifra_1(int x)
{
    int num=0;
    num+=x%10;
    printf("il numero dell'ultima cifra = %d\n",num);
}
void somma_cifre(int x,int num1)
{
    /*Scrivi una funzione che trovi la somma
     delle cifre di un dato numero intero.
      Ad esempio, la somma delle cifre di 123 è 6.
    */
    int i,somma=0;
    for(i=1;i<=num1;i++)
    {
        somma+=x%10;
        printf("la somma = %d\n",somma);
    }
    
}
int main()
{
    int a,b,c,d;

    printf("inserici il primo numero \n");
    scanf("%d",&a);
    printf("inserici il secondo numero \n");
    scanf("%d",&b);
    printf("inserici un numero lungo almeno 3 cifre per trovare l'ultima cifra \n");
    scanf("%d",&c);
    printf("inserici quante cifre hai messe adesso \n");
    scanf("%d",&d);

    area_rettangolo(a,b);
    mcd(a,b);
    somma_divisori(a);
    pari_dispari(a);
    cifra_1(c);
    somma_cifre(c,d);
    return 0;
}

