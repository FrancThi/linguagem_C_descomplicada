#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
    A grande "sacada" na alocação dinâmica de memória é a questão de não montar um vetor, já definir seu tamanho e com isso demandar pouco ou insuficiente para o uso.
    Fazemos então o contrário, criamos um vetor de ponteiros, dizemos pro programa: aloque 5 posições na memória para mim, e ele armazenará essas posições na memória (não necessariamente na mesma sequência). Ou seja, cada pouco que vou trabalhando eu posso ir alocando na memória e armazenar o ponteiro para a informação (já q um ponteiro ocupa pouco espaço na memória é mais efetivo desta forma)

    Para isso usaremosalgumas funções:

    malloc
    calloc
    realloc
    free

    sizeof

    que veremos nas próximas aulas
    */

    system('pause');
    return 0;
}