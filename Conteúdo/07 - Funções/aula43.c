#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int quadrado(int a){return a*a;} //exemplo de função

int cubo(int); //declaração de protótipo de função. Obs.: obrigatório caso a função esteja descrita despois da main, ou seja, ela é "escrita" lá, e "prototipada" antes da main
 
int main(int argc, char const *argv[])
{
    int x, y;
    printf("Digite x: ");
    scanf("%d",&x);
    // as funções scanf e printf são exemplos de funções e foram registradas na biblioteca stdio.h
    y = quadrado(x);
    printf("x² = %d\n", y);
    
    y = cubo(x);
    printf("x³ = %d\n", y);

    system('pause');
    return 0;
}

int cubo(int a){return a*a*a;} // função declarada depois da main. Obs.: obrigatório invocar um protótipo desta função antes da main