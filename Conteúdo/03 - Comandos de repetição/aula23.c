#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    
    printf("Digite o valor de a:");
    scanf("%d", &a);
    c = a;
    printf("Digite o valor de b:");
    scanf("%d", &b);

    while (a <= b) {
        a+=1;
        if (a == 5) {continue;} // o continue faz com que as próximas linhas da repetição sejam ignorados e volte para próxima etapa da repetição
        printf("%d\n", a);
    }

    printf("\n");
    while (c <= b) {
        c+=1;
        continue; // o mesmo problema do break, sem implicar uma condicional, ele sempre vai ignorar o que vier depois dentro da repetição, e apenas o q vem antes dele será feito, o q não faz sentido algum...
        printf("%d\n", c);
    }
    printf("%d\n", c); //pra comprovar q o valor de c foi aumentado, vamos imprimir a variável fora da repetição while
    
    system('pause');
    return 0;
}