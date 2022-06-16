#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *ponteiro = NULL; //
    
    int x = 10; // variável
    int *p; // ponteiro
    p = &x; // ponteiro p aponta para variável x

    printf("x = %d\n", x); // valor de x
    printf("&x = %d\n", &x); // local na memória da variável x
    printf("p = %d\n", p); // ponteiro de p (q está apontando para variável x)
    printf("*p = %d\n", *p); // valor do conteúdo onde o ponteiro está apontando, no caso, x
    printf("&p = %d\n\n", &p); // local na memória onde está armazenado a informação de onde o ponteiro p está apontando

    x = 20; // alterei o valor na variável x
    printf("x = %d\n", x); // valor de x
    printf("&x = %d\n", &x); // local na memória da variável x
    printf("p = %d\n", p); // ponteiro de p (q está apontando para variável x)
    printf("*p = %d\n", *p); // valor do conteúdo onde o ponteiro está apontando, no caso, x
    printf("&p = %d\n\n", &p); // local na memória onde está armazenado a informação de onde o ponteiro p está apontando

    *p = 30; // alterei o valor da variável x através do ponteiro p
    printf("x = %d\n", x); // valor de x
    printf("&x = %d\n", &x); // local na memória da variável x
    printf("p = %d\n", p); // ponteiro de p (q está apontando para variável x)
    printf("*p = %d\n", *p); // valor do conteúdo onde o ponteiro está apontando, no caso, x
    printf("&p = %d\n\n", &p); // local na memória onde está armazenado a informação de onde o ponteiro p está apontando

    p = 40; // alterei o p para uma variável e atribuí o valor de 40
    printf("x = %d\n", x); // valor de x
    printf("&x = %d\n", &x); // local na memória da variável x
    printf("p = %d\n", p); // variável p ( ATENÇÃO: não é mais um ponteiro! )
    //printf("*p = %d\n", *p); ERRO pois p não é mais um ponteiro
    printf("&p = %d\n", &p); // local na memória onde está armazenado a variável p apontando

    system('pause');
    return 0;
}