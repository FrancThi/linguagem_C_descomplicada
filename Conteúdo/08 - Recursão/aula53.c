#include <stdio.h>
#include <stdlib.h>

int fatorial(int n){
    if (n==0) // critério de parada, sem esse critério de parada a função entrará em loop infinito, até dar um "estouro de pilha"(qdo a pilha fica tão grande q não cabe na memória).
        return 1; 
    else {
        return n*fatorial(n-1);} //parâmetro da chamada recursiva - aqui tbm, se ao invés de charmar (n-1), chamsse (n), por exemplo, a recursão entraria em loop infinito, até um "estouro de pilha".
}

int fibo(int n){
    if (n == 0 || n == 1)
        return n;
    else
        return fibo(n-1)+fibo(n-2); /desperdício de memória, pois acarreta em diversos cálculos repetídos, usar fibonacci numa recursiva é considerado uma falha no código.
}

int main(int argc, char const *argv[])
{
    
    
    system('pause');
    return 0;
}