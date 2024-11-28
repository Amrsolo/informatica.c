#include<stdio.h>

int main()
{
	int A;
	
	printf("inserisci numero\n");
	scanf("%d",&A);
	
	switch(A)
	{
		case 1:
			printf(" il giorno è lunedi' \n");
		break;
		
		case 2:

			printf(" il giorno è martedi' o mercoledi' \n");
		break;
		
		case 3:
			printf(" il giorno è giovedi' \n");
		break;
		
		case 'V':
		case 'v':
			printf(" il giorno è venerdi' \n");
		break;
		
		case 'S':
		case 's':
			printf(" il giorno è sabato \n");
		break;
		
		case 7:
			printf(" il giorno è domenica \n");
		break;
			
		default:
			printf("non e' un giorno della settimana \n");
				
	}
	return 0;
}