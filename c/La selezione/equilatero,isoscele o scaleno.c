#include <stdio.h>

int main()
{
    int lato1,lato2,lato3;

    printf("insersici il primo lato \n");
    scanf("%d",&lato1);
    printf("insersici il secondo lato \n");
    scanf("%d",&lato2);
    printf("insersici il terzo lato \n");
    scanf("%d",&lato3);

    if(lato1==lato2&&lato1!=lato3)
    {
        printf("e' un Triangolo isoscele perche'il primo lato che e' %d e il secondo che e' %d e sono diversi alterzo che e'  %d \n",lato1,lato2,lato3);
    }

    else if(lato1==lato3&&lato1==lato2)
    {
            printf("e' un Triangolo equilatero perce' %d , %d e %d sono uguali \n",lato1,lato2,lato3);
    }
    else if(lato1==lato3&&lato1!=lato2)
    {
        printf("e' un Triangolo isoscele perche' il primo lato che e' %d e il terzo che e' %d e sono diversi secondp che e' %d \n",lato1,lato3,lato2);
    }
    else if(lato2==lato3&&lato1!=lato3)
    {
        printf("e' un Triangolo isoscele perche' il secondo lato che e' %d e il terzo che e' %d e sono diversi al primo che e' %d \n",lato2,lato3,lato1);
    }
    else 
    {
        printf("e' un Triangolo scaleno perche' tutti i lati sono diversi che e' sono %d , %d e %d \n",lato1,lato2,lato3);
    }

    return 0;
}