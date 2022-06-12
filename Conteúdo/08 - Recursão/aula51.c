#include <stdio.h>
#include <stdlib.h>

/* expressão matemática
    0! = 1;
    n! = n*(n-1)!;
*/
// traduzindo para linguagem C
int fatorial(int n){
    if (n==0)
        return 1;
    else {
        return n*fatorial(n-1);} //recursão: usar a própria função dentro dela mesma
}

void esvaziarVaso(int flores){
    if (flores>0){
        printf("Flores atual: %d\n...\nretirando uma flor\n...\n", flores);
        esvaziarVaso(flores - 1);
    }
}

int main(int argc, char const *argv[])
{

    printf("Fatorial de 5 = %d\n\n", fatorial(5));

    esvaziarVaso(5);
    
    system('pause');
    return 0;
}