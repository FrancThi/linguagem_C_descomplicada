#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    char nome[50], rua[50];
    int idade, numero;
};

struct ponto2D
{
    int x, y;
};
// struct diferentes podem conter variáveis declaradas com o mesmo nome
struct ponto3D
{
    int x, y, z;
};



int main(int argc, char const *argv[])
{
    // repare que não há problemas ao usar os mesmos "nomes" no strutc e aqui, a não ser a própria confusão que isso causa
    char nome[50], rua[50];
    int idade, numero;

    // Cada campo (ou variável) da struct pode ser acessada usando o operador "." (ponto)
    struct pessoa p;    
    //exemplos de comandos
    p.idade = 31; //atribuição simples
    scanf("%d", &p.numero); //leitura
    gets(p.nome); //leitura
    p.numero = p.numero + p.idade -100; //expressão
    printf("%s %d %d\n\n", p.nome, p.idade, p.numero);

    // SEM struct:
    char nome1[50], nome2[50], nome3[50], nome4[50], nome5[50], nome6[50];
    int idade1, idade2, idade3, idade4, idade5, idade6;
    char rua1[50], rua2[50], rua3[50], rua4[50], rua5[50], rua6[50]; 
    int numero1, numero2, numero3, numero4, numero5, numero6;

    // COM struct:
    struct pessoa p1, p2, p3, p4, p5, p6;
    // repare como é infinitamente mais simples. Pense agora isso como clientes, produtos, artigos, TUDO fica mais fácil de classificar, selecionar, incluir, excluir, alterar, etc. a partir de struct


    struct ponto2D n1;
    struct ponto3D n2;
    n1.x = 10;
    n2.x = 12;

    printf("%d %d\n\n", n1.x, n2.x);
    
    system('pause');
    return 0;
}