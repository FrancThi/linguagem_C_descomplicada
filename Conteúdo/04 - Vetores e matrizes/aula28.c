#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int vet[5], i, j;
    for (i = 0; i < 5; i++){
        vet[i] = 0;
    }
    
    for (i = 0; i < 5; i++){
        printf("%d ", vet[i]);
    }
    
    printf("\n");

    vet[0] = 15;
    vet[1] = 12;
    vet[2] = 9;
    vet[3] = 1;
    vet[4] = 35;

    for (i = 0; i < 5; i++){
        printf("%d ", vet[i]);
    }

    printf("\n");

    //para não precisar atribuir item por item como o elencado acima, podemos incluir todos os valores do array no momento da sua declaração de forma simples:

    int vetor0[5] = {15,12,9,1,35};

    for (i = 0; i < 5; i++){
        printf("%d ", vetor0[i]);
    }

    printf("\n\n");

    // vetor simples
    float vetor1[3] = {1.5, 22.1, 4.56};

    // matriz "automática" (difícil leitura humana e simples para máquina)
    int matriz0[2][3] = {00,01,02,10,11,12};

    // matriz "classificada" (leitura humana simplificada separando por linhas)
    int matriz1[2][3] = {{00,01,02}, {0,11,12}};

    for (i = 0; i < 2; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", matriz0[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    for (i = 0; i < 2; i++) {
            for (j = 0; j < 3; j++) {
                printf("%d ", matriz1[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    // como os valores do array estão sendo definidos no momento da sua declaração, podemos deixar o valor dentro das chaves vazio, a linguagem faz a verificação, e cria o array do tamanho correspondente.
    int vetor2[] = {1,2,3,4,5,6,7,8,9,10};

    // analogamente podemos fazer o mesmo com matriz, só temos de especificar quantas linhas ou quantas colunas queremos dividir. No exemplo abaixo é como se estivéssemos informando a linguagem: "separa essa cadeira de números em duas colunas, a qtde de linhas vc vê aí quantas vai precisar" ;)
    int matriz2[][2] = {1,2,3,4,5,6,7,8,9,10};

    for (j = 0; j < 3; j++) {
        printf("%d ", vetor2[j]);
    }
    printf("\n\n");


    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // NOTA: ao final da aula o professor André Backes recomenda não declarar array e matrix sem tamanho definido. Que inclusive é sempre melhor atribuir uma constante para que o código seja mais fácil de dar manutenção.

    system('pause');
    return 0;
}