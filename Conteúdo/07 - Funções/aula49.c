#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 5

void imprime(int *n, int m){
    int i;
    for (i=0; i<m; i++)
        printf("%d \n", n[i]); // se o parâmetro passado por referência é um vetor, então posso invoca-lo durante a função como um vetor sem necessidade de macação ou ponteiro
}

void imprime_matriz(int m[][2], int n){ //no caso de matrizes além do primeiro parâmetro sobre seu "tamanho", todos os outros têm de ser declarados no início da função, pois o programa precisa saber quanto de memória ele precisa deixar espaço alocado antes da próxima "linha"
    int i, j;
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            printf("%d \n", m[i][j]);
}

int main(int argc, char const *argv[])
{
    
/*
    void imprime(int *m, int n);
    void imprime(int m[], int n);
    void imprime(int m[5], int n); // apesar do compilador aceitar esse "5" como parâmetro, ele não significa nada pro programa...
*/

    int v[TAMANHO] = {1,2,3,4,5};
    imprime(v,3); // repare q o vetor é sempre por referência e ao informar um vetor vc está passando a informação do começo do vetor na memória e pegando seu valor, mesmo sem fazer marcações de ponteiro e referência, pois TODO VETOR É PASSADO POR REFERÊNCIA

    printf("\n\n");

    int mat[3][2] = {{1,2},{3,4},{5,6}};
    imprime_matriz(mat, 3);

    return 0;
}