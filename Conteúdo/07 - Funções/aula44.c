#include <stdio.h>
#include <stdlib.h>

/*
float raiz(float r);
int soma(int x, int y);
*/

int main(int argc, char const *argv[])
{
/*
    //int y;
    float raiz(float r);
    int soma (int x, int y);
    //int soma (int x, y); ERRADO, tem de ser parametrizado ambas as variáveis (a não ser que ela já havia sido previamente informada)
    float exponencial(float a, int b); // repare que posso atribuir diferentes parâmetros para diferentes variáveis.
*/

/*
    float k, w = 5.4;
    k = raiz(w);
    k = raiz(5.4);
    //k = raiz(); ERRO
    //k = raiz(w, 5.4); ERRO

    int x, y=1, z=2;
    x = soma(y,z);
    x = soma(1,2);
    x = soma(y,2);
*/
    float leitura(); //função sem parâmetros ignorando tudo o q há dentro dos parênteses no momento da infocação
    int le_arquivo(void); //função sem parâmetros que devolver erro se no momento da invocação constar algum argumento nos parâmetros

    float y;
    y = leitura();
    y = leitura(5); //um parâmetro ignorado
    y = leitura(5, 'x'); //dois parâmetros ignorados

    int x;
    x = le_arquivo();
    // x = le_arquivo(5); ERRO, essa função não pode receber parâmetros

    system('pause');
    return 0;
}