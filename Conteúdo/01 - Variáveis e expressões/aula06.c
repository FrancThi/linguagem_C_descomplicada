#include <stdio.h>
#include <stdlib.h>

#define PI 3.141592 /* outra forma de definir uma constante */

int main(int argc, char const *argv[])
{
    int nro = 10;
    printf("%d\n", nro);
    nro = 20;
    printf("%d\n", nro);


    const int num = 10; /* ao declarar uma CONSTANTE é obrigatório a declaração de seu valor para que seja feita a atribuição, pois não dá pra alterar depois*/
    printf("%d\n", num);
    const int numero; /* aqui é o mesmo caso do lixo de memória, pode vir com valor em branco ou com um valor qualquer, pois o q é feito é apenas a alocação do ponteiro */
    /* numero = 10;*/ /* repare o erro, o compilador nem chega a rodar*/
    printf("%d\n", numero);
    /*num = 20;*/ /* repare o erro, o compilador nem chega a rodar*/
    printf("%d\n", num);
    
    float f = PI + 1;
    printf("PI = %f\nf = %f\n", PI, f);

    system('pause');
    return 0;
}