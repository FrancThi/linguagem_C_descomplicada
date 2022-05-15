#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int j, k, i = 0;
    inicio:
    if (i < 5){
        printf("Número: %d\n", i);
        i++;
        goto inicio; // com o comando goto dentro de uma condicional, ele tem o efeito de laço e enquanto a condição é verdadeira ele vai sempre voltar para testar novamente
    }

    for (i = 0; i < 5; i++) {
        printf("Número: %d\n", i);
    } // o comando goto foi descontinuado o correto é quase sempre utilizar comandos de repetição como, for, while, do while
    
    // segue um exemplo de bom uso do goto:

    for (i=0;i<5;i++){
        for (j=0;j<5;j++){
            for (k=0;k<5;k++){
                if (i==2 && j ==3 && k==1) {
                    goto fim; // aqui poderia ser usado 3 break no lugar de um goto
                } else {
                    printf("Pos[%d, %d, %d]\n", i, j, k);
                }
            }
        }
    }

    fim:
    printf("Fim do programa.\n");


    system('pause');
    return 0;
}