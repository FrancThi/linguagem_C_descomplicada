#include <stdio.h>
#include <stdlib.h>

void soma_mais_um(int n){
    n = n + 1;
    printf("Dentro da função: x = %d\n", n);
}


int main(int argc, char const *argv[])
{
    
    int x = 5;
    printf("Antes da função: x = %d\n", x);
    soma_mais_um(x); // ao chamar a função é criado uma cópia do parâmetro x...
    printf("Depois da função: x = %d\n", x); // ...dessa forma ao terminar a função os valores não são refletidos para fora do q é feito dentro da função, já q era apenas uma cópia do(s) mesmo(s)

    system('pause');
    return 0;
}