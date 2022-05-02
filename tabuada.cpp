#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
    int numero, cont;
    
    printf("Digite um número: ");
    scanf("%i", &numero);

    for (cont = 1; cont <= 10; cont++) {
        printf("%i x %i = %i\n", cont, numero, cont * numero);
    }
}
