#include <stdio.h>

int main()
{
	int num1,num2;
	
	printf("inserisci il primo numero \n");
	scanf("%d",&num1);
	printf("inserisci il secondo numero \n");
	scanf("%d",&num2);
	
	if(num1==num2)
	{
		printf("i due numeri sono ugale che sono %d E %d \n ", num1,num2);
		
	}
	
	else if(num1 < num2)
	{
		printf("il numero maggiore e' %d \n",num2);
		printf("il numero minore e' %d \n",num1);
	}
	
	else 
	{
		printf("il numero maggiore e' %d \n",num1);
		printf("il numero minore e' %d \n",num2);
	}
	
	return 0;
	
}
