#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void imprime(int n){
    int i;
    for (i=1; i<=n; i++)
        printf("Linha %d\n", i);
}

int soma(int x, int y){
    return x+y;
}

int maior(int x, int y){
    if (x > y)
        return x;
    else
        return y;
    printf("Fim da função!!!\n"); // ATENÇÃO - após uma função entrar em algum return válido, ela encerra a função, não importando ql código esteja depois disso
}

void imprime_log(float x){
    if(x <= 0)
        return;
    printf("Log = %f\n", log(x)); //mesmo adicionando a função o program está dando erro ao chamar log(x)... terei de rever depois
}

int main(int argc, char const *argv[])
{

    imprime(5);
    int x = soma(4,5);
    printf("\nx = %d\n", x);
    printf("soma = %d\n\n", soma(5,6));

    int y = maior(4,5);
    printf("Maior = %d\n\n", y);

    float f;
    printf("Digite f: ");
    scanf("%f", &f);
    imprime_log(f);

    system('pause');
    return 0;
}