#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str1[20] = "Hello World";
    char str2[20];
    
    //str1 = str2; ERRADO

    int i;

    for (i=0 ; str1[i] != '\0' ; i++) str2[i] = str1[i]; // passando índice por índice
    str2[i] = '\0'; // adicionando a instrução de fim do array

    printf("%s\n", str1);
    printf("%s\n\n", str2);

    /*
    *** Comandos iniciais e mais utilizados da biblioteca <strin.h> ***
    strlen() - retorna o tamanho da string;
    strcpy() - Copia uma string;
    strcat() - concatenma duas strings;
    strcmp() - compara duas strings.
    */

    char palavra[20] = "Linguagem C";
    int tamanho = strlen(palavra);

    printf("Tamanho = %d\n", tamanho);

    char novapalavra[30];
    strcpy(novapalavra, palavra); // novapalavra "recebe" palavra
    printf("%s\n\n", novapalavra);

    char palavra1[30] = "Bom ";
    char palavra2[20] = "dia";
    strcat(palavra1, palavra2); // palavra1 adiciona palavra2, ou seja, não é "substitido"
    // ATENÇÃO a palavra1 deve ter espaço reservado suficiente para caber a concatenação, ou gerará ERRO.

    printf("%s\n", palavra1);
    printf("%s\n\n", palavra2);

    char palavra3[20] = "Linguagem C";
    char palavra4[30] = "LINGUAGEM C";

    if (strcmp(palavra3, palavra4) == 0) // retorna 0 para verdade e 1 para falso
        printf("Strings iguais\n");
    else printf("Strings diferentes\n");

    system('pasuse');
    return 0;
}