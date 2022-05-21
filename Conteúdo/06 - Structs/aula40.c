#include <stdio.h>
#include <stdlib.h>

union tipo
{
    short int x;
    unsigned char c[2];
};

int main(int argc, char const *argv[])
{
    union tipo v;
    v.x = 1545;
    printf("x = %d\n", v.x);
    v.c[0] = 'o';
    v.c[1] = 'i';
    printf("%c%c\n\n", v.c[0], v.c[1]);

    // manipulação de bits s/ union
    short int x = 1545; //00000110 00001001
    unsigned char c0, c1;
    c0 = 0x00FF & x; //este comando "zera" a primeira sequência de binários (00000110) ou os 8bits "da frente"
    c1 = x >> 8; //este comando "desloca" 8bits "a direita", ou seja, pega o "00000110". sobreescreve a parte a direita e zera o campo onde estava (ou seja, ficou 00000000 00000110)
    printf("x = %d\nc0 = %d\nc1 = %d\n", x, c0, c1);

    //manipulação de bits c/ union
    v.x = 1545;
    printf("x = %d\nc[0] = %d\nc[1] = %d\n", x, v.c[0], v.c[1]);
    // Repare que aqui ele já fez a manipulação dos bits sem precisar de nenhum comando

    system('pause');
    return 0;
}