#include <stdio.h>
/*
Un negoziante per ogni spesa di importo superiore a 50 � effettua 
uno sconto del 5%, del 10% per ogni spesa superiore a 100 �.
 Scrivere un programma che richieda all'utente l'ammontare della spesa 
 e visualizzi quindi l'importo effettivo da pagare. 
*/
int main()
{
	float a,sconto;
	
	printf("inserisci quanto hai pagato \n");
	scanf("%2f",&a);
	
	if(a > 49&&a<100)
	{
		sconto= (a*5)/100;
		a= a-sconto;
		printf("il prezzo scontato uguale a %.2f \n",a); 
	}
	else if(a > 99)
	{
		sconto= (a*10)/100;
		a= a-sconto;
		printf("il prezzo scontato uguale a %.2f \n",a); 
	}
	else
	{
		printf("non ci sarà un sconto \n");
	}
	
	
	return 0;
}
