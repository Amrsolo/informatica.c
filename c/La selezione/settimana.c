#include<stdio.h>

int main()

{
	char A;
	
	printf("inserisci lettera\n");
	scanf("%c",&A);
	
	switch (A)
	
	{
		case 'L':
		case 'l':
			printf(" il giorno è lunedě \n");
		break;
		
		case 'M':
		case 'm':
			printf(" il giorno è martedě o mercoledě \n");
		break;
		
		case 'G':
		case 'g':
			printf(" il giorno è giovedě \n");
		break;
		
		case 'V':
		case 'v':
			printf(" il giorno è venerdě \n");
		break;
		
		case 'S':
		case 's':
			printf(" il giorno è sabato \n");
		break;
		
		case 'd':
		case 'D':
			printf(" il giorno è domenica \n");
		break;
			
		default:
			printf("non e' un giorno della settimana \n");
				
	}
	return 0;
}