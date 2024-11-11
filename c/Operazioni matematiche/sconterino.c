#include <stdio.h>

int main()
{
	int a2, b2, c2, d2;
    char a[20], b[20], c[20], d[20];
    float a3, b3, c3, d3, a4, b4, c4, d4,totale;

    //  il primo prodotto
    printf("inserisci il primo prodotto \n");
    scanf(" %s", &a);  
    printf("inserisci la quantità \n");
    scanf("%d", &a2);
    printf("inserisci il prezzo \n");
    scanf("%f", &a3);

    // il secondo prodotto
    printf("inserisci il secondo prodotto \n");
    scanf(" %s", &b);
    printf("inserisci la quantità \n");
    scanf("%d", &b2);
    printf("inserisci il prezzo \n");
    scanf("%f", &b3);

    //  il terzo prodotto
    printf("inserisci il terzo prodotto \n");
    scanf(" %s", &c);
    printf("inserisci la quantità \n");
    scanf("%d", &c2);
    printf("inserisci il prezzo \n");
    scanf("%f", &c3);

    //  il quarto prodotto
    printf("inserisci il quarto prodotto \n");
    scanf(" %s", &d);
    printf("inserisci la quantità \n");
    scanf("%d", &d2);
    printf("inserisci il prezzo \n");
    scanf("%f", &d3);

	
	a4=a2*a3;
	b4=b2*b3;
	c4=c2*c3;
	d4=d2*d3;
	totale=a4+b4+c4+d4;
	
	printf("REPORT VENDITE SETTIMANALI \n");
	printf("------------------------------------------------ \n");
	printf("Prodotto \t \t Quantità \t Prezzo \t Totale \n");
	printf("------------------------------------------------ \n");
	printf("%-20s  %5d  %10.2f \t %10.2f \n",a,a2,a3,a4);
	printf("%-20s  %5d  %10.2f \t %10.2f \n",b,b2,b3,b4);
	printf("%-20s  %5d  %10.2f \t %10.2f \n",c,c2,c3,c4);
	printf("%-20s  %5d  %10.2f \t %10.2f \n",d,d2,d3,d4);
	printf("il totale delle spese %0.2f \n",totale);
	
	
	return 0;
	
}
