#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int vet[3] = {1,2,3};
    int *p = vet;
    int i, j;
    for (i=0; i<3; i++)
        printf("vet[%d] = %d\n", i, vet[i]);
    printf("\n");
    for (i=0; i<3; i++)
        printf("p[%d] = %d\n", i, p[i]); // ou seja, um vetor "é um ponteiro"
    printf("\n");
    for (i=0; i<3; i++)
        printf("*(p+%d) = %d\n", i, *(p+i)); 
        /*
        como um vetor é um ponteiro, posso dizer que: *(p+0)=p[0]=vet[0]; *(p+1)=p[1]=vet[1]; *(p+2)=p[2]=vet[2] etc...(se a matriz fosse maior)
        */
    printf("\n");
    for (i=0; i<3; i++)
        printf("&vet[%d] = %d\n", i, &vet[i]); // além de acessar o conteúdo, posso acessar também o endereço da memória...
    printf("\n");
    for (i=0; i<3; i++)
        printf("(vet+%d) = %d\n", i, (vet+i)); // ... usando a mesma "notação" recém aprendida "*(p+i)", só q como estamos falando de vetor que já é um ponteiro, não colocamos o "*" na frente, logo, (vet+i )
    printf("\n");
    for (i=0; i<3; i++)
        printf("(vet+%d) = %d\n", i, *(vet+i)); // se colocarmos o "*" na frente ele volta a mostrar o conteúdo apontado na matriz
    printf("\n");

    int *pvet[2];
    int x = 10, y[2] = {20,30};
    pvet[0] = &x;
    pvet[1] = y;

    for (i=0; i<2; i++)
        printf("pvet[%d] = %p\n", i, pvet[i]); // imprimindo o endereço de memória de &x e depois de &y[0](lembrando que qdo se fala de um vetor o ponteiro/vetor aponto pro primeiro endereço do vetor)
    printf("\n");

    for (i=0; i<2; i++)
        printf("*pvet[%d] = %d\n", i, *pvet[i]); // imprimindo os valores apontados pela matriz de ponteiros, ou seja, o valor de x e o primeiro valor do vetor y, ou seja, 20.
    printf("\n");

    for (i=0; i<2; i++)
        printf("pvet[1][%d] = %d\n", i, pvet[1][i]); // imprimindo os valores apontados na MATRIZ de ponteiros que contém o vetor y, repare q essa "matriz" não possui valor na posição [0][1], apenas nas posições [0][0], [1][0] e [1][1]
    printf("\n");

    system('pause');
    return 0;
}