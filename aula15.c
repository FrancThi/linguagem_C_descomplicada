#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("O número é igual a 0.\n\n");
        } else {
            if (num > 0)
                printf("O número é maior do que 0.\n\n");
            else
                printf("O número é menor do que 0.\n\n");
        }

    if (num >= 0) {
        if (num == 0)
            printf("O número é igual a 0.\n\n");
        else // o else sempre responde ao contrário do último if, logo neste caso agora ele está fazendo que para todo número diferente de 0 ele vai executar o comando abaixo. o que gera um erro.
            printf("O número é menor do que 0.\n\n");
    }

    if (num >= 0) {
        if (num == 0) {
            printf("O número é igual a 0.\n\n");
        }
    } else {// agora por instrução das chaves ele está sendo referenciado ao contrário do primeiro if, arrumando o código acima.
        printf("O número é menor do que 0.\n\n");
    }

    system('pause');
    return 0;
}