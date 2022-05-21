#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[20] = "Linguagem C";

    // fazendo a inversão ao imprimir na tela    
    int i;
    for (i=strlen(str)-1; i>=0; i--) printf("%c", str[i]);
    printf("\n\n");

    // fazendo a inversão do array ao transportar para outro array
    char str1[20];
    int j=0;
    for (i=strlen(str)-1; i>=0; i--){
        str1[j] = str[i];
        j++;
    }
    str1[j] = '\0';
    printf("%s\n\n", str1);

    // fazendo a inversão do array, no mesmo array, utilizando apenas um char auxiliar
    char c;
    int tam = strlen(str);
    for (i=0; i<tam/2;  i++){
        c = str[i];
        str[i] = str[tam-1-i]; //jogada genial aqui foi utilizar o "-i" com o tamanho do array, afinal esse comando "for" está crescendo (i++), então como faço pra que eu ao mesmo tempo consiga decrescer? Simples, apenas pego o tamanho e diminuo "i", como ele começa na posição 0, começa pegando o último elemento. Maestral!!!!
        str[tam-1-i] = c;
    }
    printf("%s\n\n", str);

    system('pause');
    return 0;
}