#include <stdio.h>
#include <stdlib.h>

int quadrado(int a){return a*a;} //exemplo de função

int cubo(int); //declaração de protótipo de função. Obs.: obrigatório caso a função esteja descrita despois da main, ou seja, ela é "escrita" lá, e "prototipada" antes da main
 
int raiz(int); //pode ser declarada sem a "variável declarada"

int main(int argc, char const *argv[])
{
    int x;
    scanf("%d",&x);
    // as funções scanf e printf são exemplos de funções e foram registradas na biblioteca stdio.h
    x = quadrado(x);
    printf("%d\n", x);
    
    x = raiz(x);
    printf("%d\n", x);

    x = cubo(x);
    printf("%d\n", x);

    system('pause');
    return 0;
}

int cubo(int a){return a*a*a;} // função declarada depois da main. Obs.: obrigatório invocar um protótipo desta função antes da main

int raiz(int a){return a^(1/2);}