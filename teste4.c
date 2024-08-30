/*
a) 1, 3, 5, 7, ___
b) 2, 4, 8, 16, 32, 64, ____
c) 0, 1, 4, 9, 16, 25, 36, ____
d) 4, 16, 36, 64, ____
e) 1, 1, 2, 3, 5, 8, ____
f) 2,10, 12, 16, 17, 18, 19, ____
*/

#include <stdio.h>
#include <stdlib.h>


int main() {
    int a = 0, b = 1, fib = 1;
    
    
    /*
    a) 9
    for(int i = 0, soma = 1; i < 5; i++) {
        printf("%d ", soma);
        soma += 2;
    }

    b) 128
    for(int i = 0, pot = 2; i < 7; i++) {
        printf("%d ", pot);
        pot *= 2;
    }

    c) 49
    for(int i = 0, aux = 0, valor = 1; i < 8; i++) {
        printf("%d " ,valor-1);
        aux++;
        valor += aux;
        aux++;
    }

    d) 128
    for(int i = 0, pot = 2; i < 6; i++) {
        pot *= 2;
        printf("%d ", pot);
    }

    e) 13
    for(int i = 0; i < 7; i++) {
        printf("%d " , b);
        a = b;
        b = fib;
        fib = a + b;
    }
   
    f) não consegui chegar em nenhuma lógica... mas seguindo o padrão que tava na soma dos termos
    -> 8,2,4,1,1,1,1 o próximo seria somar 1? se sim, 20 é o próximo número.
    

    */
    
    

    return 0;
}

