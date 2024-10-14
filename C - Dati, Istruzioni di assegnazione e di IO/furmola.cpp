#include <stdio.h>
/*
NOME;Elsayed amr
CLASSE;3H
DATA;30/09/2024
*/
int main()
{
	int a,b,c,x,y,xalle2;


	printf("inserisci il primo numero \n");
	scanf("%d",&a);
	printf("inserisci il secondo numero \n");
	scanf("%d",&b);
	printf("inserisci il terzo numero \n");
	scanf("%d",&c);
	printf("inserisci il x \n");
	scanf("%d",&x);
	
	xalle2=x*x;
	y= (a*xalle2)+(b*x)+c;
	
	printf("il risultato di Y e' %d",y);
	return 0;
}
