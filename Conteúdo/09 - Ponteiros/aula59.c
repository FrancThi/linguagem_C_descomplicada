#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
    Ponteiro de ponteiros (de ponteiros, de ponteiros, ...)
    */
    int x = 10;
    int *p1 = &x;
    int **p2 = &p1;

    printf("p2: %d\n", p2); // endereço em p2 (&p)
    printf("*p2: %d\n", *p2); // conteúdo do endereço (&x)
    printf("**p2: %d\n\n", **p2); // conteúdo do endereço do endereço (x)


    // exemplo de acesso ao conteúdo de ponteiro para ponteiros
    char letra='a';
    char *pChar = &letra;
    char **ppChar = &pChar;
    char ***pppChar = &ppChar;

    printf("*pChar: %c\n", *pChar);
    printf("**ppChar: %c\n", **ppChar);
    printf("***pppChar: %c\n", ***pppChar);

    system('pause');
    return 0;
}