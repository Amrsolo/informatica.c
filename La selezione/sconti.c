#include <stdio.h>
/*
Un negoziante per ogni spesa di importo superiore a 50 € effettua 
uno sconto del 5%, del 10% per ogni spesa superiore a 100 €.
 Scrivere un programma che richieda all'utente l'ammontare della spesa 
 e visualizzi quindi l'importo effettivo da pagare. 
*/
int main()
{
	int a,sconto;
	
	printf("inserisci un numero \n");
	scanf("%d",&a);
	
	if(a > 49&&a<100)
	{
		sconto= (a*5)/100;
		a= a-sconto;
		printf("il prezzo scontato uguale a %d",a); 
	}
	else if(a > 99)
	{
		sconto= (a*10)/100;
		a= a-sconto;
		printf("il prezzo scontato uguale a %d",a); 
	}
	
	
	return 0;
}
