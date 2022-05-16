#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(int argc, char const *argv[])
{
    int x = 10;
    printf("x = %d\n", x);
    x = 20;
    printf("x = %d\n", x);
    // Professor escreveu essas duas linhas apenas para relembrar que por enquanto, cada variável consegue armazenar um único valor por vez. Cada vez q é atribuido um valor a variável, o valor anterior é substituido pelo novo.

    //com o conhecimento atual, fazer um programa q leia a nota de 5 estudantes e imprima a nota dos que está acima dessa média seria algo assim:
    float n1, n2, n3, n4, n5;
    printf("Digite a nota de 5 estudantes: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);
    float media = (n1+n2+n3+n4+n5)/5.0;
    if (n1 > media) {printf("nota: %f\n", n1);};
    if (n2 > media) {printf("nota: %f\n", n2);};
    if (n3 > media) {printf("nota: %f\n", n3);};
    if (n4 > media) {printf("nota: %f\n", n4);};
    if (n5 > media) {printf("nota: %f\n", n5);};

    // a solução ideal pra esse problema e maiores é a utilização de arrays:

    float notas[100]; //entre colchetes é o tamanho do array (qtas informações ele vai poder armazenar)

/*  ATENÇÃO!!! 
    O tamanho de um array deve ser sempre um valor ou uma expressão inteira e constante.
    se utilizado #define N 100 (antes da main ou função), pode acontecer então:
    float f[N+1];
    char texto[30];
    mas nunca:
    int vetor[x]; (x é uma variável, logo não pode ser)
    int v[4.0]; (apenas números inteiros)
*/
    notas[0] = 81; //primeiro índice
    notas[1] = 55; //segundo índice
    // ...
    notas[99] = 72; // último índice
    // ou seja, os índices, nesse exemplo de 100 alocações, vai de 0 a 99.

    float vetor[100];
    scanf("%d", &notas[5]); // leitura e alocação no sexto índice do array notas
    notas[2] = 10;
    notas[3] = notas[5];
    notas[4] = notas[5] + notas[2];

    //notas = vertor; ERRADO, para fazer um vetor igual ao outro é preciso ser feito elemento por elemento, índice por índice.



    // esse  código abaixo substitui os comandos da linha 7~26
    float notas_[N], media_ = 0.0;
    int i;
    for (i = 0; i < N; i++) {
        printf("Digite a nota do aluno %d: ", i+1);
        scanf("%f", &notas_[i]);
        media_ += notas_[i];
    }
    media_ /= N;
    for (i = 0; i < N; i++) {
        if(notas_[i] > media_) {
            printf("Aluno %d: %f\n", i+1, notas_[i]);
        }
    }

    system('pause');
    return 0;
}