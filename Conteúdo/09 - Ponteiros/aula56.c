#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *p, *p1, x = 10;
    float y = 20.1;

    p  = &x; // ponteiro p aponta para o valor na variável x
    printf("*p: %d\n", *p);
    p1 = p; // ponteiro p1 aponta para o ponteiro p q aponta para o valor na variável x
    printf("*p1: %d\n", *p1);
    p = &y; // ERRADO! ATENÇÃO: um ponteiro tem de apontar para um mesmo tipo, logo, nesse exemplo um ponteiro integer apontando para uma variável float vai compilar, mas vai apresentar erro, uma variável qqr e provavelmente um lixo de memória.
    printf("*p: %d\n\n", *p);
    
    /*
    ATENÇÃO: as únicas operações que podem ser feitas com ponteiros são de adição e subtração de um número inteiro. Obs.: não pode ser feita operação matemática de dois ponteiros como por exemplo "p = p + p1" do enunciado acima
    */

    int *ponteiro = 0x5DC; // estou definindo que o ponteiro aponta para a posição número 5DC (1500) da memória.
    printf("ponteiro: %d\n", ponteiro);
    ponteiro++; // estou definindo que ele deve apontar para a posição 1500 + o tamanho de 1 integer (4 bytes), nesse caso, 1504.
    printf("ponteiro: %d\n", ponteiro);
    ponteiro += 15; // estou definindo que ele deve apontar para a posição + o tamanho de 1 integer (conforme anteriormente, 1504) + 15 tamanhos de integer (15 x 4bytes = 60), nesse caso, 1564.
    printf("ponteiro: %d\n", ponteiro);
    ponteiro -= 2; // estou definindo que ele deve apontar para a posição + o tamanho de 1 integer + 15 tamanhos de integer (conforme anteriormente, 1564) - 2 tamanhos de integer (2 x 4bytes = 8), nesse caso, 1556.
    printf("ponteiro: %d\n\n", ponteiro);
    

    int *p_integer = 0x5DC; // 4 bytes
    char *p_char = 0x5DC; // 1 byte
    printf("p_integer =  %d\np_char = %d\n\n", p_integer, p_char);
    p_integer++;
    p_char++;
    printf("p_integer =  %d\np_char = %d\n\n", p_integer, p_char);

    /*
    Ponteiros podem ser comparados pelos operadores lógicos: "==" "!=" ">" "<" ">=" "<="
    */
    
    int *ponteiro_i, *ponteiro_j, i, j;
    ponteiro_i = &i;
    ponteiro_j = &j;
    if (ponteiro_i == ponteiro_j)
        printf("Ponteiros iguais\n\n");
    else {
        printf("Ponteiros diferentes\n\n");
        if (ponteiro_i > ponteiro_j)
            printf("Ponteiro_i está depois do ponteiro_j\n\n");
        else
            printf("Ponteiro_i está antes do ponteiro_j\n\n");
    }

    system('pause');
    return 0;
}