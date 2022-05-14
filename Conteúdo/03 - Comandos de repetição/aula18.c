#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &a, &b);
    c = a;
    while (a < b) {
        a++; //cuidado para sempre ter um modificador de forma q a condição não entre em loop infinito
        printf("%d\n", a);
    }

    while (c < b && c > 0)
    {
        c++;
        printf("%d\n", c);
    }
    
    
    printf("Fim do programa.\n");
    system('pause');
    return 0;
}