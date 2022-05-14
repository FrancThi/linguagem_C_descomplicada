#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
    OPERADORES LÓGICOS
    && operador "e"
    || operador "ou"

    ! operador "negação" - diferentemente dos outros dois, esse é vai na frente de uma expressão para "nega-la", invertendo o resultado que estiver dentro da expressão que ela estiver antecedendo. Ex.: !(2>5) retornará verdadeiro, pois 2 não é maior que 5, assim dentro da expressão o resultado é falso, e o inverso de falso é verdadeiro.
    */

    int r, x = 5, y = 3;
    r = (x > 2) && (y < x); //segue a lógica da tabela verdade, etc. primeiro é feito o teste de verdade e depois atribuido o valor a variável r, verdadeiro neste caso.
    printf("Resultado = %d\n", r);

    r = (x % 2 == 0) && (y < 0); // o resto da divisão de x por 2 é diferente de zero, logo, falsa.
    printf("Resultado = %d\n\n", r);

    r = (x > 2) || (y > x); // x é maior que 2, logo, verdadeira.
    printf("Resultado = %d\n", r);

    r = (x % 2 == 0) || (y < 0); // y é maior que zero, logo, verdadeira.
    printf("Resultado = %d\n\n", r);

    r = !(x > 2); // verdade q x é maior que 2, e o inverso disso é falso.
    printf("Resultado = %d\n", r);

    r = !((x > 7 ) && (x > y)); // x > 7 é falso e o inverso disso é verdadeiro.
    printf("Resultado = %d\n\n", r);

    system('pause');
    return 0;
}