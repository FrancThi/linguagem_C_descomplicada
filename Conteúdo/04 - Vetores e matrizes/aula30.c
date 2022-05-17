#include <stdio.h>
#include <stdlib.h>
#define T 5

int main(int argc, char const *argv[])
{
    int i, lista[T] = {3,18,2,51,45};
    int menor, maior = lista[0];

    for (i=1; i<T; i++){
        if (maior < lista[i])
            maior = lista[i];
    }

    printf("Maior do vetor = %d\n", maior);
    
    menor = lista[0];    
    for (i=1; i<T; i++){
        if (menor > lista[i])
            menor = lista[i];
    }

    printf("Menor do vetor = %d\n", menor);

    int j, mat[T][T] = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15}, {16,17,18,19,20}, {21,22,23,24,25}};

    maior = mat[0][0];
    for (i=1; i<T; i++) for (j=1; j<T; j++) {
        if (maior < mat[i][j])
            maior = mat[i][j];
    }

    
    printf("Maior da matriz = %d\n", maior);

    menor = mat[0][0];
    for (i=1; i<T; i++) for (j=1; j<T; j++) {
        if (menor > mat[i][j])
            menor = mat[i][j];
    }
    printf("Menor da matriz = %d\n", menor);

    system('pause');
    return 0;
}