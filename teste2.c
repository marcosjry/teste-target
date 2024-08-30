#include <stdio.h>
#include <stdlib.h>


int countLetterA(const char* str) {
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }
    return count; // Retorna a quantidade encontrada
}


int main() {

    char input[1000];

    printf("Digite uma string: ");
    fgets(input, sizeof(input), stdin); // Lê a string do usuário

    input[strcspn(input, "\n")] = '\0'; // Troca o \n por \0 pra sinalizar que é o final da string

    int count = countLetterA(input);

    if (count > 0) {
        printf("A letra 'a' existe e ocorre %d vezes na string.\n", count);
    } else {
        printf("A letra 'a' nao ocorre na string.\n");
    }

    return 0;
}