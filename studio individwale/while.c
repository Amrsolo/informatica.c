#include <stdio.h>
/* quando l'utente scrive un numero si 
stampa tutti i numeri da quello che ha scritto l'utente
 fino a 7
*/

 
 int main()
 {
 	int a,b,c;
 	
	printf("inserisci il primo numero \n");
 	scanf("%d",&a);


    while(a<7)
    {
        printf("%d \n",a);
        a++;
        
    }
    
    
    return 0;
 }