#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Digite o valor de a:");
    scanf("%d", &a);
    printf("Digite o valor de b:");
    scanf("%d", &b);

    while (a <= b) {
        a = a + 1;
        if (a == 5){
            break; // o comando break faz parar toda condicional e/ou repeticição que estiver inserido
        }
        printf("%d\n", a);
    }
    

    system('pause');
    return 0;
}