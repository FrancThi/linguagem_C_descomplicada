#include <stdio.h>
#include <stdlib.h>

void soma_mais_um_por_valor(int n){
    n = n + 1;
    printf("Dentro da função: x = %d\n", n);
}

void soma_mais_um_por_referencia(int *n){
    *n = *n + 1;
    printf("Dentro da função: x = %d\n", *n);
} // ATENÇÃO - ao referenciar no parâmetro da função, tem de referenciar em todas as vezes q o parâmetro é invocado, caso contrário ao invés de trabalhar o q está armazenado dentro daquele local na memória, ele trabalhe sobre o endereço na memória

int main(int argc, char const *argv[])
{
    int x = 5;
    printf("Antes do scanf: x = %d\n", x);
    printf("Digite um número: ");
    scanf("%d", &x); // passagem por referência, diferentemente da aula anterior, agora estamos indicando o lugar na memória para fazer a alteração, e não criando uma cópia para usar durante a função e depois o valor parecer como se "estivesse como antes"... Aqui é exatamente o contrário, estou dizendo eu tenho uma variável, quero trabalhar com ela, mas quero q ela seja alterada, então nada de fazer cópias, vai lá na memória e altera lá!! sem dó!!!
    printf("Depois do scanf: x = %d\n\n", x);

/*
    // passagem por VALOR
    void soma_mais_um(int n);
    // passagem por REFERÊNCIA
    void soma_mais_um(int *n);
*/  

    printf("Antes da função: x = %d\n", x);
    soma_mais_um_por_referencia(&x); // ATENÇÃO - ao chamar a função referenciada sempre tem de sempre indicar que é uma passagem por referência, caso contrário ele trabalhará com o endereço da memória e não com o valor desse endereço.
    printf("Depois da função: x = %d\n", x);

    system('pause');
    return 0;
}
