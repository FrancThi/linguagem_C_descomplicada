#include <stdio.h>
#include <stdlib.h>

/*
int fatorial(int n){
    int i, f = 1;
    for(i=1; i<=n; i++)
        f = f*i;
    return f;
}
*/

int menu(){
    int i;
    do
    {
        printf("Escolha uma opção:\n(1) Opção 1\n(2) Opção 2\n(3) Opção 3\n");
        scanf("%d", &i);
    } while ((i<1)||(i>3));
    return i;
}

int main(int argc, char const *argv[])
{
/*  
    int x, y;
    printf("Digite x: ");
    scanf("%d", &x);
    y = fatorial(x);
    printf("Fatorial de x = %d\n", y);

    y = fatorial(7);
    printf("7! = %d\n", y);
    printf("5! = %d\n", fatorial(5));
*/
    
    int op = menu();
    printf("Você escolheu a opção %d\n", op);

    system('pause');
    return 0;
}