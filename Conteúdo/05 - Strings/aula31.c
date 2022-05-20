#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char palavra0[20], palavra1[20];
    printf("Digite uma palavra: ");
    scanf("%s", palavra0); //termina a leitura no momento q o usuário teclar "espaço" ou "entrar", se o usuário teclar "espaço" e continuar teclando, a linguagem ignora o que tiver a partir do "espaço"
    //gets(palavra); // termina a leitura apenas qdo o usuário teclar "entrar"
    printf("Palavra lida: %s\n", palavra0);

    //printf("Digite uma frase: ");
    //gets(palavra1); //muitas pessoas não indicar trabalhar com o comando "gets()" por conter falhas de seguraça entre outros.

    char nome0[20] = {'J', 'o', 'ã', 'o', '\0'}; // atentar para o "\0" no final, ele que indica q é o último elemento do array
    printf("\nnome: %s\n", nome0);
    //Forma especial

    char nome1[20] = "João";
    printf("nome: %s\n\n", nome1);
    
    char palavra2[20] = "Teste";
    printf("Palavra = %s\n", palavra2);
    palavra2[0] = 'L'; // alterando a primeira posição pelo char 'L'
    printf("Palavra = %s\n\n", palavra2);

    char palavra3[20] = "Oitenta";
    printf("Palavra: %s\n", palavra3);

    palavra3[2] = '\0'; //substituindo a terceira posição pelo "fim do string/vetor/matriz" e a partir disso ele ignora tudo o q vier depois da terceira posição
    printf("Palavra: %s\n", palavra3);
    //printf("Quarta posição: %s\n", palavra3[3]); // como prova, aqui ele retorna erro
    printf("Terceira posição: %s\n", palavra3[2]); // e aqui ele retorna "null"

    system('pause');
    return 0;
}