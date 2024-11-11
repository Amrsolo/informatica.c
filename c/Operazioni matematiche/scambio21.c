#include <stdio.h>
 /*
 nome;Elsayed Amr
 classe;3H
 data;30/09/2024
 obgetto;Scambiare il contenuto di 2 variabili. Stampare il valore delle variabili prima e dopo lo scambio
 */
 
 int main()
 {
 	int a,b,c;
 	
	
	a=2;
	b=6;
 	printf("i numeri primo del scambio sono %d e %d \n",a,b);
 	
 	c=a;
 	a=b;
 	b=c;
 	
 	printf("i numeri dopo lo scambio sono %d e %d \n",a,b);
 	
 	return 0;
 	
 }
