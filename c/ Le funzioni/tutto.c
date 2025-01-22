#include<stdio.h>


int area_rettangolo(int x,int y)
{
    return x*y:
    
}
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
int somma_divisori(int x)
{
    int somma=0,i;
    
    printf("\ni divisori = \n");
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
int pari_dispari(int x)
{  
    if(x%2==0)
    {
        printf("\n0\n");
    }
    else
    {
        printf("\n1\n");
    }
}
int cifra_1(int x)
{
    int num=0;
    num+=x%10;
    printf("\nil numero dell'ultima cifra = %d\n",num);
}
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
    printf("\nla somma = %d\n",somma);
}
int cont_cifre(int x)
{
    int cont=0,i;
    while(x!=0)
    {
        i+=x%10;
        x/=10;
        cont++;
    }
    printf("\nhai messo %d cifre\n",cont);
}
int inverti_cifre(int x) 
{
    int invert = 0;

    while (numero!= 0) {
        invert = invert * 10 + numero % 10;
        numero /= 10; 
    }

    printf("Il numero invertito è: %d\n", invertito);
}
int main()
{
    int a,b,c,d,r;

    printf("inserici il primo numero \n");
    scanf("%d",&a);
    printf("inserici il secondo numero \n");
    scanf("%d",&b);
    printf("inserici un numero lungo almeno 3 cifre per trovare l'ultima cifra \n");
    scanf("%d",&c);
    

    r=area_rettangolo(a,b);
    printf("l'area rettangolo = %d",r);
    r=mcd(a,b);
    printf("mcd di a = %d",r);
    somma_divisori(a);
    cifra_1(c);
    somma_cifre(c);
    cont_cifre(c);
    pari_dispari(a);
    inverti_cifre(c);
    return 0;
}

