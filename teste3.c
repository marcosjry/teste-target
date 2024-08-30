#include <stdio.h>
#include <stdlib.h>


int main() {

    //Nesse caso soma será 65 porque inicia o k como 0.
    for( int indice = 12, soma = 0, k = 1; k < indice; k++, soma += k) {
        printf("Soma = %d\n", soma);
    }

    //Nesse caso soma será 66 porque considera a inicialização de k = 1
    /*
    for( int indice = 12, soma = 0, k = 1; k < indice; k++) {
        soma = soma + k;
        printf("Soma = %d\n", soma);
    }
    */
   
    return 0;
}



