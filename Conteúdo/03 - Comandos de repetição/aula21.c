#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int i, j;
    for (i=1; i<5; i++) {
        for (j =1; j < 5; j++) {
            if (i == j) {
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
    
    printf("\n");
    // fiz esses comandos abaixo pra mostrar que na verdade esses dois for aninhados estão percorrendo uma matriz quadrada de tamanho 4 (menor que 5)
    for (i=1; i<5; i++) {
        for (j =1; j < 5; j++) {
            printf("%d %d  ", i, j);
            }
        printf("\n");
    }

    printf("\n");
    // repetindo o mesmo primeiro código de colocar 1 na diagonal principal e 0 nos demais números da matriz, mas agora utilizando um aninhamento de while ao invés de for no primeiro exemplo.
    i = 1;
    while (i < 5){
        j = 1;
        while ( j < 5 ) {
            if (i == j){
                printf("1 ");
            } else {
                printf("0 ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    printf("\n");
    // repetindo o primeiro e terceiro código, mas agora aninhando um for dentro de um while.
    i=1;
    while ((i<5)) {
        for (j=1; j<5; j++){
            if (i == j){
                printf("1 ");
            } else {
                printf("0 ");
            }            
        }
        printf("\n");
        i++;
    }
    

    system('pause');
    return 0;
}