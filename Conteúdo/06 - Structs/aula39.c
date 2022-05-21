#include <stdio.h>
#include <stdlib.h>

union tipo
{
    short int x; // inteiro de 16bits
    unsigned char c; // caracter 8bits sem sinal
    /* *** ATENÇÃO *** apesar disso, diferentemente do struct que ele guardaria espaço na memória para os 16+8bits, na union ele reserva apenas o de maior valor, neste exemplo 16bits. Isso significa que seu quiser charmar dois dados diferentes no mesmo momento o mesmo retornará alguma coisa "incoveninente"
    Logo, ele será mais útil apenas para coisas que não serão chamadas ao mesmo tempo, e assim economizando memória.
    */
};

int main(int argc, char const *argv[]){
    union tipo u;
    u.x = 5;
    u.c = 'a';
    printf("u.x = %d\nu.c = %c\n\n", u.x, u.c)// 
    
    system('pause');
    return 0;
}