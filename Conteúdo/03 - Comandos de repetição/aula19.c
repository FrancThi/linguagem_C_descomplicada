#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c, i, j;

    printf("Digite dois valores inteiros: ");
    scanf("%d%d", &a, &b);

    for (c = a; c <= b; c++) {
        printf("%d\n", c);
    }

    for (c = b; c >= a; c--) {
        printf("%d\n", c);
    }

    for (c = a; c<=b && c > 0; c++){
        printf("%d\n", c);
    }

    for (i = 0, j = 10; i<j; i++, j--) { // leia: para i = 0 e j = 10, enquanto i for menor que j, repita o comando abaixo, em seguida incremete i e decremente j.
        printf ("i = %d e j = %d\n", i, j);
    }

    printf("Fim do programa.");
    system('pause');
    return 0;
}