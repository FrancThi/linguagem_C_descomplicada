#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    //nessa aula o professor apenas elucida o fatorial recursivo e explicita a questão da "pausa" do sistema para chamada de uma função. Ou seja, ao invocar uma função fora da main, ele pausa a main e inicia o processamento da função invocada. Se a função é recursiva ela verifica se consegue resolver a si mesma, caso positivo entrega o valor de return e encerra a função auxiliar recursiva, caso contrário, ela pausa a função auxiliar recursiva nesse estágio, e inicia a recursiva dentro dela, e assim o faz até ter todas as chamadas necessárias (e todas as pausas anteriormente necessárias tbm) e vai resolvendo aos poucos. Ou seja, invocar uma função fora da main, e esta sendo recursica, é como gerar uma "PILHA" de espera do processador. Lembrando do conceito de PILHA é q o último a entrar é o primeiro a sair (LIFO - last in first out)
    
    system('pause');
    return 0;
}