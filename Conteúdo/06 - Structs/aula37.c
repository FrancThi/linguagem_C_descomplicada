#include <stdio.h>
#include <stdlib.h>

struct pessoa
{
    char nome[50], rua[50];
    int numero, idade;
};

int main(int argc, char const *argv[])
{
    struct pessoa p1, p2, p3, p4;
    int i;

    struct pessoa p[4];
    p[0].idade = 31;
    strcpy(p[1].nome, "Ricardo");
    p[2].numero = p[0].numero - 1;

    for (i=0; i<4; i++){
        printf("Digite o nome: ");
        scanf("%s", &p[i].nome);
        printf("Digite a idade: ");
        scanf("%d", &p[i].idade);
        printf("Digite o nome da rua: ");
        scanf("%s", &p[i].rua);
        printf("Digite o número da rua: ");
        scanf("%d", &p[i].numero);
        printf("\n");
    }

    for (i=0; i<4; i++){
        printf("-Posição %d-\nNome: %s\nIdade: %d\nRua: %s, %d\n\n",i, p[i].nome, p[i].idade, p[i].rua, p[i].numero);
    }
    
    system('pause');
    return 0;
}