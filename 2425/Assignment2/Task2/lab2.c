//Crea un semplice ciclo in C che mostra i primi 10 numeri pari.

#include <stdio.h>

int main(){

    for (int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n",i);
        }


    }
    

    return 0;
}