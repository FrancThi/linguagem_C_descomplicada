#include <stdio.h>
#include <stdlib.h>

struct cadastro{
    char nome[50], rua[50], bairro[30], cidade[30], sexo;
    int idade, numero;
};

int main(int argc, char const *argv[])
{
    printf("Tamanho char: %d\n", sizeof(char));
    printf("Tamanho integer: %d\n", sizeof(int));
    printf("Tamanho float: %d\n", sizeof(float));
    printf("Tamanho double: %d\n", sizeof(double));
    printf("Tamanho struct ponto: %d\n\n", sizeof(struct cadastro));

    system('pause');
    return 0;
}