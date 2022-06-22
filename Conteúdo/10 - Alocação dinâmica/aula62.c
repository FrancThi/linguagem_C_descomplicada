#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /*
    essenciamente um malloc é do tipo void:
    void* malloc(unsigned int num);
    */

    int *v = (int*) malloc(200); // cria um array para 50 integers
    //Obs.: lembrando do typecast (int*) obrigando o malloc a reconhecer que é do tipo int
    char *c = (char*) malloc(200); // cria um array para 200 chars
    //Obs.: lembrando do typecast (char*) obrigando o malloc a reconhecer que é do tipo char

    int *v_sizeof = (int*) malloc(50 * sizeof(int));
    char *c_sizeof = (char*) malloc(200 * sizeof(char));

    int *p;
    p = (int*) malloc(5*sizeof(int));
    if (p == NULL) {
        printf("Erro: sem memória!\n");
        exit(1); //termina o programa
    }

    int i;
    for (i=0; i<5; i++){
        printf("Digite p[%d]: ", i);
        scanf("%d", &p[i]);
    }

    for (i=0; i<10; i++){ // ATENÇÃO: assim como no "for" anterior, poderia colocar um tamanho maior que foi alocado pelo malloc, mas não há nenhuma garantia que o programa registraria ou leria corretamente, e com certeza vai capturar/ser substituído por lixo de memória
        printf("Valor de p[%d]: %d\n", i, p[i]);
    }

    free(p); // libera memória alocada pelo malloc

    system('pause');
    return 0;
}