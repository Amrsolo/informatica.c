#include <stdio.h>

 
 int main()
 {
 	int a,b,c;
 	
	printf("inserisci il primo numero \n");
 	scanf("%d",&a);
 	printf("inserisci il secondo numero \n");
 	scanf("%d",&b);

    while(a=b)
    {
        a++;
        scanf("%d",&a);
    }
    
    printf("a=%d",a);
    return 0;
 }