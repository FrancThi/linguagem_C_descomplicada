#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char letra = 'i';
    int nro = 10;
    float n = 5.25;
    
    printf("%c \n", letra); /* %c invoca o valor do tipo char */
    printf("%d \n", letra); /* %c invoca o valor do char na tabela ASCII*/
    printf("%d \n", nro); /* %c invoca o valor do tipo integer */
    printf("%f \n", n); /* %c invoca o valor do tipo float */

    printf("Letra %c, inteiro %d \n", letra, nro); /* maneira de invocar mais de uma variável no mesmo printf */

    printf("nro: %d; nro+1: %d \n", nro, nro+1); /* perceba que é possível utilizar de operações matemáticas básicas ao definir a "variável" que deseja invocar, o programa vai primeiro fazer a operação pra depois informar na invocação feita */

    return 0;
}