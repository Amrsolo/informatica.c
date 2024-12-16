#include <stdio.h>
int main()
{
    int cont=0,cont1=0,num=0,div=0;

    while(cont<100)
    {
        cont++;
        num++;
        do
        {
            div++;
            if(num%div==0)
            {
                cont1++;
            }

        }while(div!=num);

        if(cont1<=2)
        {
            printf("%d",num);
        }
        
        }
    
    return 0;


}