#include <stdio.h>
#include<stdlib.h>

int main(int argc, char const *argv[])
{

    int x;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    if (x%2 == 0) {
        printf("O valor é par.\n");
    } else {
        printf("O valor é ímpar.\n\n");
    }
    
    // segue a mesma regra da ausência das "{"
    if (x%2 == 0) 
        printf("O valor é par.\n");
    else
        printf("O valor é ímpar.\n\n");

    // além de ser independentes, neste exemplom o if tem "{" e o else não
    if (x%2 == 0) {
        printf("O valor é par.\n");
    } else
        printf("O valor é ímpar.\n\n");

    // além de ser independentes, neste exemplom o if não tem "{", mas o else tem.
    if (x%2 == 0) 
        printf("O valor é par.\n");
    else {
        printf("O valor é ímpar.\n\n");
    }

    system('pause');
    return 0;
}