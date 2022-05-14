#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x, y = -1;
    printf("Digite um valor inteiro: ");
    scanf("%d", &x);

    if (x > 0) {
        printf("O valor é positivo.\n");
    }
    
    if ((x % 2 == 0) || (x < 0)){
        printf("O valor é par ou negativo.\n");
    }

    if ((x % 2 == 0) || (x < 0))
        printf("O valor é par ou negativo.\n"); // quando o comando "if" tiver um único comando para ser executado a partir do teste realizado, o mesmo pode ser feito sem chaves

    if (x > 0) {
        y = x % 3;
        printf("O resdo de %d/3 é: %d\n", x, y);
    }

    if (x > 0) 
        y = x % 3; // ATENÇÃO - como o não foi abertas chaves "{" depois da condição no if, o mesmo executará ou não apenas o próximo comando, mesmo q identado como se fosse na mesma operação ele, neste exemplo aqui, ele imprimirá a frase abaixo mesmo que o x seja menor que 0;
        printf("O resto de %d/3 é: %d\n", x, y);
    
    

    printf("Fim do programa\n");
    system('pause');
    return 0;
}