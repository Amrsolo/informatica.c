#include <stdio.h>
 /*
 NOME;Elsayed amr
 CLASSE;3H
 DATA;30/09/2024
 Scrivi un programma che calcola l’area e 
 il perimetro di un trapezio dopo aver assegnato 
 i valori necessari alle variabili (suggerimento 
 per il nome del file b_trapezio.c)

 */
 
int main()
{
	int b,B,l1,l2,area,Perimetro,h;
	
	b=2;
	B=3;
	l1=4;
	l2=0;
	h=3;
	area= ((B+b)*h)/2;
	Perimetro= B+b+l1+l2;
	printf("l'area = %d il perimetro = %d",area,Perimetro);
	return 0;
}
