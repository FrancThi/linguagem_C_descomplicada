#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x = 10, y = 10;
    
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    x++;
    ++y;

    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    --x;
    y--;

    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    y = x++; // PÓS-INCREMENTO, aqui o q primeiro acontece é y receber o valor de x e após isso é q o valor de x recebe seu incremento, por isso é chamado de pós-incremento;

    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    y = x--; // PÓS-INCREMENTO, aqui vale a mesma coisa q no exemplo anterior, só que para a subtração. Primeiro y recebe o valor de x e depois disso é q o x recebe realiza a operação de diminuir 1

    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    y = ++x; //PRÉ-INCREMENTO, aqui primeiro é feito o incremento e depois disso é q y recebe o valor de x (já incrementado)

    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    y = --x; //PRÉ-INCREMENTO, o mesmo que o exemplo acima. Primeiro é feito o drecréscimo em x e depois disso esse valor é atribuido à y;

    printf("x = %d\n", x);
    printf("y = %d\n\n", y);

    system('pause');
    return 0;
}