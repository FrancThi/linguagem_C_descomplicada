#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char ch;
    printf("Digite um símbolo de pontuação: ");
    scanf("%c", &ch);
    switch (ch) //atentar que pode ser apenas integer ou char
    {
        case '.': printf("Ponto.\n\n"); break;
        case ',': printf("Vírgula.\n\n"); break;
        case ':': printf("Dois pontos.\n\n"); break;
        case ';': printf("Ponto e vírgula.\n\n"); break;
        default: printf("Não é pontuação.\n\n");
    }

    switch (ch) 
    { // repare que se não acrescentar o "break;" no final de cada "case" o sistema vai entender que a partir daquela linha que foi encontrado o "case" correto deve ser executado.
        case '.': printf("Ponto.\n"); 
        case ',': printf("Vírgula.\n"); 
        case ':': printf("Dois pontos.\n"); 
        case ';': printf("Ponto e vírgula.\n"); 
        default: printf("Não é pontuação.\n");
    }
    
    system('pause');
    return 0;
}