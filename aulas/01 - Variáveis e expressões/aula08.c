#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x = 10;
    // x = 2 * x;
    printf("x = %d\n", x);

    // nessa aula o professor explica que em C dá pra comentar de duas formas, a primeira é com as barras duplas "//" que o compilador ignore o que vêm depois das barras duplas NUMA ÚNICA LINHA
    /*
    e a outra forma é a que venho já utilizando em meus comentários.
    a difença é que diferentemente das barras duplas
    o uso de barra asteristco asterisco barra permite que você "comente"
    e com isso ignore mais linhas de um código
    logo, enquanto o "//" é perfeito para comentários rápidos"
    o outro (q estou utilizando agora) é perfeito para comentar um trecho de código que vc queira testar sem ele, ou seja, ignorar um trecho já digitado antes de apagá-lo de vez, ou simplesmente testando sem aquele trecho.
    */

    return 0;
}