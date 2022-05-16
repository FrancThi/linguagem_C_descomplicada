#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int mat[3][2]; // uma matriz de 3 linhas e duas colunas
    mat[0][0] = 5; //primeira linha, primeira linha
    mat[0][1] = 23; //primeira linha, segunda coluna
    mat[2][1] = 5;  //última linha e última coluna
    
    // segue as mesmas observações de vetores - verificar material da aula 25 (linhas 30, 32 e 35)

    int mat2[3][5];
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite mat[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    system('pause');
    return 0;
}