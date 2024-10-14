#include <stdio.h>
 /*
 NOME;Elsayed amr
 CLASSE;3H
 DATA;30/09/2024
 */
 
int main()
{
	int b,B,l1,l2,area,Perimetro,h;
	printf("inserisci l'altezza \n");
	scanf("%d",&h);
	printf("inserisci il base maggiore\n");
	scanf("%d",&B);
	printf("inserisci il base minore \n");
	scanf("%d",&b);
	printf("inserisci il primo lato \n");
	scanf("%d",&l1);
	printf("inserisci il secondo lato \n");
	scanf("%d",&l2);
	
	area= ((B+b)*h)/2;
	Perimetro= B+b+l1+l2;
	printf("l'area = %d il perimetro = %d",area,Perimetro);
	return 0;
}
