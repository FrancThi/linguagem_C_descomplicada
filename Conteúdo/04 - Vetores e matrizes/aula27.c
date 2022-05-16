#include <stdio.h>
#include <stdlib.h>
#define T 9

int main(int argc, char const *argv[])
{
    int cub[T][T][T];

    int i, j, k;
    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            for (k = 0; k < T; k++) {
                cub[i][j][k] = ((T+(i*T)+(j*T)-T)-k*k);
            }
        }
    }

    for (i = 0; i < T; i++) {
        for (j = 0; j < T; j++) {
            for (k = 0; k < T; k++) {
                printf("%d ", cub[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    system('pause');
    return 0;
}