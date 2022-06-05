#include <stdio.h>
#include <stdlib.h>

float raiz(float r);
int soma(int x, int y);

int main(int argc, char const *argv[])
{
    /*
    //int y;
    float raiz(float r);
    int soma (int x, int y);
    //int soma (int x, y); ERRADO, tem de ser parametrizado ambas as variáveis (a não ser que ela já havia sido previamente informada)
    float exponencial(float a, int b); // repare que posso atribuir diferentes parâmetros para diferentes variáveis.
    */

    float k, w = 5.4;
    k = raiz(w);
    k = raiz(5.4);
    //k = raiz(); ERRO
    //k = raiz(w, 5.4); ERRO

    int x, y=1, z=2;
    x = soma(y,z);
    x = soma(1,2);
    x = soma(y,2);

    system('pause');
    return 0;
}