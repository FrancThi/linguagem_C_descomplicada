#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x = 10, y = 10;
    int z = 2;

    x = x + z;
    printf("x = %d\n", x);

    y += z; // Operação SIMPLIFICADA escrever "y += z" é igual a escreever "y = y + z"
    printf("y = %d\n\n", y);
    
    x = x - z;
    printf("x = %d\n", x);

    y -= z; // Operação SIMPLIFICADA escrever "y -= z" é igual a escreever "y = y - z"
    printf("y = %d\n\n", y);
 
    x = x * z;
    printf("x = %d\n", x);

    y *= z; // Operação SIMPLIFICADA escrever "y *= z" é igual a escreever "y = y * z"
    printf("y = %d\n\n", y);

    x = x / z;
    printf("x = %d\n", x);

    y /= z; // Operação SIMPLIFICADA escrever "y /= z" é igual a escreever "y = y / z"
    printf("y = %d\n\n", y);

    z=4;
    x = x % z;
    printf("x = %d\n", x);

    y %= z; // Operação SIMPLIFICADA escrever "y %= z" é igual a escreever "y = y % z"
    printf("y = %d\n", y);


    system('pause');
    return 0;
}