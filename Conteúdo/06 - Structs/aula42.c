#include <stdio.h>
#include <stdlib.h>

typedef int inteiro; // criado "apelido" de int para inteiro

struct cadastro
{
    char nome[50], rua[50];
    int idade, numero;
};

typedef struct cadastro cad; // criado "apelido" de castro para cad

typedef unsigned int positivos[5]; // tomar cuidado ao usar o typedef, por exemplo, chamar a criação de um vetor de números inteiros positivos com 5 elementos NÃO é algo "inteligente", pra dizer o mínimo...

int main(int argc, char const *argv[])
{
    int x = 10;
    inteiro y = 20;
    y += x;
    printf("Soma: %d\n\n", y);

    struct cadastro c1; // criando uma estrutura de nome c1
    cad c2; //criando uma estrutura de nome c2
    
    positivos v = {10,20,30,40,50};
    int i;

    for (i=0; i<5; i++) printf("v[%d]: %d\n", i, v[i]);

    system('pause');
    return 0;
}