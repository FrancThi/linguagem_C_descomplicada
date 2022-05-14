#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
    OPERADORES LÓGICOS
    && operador "e"
    || operador "ou"
    */

    int r, x = 5, y = 3;
    r = (x > 2) && (y < x); //segue a lógica da tabela de verdade, etc. primeiro é feito o teste de verdade e depois atribuido o valor a variável r, verdadeiro neste caso.
    printf("Resultado = %d\n", r);

    r = (x % 2 == 0) && (y < 0); // o resto da divisão de x por 2 é diferente de zero, logo, falsa.
    printf("Resultado = %d\n\n", r);

    r = (x > 2) || (y > x); // x é maior que 2, logo, verdadeira.
    printf("Resultado = %d\n", r);

    r = (x % 2 == 0) || (y < 0); // y é maior que zero, logo, verdadeira.
    printf("Resultado = %d\n\n", r);

    system('pause');
    return 0;
}