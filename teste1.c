#include <stdio.h>
#include <stdlib.h>

int verificaNumero(int valor) {
    if (valor < 0) return 0;

    int a = 0, b = 1;
    if (valor == a || valor == b) return 1;

    int fib = a + b;
    while (fib <= valor) {
        if (fib == valor) return 1; // Caso o número fornecido seja encontrado na Sequência de Fibonnaci
        a = b;
        b = fib;
        fib = a + b;
    }
    return 0;
}


int main() {

    int numero;
    printf("Digite o numero que deseja verificar: "); 
    scanf("%d", &numero); // Adicionando referencia ao numero que foi inserido

    if(verificaNumero(numero)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}