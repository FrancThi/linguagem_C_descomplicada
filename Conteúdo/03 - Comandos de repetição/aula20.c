#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c, i;
    
    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &a, &b);
    c = a;

    printf("\n--------------------\n");
    do {
        printf("%d\n", a);
        a++; // atentar para não deixar em loop infinito
    } while (a < b);
    
    printf("\n--------------------\n");
    do {
        printf("%d\n", c);
        c++;
    } while (c < b && c > 0);

    do {
        printf("Escolha uma opção:\n(1) Opção 1\n(2) Opção 2\n(3) Opção 3\n");
        scanf("%d", &i);
    } while (i < 1 || i > 3);
    printf("Você escolheu a opção %d\n", i);

    printf("Fim do programa\n");
    system('pause');
    return 0;
}