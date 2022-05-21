#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco
{
    char rua[50];
    int numero;
};
struct pessoa
{
    char nome[50];
    int idade;
    struct endereco ender;    
};

int main(int argc, char const *argv[])
{
    
    struct pessoa p;
    p.idade = 31;
    p.ender.numero = 101;
        


    system('pause');
    return 0;
}