#include <stdio.h>
#include<stdlib.h>

/*
soma:           +
subtração:      -
multiplicação:  *
divisão:        /
resto:          %
*/

int main(int argc, char const *argv[])
{
    int x1, x2 = 10, x3 = 12;
    char ch1, ch2 = '0', ch3  = 'A';
    float f1, f2 = 5.25, f3 = 10.5;

    /* SOMANDO */

    x1 = x2 + x3;
    ch1 = ch2 + ch3; /* aqui vale a ressalva que ele está pegando o valor do '0' na tabela ASCII e somando com o valor do 'A' na tabela ASCII */
    printf("%d %d %d\n\n", ch1, ch2, ch3);
    f1 = f2 + f3;

    printf("x1 = %d\n", x1);
    printf("ch1 = %c (%d)\n", ch1, ch1);
    printf("f1 = %f\n\n", f1);

    /* DIMINUINDO */

    x1 = x2 - x3;
    ch1 = ch2 - ch3; /* aqui vale a ressalva que ele está pegando o valor do '0' na tabela ASCII e diminuindo com o valor do 'A' na tabela ASCII */
    printf("%d %d %d\n\n", ch1, ch2, ch3);
    f1 = f2 - f3;

    printf("x1 = %d\n", x1);
    printf("ch1 = %c (%d)\n", ch1, ch1);
    printf("f1 = %f\n\n", f1);

    /* MULTIPLICANDO */

    x1 = x2 * x3;
    f1 = 3 * f2;

    printf("x1 = %d\n", x1);
    printf("f1 = %f\n\n", f1);

    /* DIVISÃO */

    x2 = 9;
    x1 = x2 / 2; /* repare que ele ignora o q vêm após o ponto flutuante, pois é um integer */
    f1 = x2 / 2; /* repare que ele recebe num float a divisão de dois números integer, ou seja, ele primeiro faz a conta de dois integers e depois transforma em float, por isso o "erro" do resultado continuar "ignorando" o que vem depois do ponto flutuante*/
    f2 = x2 / 2.0; /* repare que agora sim ele pega um integer e divide por um float, como um dos dois números da operação é um float ele resulta em outro float e por tanto o que vêm depois do ponto flutuante não é "ignorado" */

    printf("x1 = %d\n", x1);
    printf("f1 = %f\n", f1);
    printf("f2 = %f\n\n", f2);

    /* PRIORIDADES */

    f1 = f2 + 10 / 2.0;

    system('pause');
    return 0;
}