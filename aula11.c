#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
    OPERADOPRES RELACIONAIS

    > maior que
    >= maior ou igual que
    < menor que
    <= menor ou igual que
    == igual a
    != diferenmte de
    */

    int x = 5, y = 3;

    printf("Resultado  = %d\n", x > 4); // verdadeiro, logo resposta "1"
    printf("Resultado  = %d\n\n", x >= y+2); // primeiro resolve a equação e depois faz a relação que neste caso é verdadeira, logo retorna resposta "1"

    printf("Resultado  = %d\n", x < y); // falso, logo respota "0"
    printf("Resultado  = %d\n\n", x <= 6); // verdadeiro, respota "1"

    printf("Resultado  = %d\n", x == 4); // falso, resposta "0"
    printf("Resultado  = %d\n", x-2 != y); // primeiramente resolve a equação mesmo que seja antes do operador relacional, depois que é feita a relação, portanto, falso resposta "0"
    printf("Resultado  = %d\n", x = 4); //ERRADO "=" não é operação relacional, e sim de atribuição, o programa então simplesmente altera o valor para 4 e então imprime na tela

    system('pause')   ;
    return 0;
}