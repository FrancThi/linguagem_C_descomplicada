#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x, y, z;
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);

    if (x > y) {
        z = x;
    } else {
        z = y;
    }

    printf("Maior ou igual: %d\n\n", z);

    /*
    REPARA NA MÁGICA DO OPERADOR TERNÁRIO (?)
    o "if" acima pode ser substituido pela linha de comando abaixo.
    a leitura do comando é:
    z vai receber o valor de acordo com a condição, assim faz primeiro o teste com o operador lógico, neste caso, se x é maior que y então (?) z receberá o valor x, mas se x não é maior que y então (:) z receberá o valor y
    */

    z = x > y ? x : y;  //não é mágico ter 5 linhas de um if e else substituído de forma tão curta, limpa e simples de entender? ;)
    printf("Maior ou igual: %d\n\n", z);

    // Pra ficar ainda melhor, dá pra ter o "mesmo resultado" sem precisar armazenar numa variável, como estavamos fazendo com a "z" utilizando o operador ternário no comando acima. Veja:
    (x > y) ? printf("x é maior ou igual a y\n\n")
            : printf("y é maior ou igual a x\n\n");
    

    system('pause');
    return 0;
}