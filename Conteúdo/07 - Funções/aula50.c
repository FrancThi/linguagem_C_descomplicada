#include <stdio.h>
#include <stdlib.h>

struct ponto{
    int x, y;
};
//passagem por valor
void soma_imprime_valor(int n){
    printf("Valor antes = %d\n", n);
    n += 1;
    printf("Valor durante = %d\n", n);
}
// passagem por referência
void soma_imprime_referencia(int *n){
    printf("Valor antes = %d\n", *n);
    *n += 1;
    printf("Valor durante = %d\n", *n);
}
//passando um struct por referência
void atribui (struct ponto *p){
    (*p).x = 10; //ATENÇÃO - o uso do parênteses é obrigatório, caso contrário o programa entende q a referência é de *(p.x), ou seja, x de p e não o struct p de x
    (*p).y = 20;
}
//passando um struct por referência "seta"
void atribui_com_seta (struct ponto *p){
    p->x = 10; // observer que: (*p).x == p->x .São exatamente o mesmo comando!
    p->x = 20; 
}


int main(int argc, char const *argv[])
{
    
    struct ponto p1 = {10,20};
    printf("Chamada por valor:\n");
    soma_imprime_valor(p1.x);
    printf("Valor depois = %d\n\n", p1.x);
    soma_imprime_valor(p1.y);
    printf("Valor depois = %d\n\n", p1.y);
    printf("Chamada por referência:\n");
    soma_imprime_referencia(&p1.x);
    printf("Valor depois = %d\n\n", p1.x);
    soma_imprime_referencia(&p1.y);
    printf("Valor depois = %d\n\n", p1.y);

    struct ponto p2;
    atribui(&p2); // recebendo um struct por referência
    printf("x = %d\n", p1.x);
    printf("x = %d\n\n", p1.y);

    struct ponto p3;
    atribui_com_seta(&p3); // recebendo um struct por referência
    printf("x = %d\n", p1.x);
    printf("x = %d\n", p1.y);

    system('pause');
    return 0;
}