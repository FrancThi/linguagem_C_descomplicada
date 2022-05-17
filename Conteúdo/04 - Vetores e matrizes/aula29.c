#include <stdio.h>
#include <stdlib.h>
#define TAM_LISTA 5
#define TAM_MATRIZ_QUADRADA 3
int main(int argc, char const *argv[])
{
    int i, lista[TAM_LISTA] = {1,2,3,4,5};
    int soma0 = 0;

    for (i=0; i<5; i++) soma0 += lista[i];
    printf("Soma = %d\n\n", soma0);

    int mat[TAM_MATRIZ_QUADRADA][TAM_MATRIZ_QUADRADA] = {{1,2,3},{4,5,6},{7,8,9}};
    int j, soma1 = 0;
    for (i=0; i<3; i++) for (j=0; j<3; j++) soma1 += mat[i][j];
    printf("Soma = %d\n", soma1);

    // essa aula foi básicamente soma de vetores e matrizes

    system('pause');
    return 0;
}