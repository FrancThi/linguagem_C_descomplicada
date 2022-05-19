#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char palavra0[20], palavra1[20];
    printf("Digite uma palavra: ");
    scanf("%s", palavra0); //termina a leitura no momento q o usuário teclar "espaço" ou "entrar", se o usuário teclar "espaço" e continuar teclando, a linguagem ignora o que tiver a partir do "espaço"
    //gets(palavra); // termina a leitura apenas qdo o usuário teclar "entrar"
    printf("Palavra lida: %s\n", palavra0);

    printf("Digite uma frase: ");
    gets(palavra1); //muitas pessoas não indicar trabalhar com o comando "gets()" por conter falhas de seguraça entre outros.

    char nome0[20] = {'J', 'o', 'ã', 'o', '\0'}; // atentar para o "\0" no final, ele que indica q é o último elemento do array
    printf("\nnome: %s\n", nome0);
    //Forma especial

    char nome1[20] = "João";
    printf("nome: %s\n", nome1);
    
    system('pause');
    
    return 0;
}