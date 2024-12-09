#include <stdio.h>
#define N 100

int main()
{
    int num, i, num_primo;
    
    for(num = 2; num <= N; num++)  // Iniziamo da 2, poiché 1 non è considerato un numero primo
    {
        num_primo = 1;  // Supponiamo che il numero sia primo
        
        for(i = 2; i * i <= num; i++)  // Verifica divisori fino alla radice quadrata di num
        {
            if(num % i == 0)  // Se il numero è divisibile per i, non è primo
            {
                num_primo = 0;  // Non è primo
            }
        }
        
        if(num_primo)  // Se il numero è primo
        {
            printf("%d \n", num);
        }
    }
    
    return 0;
}
