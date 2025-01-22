#include<stdio.h>
#define RESET       "\033[0m"
#define BOLD        "\033[1m"
#define UNDERLINE   "\033[4m"
#define MAGENTA     "\033[35m"

//le chiamate delle funzione
int area_rettangolo(int x,int y);
int mcd(int x,int y);
int somma_divisori(int x);
int pari_dispari(int x);
int cifra_1(int x);
int somma_cifre(int x);
int cont_cifre(int x);
/*
void inverti_cifre(int x) 
{
    int invert = 0;

    while (numero!= 0) {
        invert = invert * 10 + numero % 10;
        numero /= 10; 
    }

    printf("Il numero invertito è: %d\n", invertito);
}
*/
int main()
{
    int a,b,c,d,r;

    printf("inserici il primo numero \n");
    scanf("%d",&a);
    printf("inserici il secondo numero \n");
    scanf("%d",&b);
    printf("inserici un numero lungo almeno 3 cifre per trovare l'ultima cifra \n");
    scanf("%d",&c);
    
    //es1
    r=area_rettangolo(a,b);
        printf("l'area rettangolo = %d\n",r);
    //es2
    r=mcd(a,b);
        printf("mcd di a = %d\n",r);
    //es3    
    r=somma_divisori(a);
        printf("la somma dei divisori del %d = %d\n",a,r);
    r=cifra_1(c);
        printf("il numero che c'e' nell'ultima cifra del %d = %d\n",c,r);
    r=somma_cifre(c);
        printf("la somma dei cifri del %d = %d\n",c,r);
    r=cont_cifre(c);
        printf("hai mezzo %d cifre\n",r);
    r=pari_dispari(a);
        printf("se inumero pari sarà 0 e se dispari sarà 1 , il num= %d\n",r);
    //inverti_cifre(c);
    return 0;
}
/*Scrivere una funzione chiamata "area_rettangolo" che prende in input la base e l'altezza di un rettangolo e restituisce l'area. 
*/
int area_rettangolo(int x,int y)
{
    return x*y;
    
}
/*Scrivere una funzione chiamata "mcd" che prende in input due numeri interi e restituisce il loro 
massimo comune divisore utilizzando l'algoritmo di Euclide. 
*/
int mcd(int x,int y)
{
    while(x!=y)
    {
        if(x>y)
        {
            x=x-y;
        }
        else
        {
            y=y-x;
        }
    }

    return x;
}
/*Scrivere una funzione chiamata "somma_divisori" che prende in input un numero intero e restituisce la somma dei suoi divisori.
*/
int somma_divisori(int x)
{
    int somma=0,i;
    for(i=1;i<=x;i++)
    {   
        if(x % i == 0)
        {
            somma+=i;
        }   
    }
    return i;
}
/*Scrivere la funzione int pari_dispari(in numero), attraverso sottrazioni successive 
determinare se il numero passato alla funzione è pari o dispari, restituire 0 (zero) se il numero è pari, 1 se dispari.
*/
int pari_dispari(int x)
{  
    if(x%2==0)
    {
       return 0;
    }
    else
    {
        return 1;
    }
}
/*stampa l'ultimo numero(cifra) da un numero grande*/
int cifra_1(int x)
{   
    int num=0;
    return num+=x%10;
}
/**/
int somma_cifre(int x)
{
    /*
    Scrivi una funzione che trovi la somma
    delle cifre di un dato numero intero.
    Ad esempio, la somma delle cifre di 123 è 6.
    */
    int somma=0; 
    while(x!=0)
    {
        somma+=x%10;
        x/=10;
    }
    return somma;
}
/*Scrivi una funzione che trovi la somma delle cifre di un dato numero intero. Ad esempio, la somma delle cifre di 123 è 6.

*/
int cont_cifre(int x)
{
    int cont=0,i;
    while(x!=0)
    {
        i+=x%10;
        x/=10;
        cont++;
    }
    return cont;
}