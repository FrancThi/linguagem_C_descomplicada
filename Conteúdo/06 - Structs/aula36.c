#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pessoa
{
    char nome[50], rua[50];
    int numero, idade;
};

struct ponto
{
    int x, y;
};
struct novo_ponto
{
    int x, y;
};

int main(int argc, char const *argv[])
{
    // Podemos fazer atribuição individual, como se estivesse "preescrevendo" os valores das variáveis atuais
    struct pessoa p;
    strcpy(p.nome, "Viviany");
    strcpy(p.rua, "dos Bobos");
    p.numero = 0;
    p.idade = 31;
    
    // Ou podemos fazer a atribuição no momento da definição da nova struct:
    struct pessoa q = {"Viviane", "das Espertas", 42, 31};

    // Podemos ainda iniciar com atribuições "incompletas" ***ATERNÇÃO*** ele está "zerando" ou deixando "vazia" as variáveis a partir daquela que não foi declarada
    struct pessoa r = {"Viviani", "das Envergonhadas", 42};

    printf("Nome: %s\nIdade: %d\nRua: %s, %d\n\n", p.nome, p.idade, p.rua, p.numero);
    printf("Nome: %s\nIdade: %d\nRua: %s, %d\n\n", q.nome, q.idade, q.rua, q.numero);
    printf("Nome: %s\nIdade: %d\nRua: %s, %d\n\n", r.nome, r.idade, r.rua, r.numero);

    struct pessoa p2;
    strcpy(p2.nome, p.nome);
    strcpy(p2.rua, p.rua);
    p2.idade = p.idade;
    p2.numero = p.numero;
    printf("Nome: %s\nIdade: %d\nRua: %s, %d\n\n", p2.nome, p2.idade, p2.rua, p2.numero);

    struct pessoa q2;
    q2 = q;
    printf("Nome: %s\nIdade: %d\nRua: %s, %d\n\n", q2.nome, q2.idade, q2.rua, q2.numero);
    
    
    struct ponto ponto1, ponto2 = {1, 2};
    struct novo_ponto ponto3 = {3, 4};
    ponto1 = ponto2;
    printf("%d %d\n\n", ponto1.x, ponto1.y);
    // ponto1 = ponto3; // mesmo q internamente a estrutura seja a mesma, como são dois struct "distintos", a linguagem não permite a atribuição
    
    system('pause');
    return 0;
}