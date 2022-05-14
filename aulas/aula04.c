#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char letra;
    int nro, i, j;
    float n;
    double d;

    printf("Digite algo para armazenar numa variável do tipo char: \n");
    scanf("%c", &letra); /* %c indica que espera receber uma informação do tipo char e o & marca o ponteiro para variável letra */
    printf("Obrigado por colaborar com o teste.\nO char %c foi arquivado com sucesso na variável.\n\n", letra);

    printf("Digite algo para armazenar numa variável do tipo integer: \n");
    scanf("%d", &nro); /* %d indica que espera receber uma informação do tipo integer e o & marca o ponteiro para variável nro */
    printf("Obrigado por colaborar com o teste.\nO integer %d foi arquivado com sucesso na variável.\n\n", nro);
    
    printf("Digite algo para armazenar numa variável do tipo float: \n");
    scanf("%f", &n); /* %f indica que espera receber uma informação do tipo float e o & marca o ponteiro para variável n */
    printf("Obrigado por colaborar com o teste.\nO float %f foi arquivado com sucesso na variável.\n\n", n);

    printf("Digite algo para armazenar numa variável do tipo double: \n");
    scanf("%lf", &d); /* %lf indica que espera receber uma informação do tipo double e o & marca o ponteiro para variável d */
    printf("Obrigado por colaborar com o teste.\nO double %lf foi arquivado com sucesso na variável.\n\n", d);
 
    printf("Digite dois números inteiros: ");
    scanf("%d%d", &i, &j); /* Reparar a possibilidade de receber e armazenar mais de uma informação de uma única vez */
    printf("Obrigado por colaborar com o teste.\nOs integers %d e %d foram arquivados com sucesso nas variáveis.\n\n", i, j);
    /* Ao testar e após digitar o primeiro número e pressioar enter o programa está retornando a mensagem de erro: Segmentation fault (core dumped) --- Lembrar de voltar, conforme avanço no curso, para verificar e corrigir */
    // Voltei para informar que o erro q estava dando era por conta de não colocar o ponteiro & nas variáveis i e j. Dessa forma o scanf recebia um dado e não sabia onde coloca-lo gerando a mensagem "Segmentation fault  (core dumped)" agora corrigido, mas decidi deixar a msg acima e a correção como lembretes


    system('pause');
    return 0;
}