#include <stdio.h>
#include <stdlib.h>
#define Linha 3
#define Coluna 3

main() {
    int mat1[Linha][Coluna], mat2[Linha][Coluna], mat3[Linha][Coluna], i, j;


    printf("Matriz 1: \n");
    for(i = 0; i < Linha; i++) {
        for(j = 0; j < Coluna; j++) {
            printf("Linha %i Coluna %i: ", i, j);
            scanf("%i", &mat1[i][j]);
        }
    }

    printf("Matriz 2: \n");
    for(i = 0; i < Linha; i++) {
        for(j = 0; j < Coluna; j++) {
            printf("Linha %i Coluna %i: ", i, j);
            scanf("%i", &mat2[i][j]);
        }
    }

    printf("Matriz 3: \n");
    for(i = 0; i < Linha; i++) {
        for(j = 0; j < Coluna; j++) {
            mat3[i][j] = mat1[i][j] - mat2[i][j];
            printf("%i ", mat3[i][j]);
        }
    printf("\n");
    }
}
