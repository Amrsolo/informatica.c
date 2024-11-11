#include <stdio.h>
/*
Scrivi un programma che assegna 3 valori a tre variabili (a, b e c) 
che rappresentano i coefficienti del polinomio 
 "ax2 + bx + c" e valuta il suo valore in vari punti x
 (y = ax2 + bx + c), sempre assegnati all’interno del codice
  (ricorda che x2 = x*x) stampate il valore di y per almeno 10 valori di x assegnati.
    (suggerimento per il nome del file a_polinomi.c)

*/
int main()
{
	int a,b,c,x,y;
	
	
	a=2;
	b=5;
	c=2;
	
	
	printf("la formola uguale a Y=a*(x*x)+b*x+c \n");
	x=2;
	y=a*(x*x)+(b*x)+(c);
	printf("il a= %d, il b=%d, il c=%d, il x=%d, E il y=%d  \n",a,b,c,x,y);
	x=0;
	y=a*(x*x)+(b*x)+(c);
	printf("il a= %d, il b=%d, il c=%d, il x=%d, E il y=%d \n",a,b,c,x,y);
	x=1;
	y=a*(x*x)+(b*x)+(c);
	printf("il a= %d, il b=%d, il c=%d, il x=%d, E il y=%d \n",a,b,c,x,y);
	x=11;
	y=a*(x*x)+(b*x)+(c);
	printf("il a= %d, il b=%d, il c=%d, il x=%d, E il y=%d \n",a,b,c,x,y);
	x=8;
	y=a*(x*x)+(b*x)+(c);
	printf("il a= %d, il b=%d, il c=%d, il x=%d, E il y=%d \n",a,b,c,x,y);
	x=6;
	y=a*(x*x)+(b*x)+(c);
	printf("il a= %d, il b=%d, il c=%d, il x=%d, E il y=%d \n",a,b,c,x,y);
	x=7;
	y=a*(x*x)+(b*x)+(c);
	printf("il a= %d, il b=%d, il c=%d, il x=%d, E il y=%d \n",a,b,c,x,y);
	x=4;
	y=a*(x*x)+(b*x)+(c);
	printf("il a= %d, il b=%d, il c=%d, il x=%d, E il y=%d \n",a,b,c,x,y);
	x=3;
	y=a*(x*x)+(b*x)+(c);
	printf("il a= %d, il b=%d, il c=%d, il x=%d, E il y=%d \n",a,b,c,x,y);
	x=10;
	y=a*(x*x)+(b*x)+(c);
	printf("il a= %d, il b=%d, il c=%d, il x=%d, E il y=%d \n",a,b,c,x,y);
	
	return 0;
}
