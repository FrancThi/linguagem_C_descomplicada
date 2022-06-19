#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    void *ponteiro_generico; // ponteiro genérico, aponta para qualquer tipo de dados existentes ou que ainda serão criados

    int *p1, p2 = 10;
    p1 = &p2;
    ponteiro_generico = &p2; // endereço de int
    printf("Endereço em ponteiro_genérico: %p\n", ponteiro_generico);
    ponteiro_generico = &p1; // endereço de int*
    printf("Endereço em ponteiro_genérico: %p\n", ponteiro_generico);
    ponteiro_generico = p1; // endereço de int
    printf("Endereço em ponteiro_genérico: %p\n\n", ponteiro_generico);
    // reparar que o ponteiro_generico gerado como void sempre aponta para um dado, seja ele outro ponteiro ou não


    /*
    CUIDADO ao acessar o conteúdo do ponteiro genérico, pois é preciso "converter" para o tipo que se deseja trabalhar, e fazemos isso através da técnica "type cast"
    */
    // printf("Conteúdo do ponteiro_genérico: %p\n", *ponteiro_generico); ERRO, pois como ponteiro_genérico é do tipo VOID o compilador não sabe qto de memória ele deve ler (por exemplo, se é 1 byte para char, ou 4 bytes para integer, etc.)

    printf("Conteúdo do ponteiro_genérico: %p\n\n", *(int*)ponteiro_generico); // "type cast" é esse (int*), ou seja, estou afirmando a linguagem que ponteiro_generico deve ser tratado como um (int*), depois disso é q é lido o *(na frente de tudo), ou seja, o conteúdo de fato do ponteiro_genérico. Obs.: se tirar o * da frente do typecast ele vai indicar o lugar na memória e não o conteúdo

    /*
    Operações aritiméticas de um ponteiro genérico são sempre realizadas com base em 1 unidade de memória (1 byte) (o mesmo tamanho do char)
    */
    void *ponteiro_void = 0x5DC; // estou definindo que o ponteiro aponta para a posição número 5DC (1500) da memória.
    printf("ponteiro_void: %d\n", ponteiro_void);
    ponteiro_void++; // estou definindo que ele deve apontar para a posição 1500 + o tamanho de 1 byte, nesse caso, 1501.
    printf("ponteiro_void: %d\n", ponteiro_void);
    ponteiro_void += 15; // estou definindo que ele deve apontar para a posição 1500 + o tamanho de 1 byte (conforme anteriormente, 1501) + 15 bytes, nesse caso, 1516.
    printf("ponteiro_void: %d\n", ponteiro_void);
    ponteiro_void -= 2; // estou definindo que ele deve apontar para a posição 1500 + o tamanho de 1 byte + 15 bytes - 2 bytes, nesse caso, 1514.
    printf("ponteiro_void: %d\n\n", ponteiro_void);

    system('pause');
    return 0;
}