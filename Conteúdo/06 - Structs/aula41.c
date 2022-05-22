#include <stdio.h>
#include <stdlib.h>

enum semana{domingo, segunda, terca, quarta, quinta, sexta, sabado}; // lista de IDENTIFICADORES, repare que não há 'domingo', ou "domingo", ou seja é de forma alguma um array de strings!!!

enum week{Domingo=1, Segunda /*2*/, Terca/*3*/, Quarta=7, Quinta/*8*/, Sexta/*9*/, Sabado/*10*/};

enum escapes{retrocesso='\b', tabulacao='\t', novalinha='\n'};

int main(int argc, char const *argv[]){
    enum semana s;
    s = quinta; // aqui estou pedindo: em qual posição do meu enum está o identificador, quinta, por favor arquive essa posição na variável s
    printf("Valor = %d\n\n", s);

    enum semana s1, s2, s3;
    s1 = segunda; // posição 1
    s2 = terca; // posição 2
    s3 = s1 + s2; // 3 = 1 + 2
    printf("Domingo = %d\n", domingo);
    printf("s1 = %d\ns2 = %d\ns3 = %d\n\n", s1, s2, s3);
    if (s3 == quarta) printf("s3 igual a quarta\n\n");
    
    printf("Domingo = %d\n", Domingo);
    printf("Segunda = %d\n", Segunda);
    printf("Terca = %d\n", Terca);
    printf("Quarta = %d\n", Quarta);
    printf("Quinta = %d\n", Quinta);
    printf("Sexta = %d\n", Sexta);
    printf("Sabado = %d\n", Sabado);

    enum escapes e = novalinha;
    printf("Teste%cde%cescrita\n", e, e);// substituindo o %c por novalinha("\n")
    e = tabulacao; // sobrescrevendo novalinha por tabulação na variável e
    printf("Teste%cde%cescrita\n", e, e);// substituindo o %c por tabulacao("\t")(recentemente trocada)

    return 0;
}