#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char array_alvo[20] = "Linguagem C";
    int i, total = 0;
    int tamanho_array_alvo = strlen(array_alvo);
    for (i=0; i<tamanho_array_alvo; i++){
        if (array_alvo[i] == 'a' || array_alvo[i] == 'e' || array_alvo[i] == 'i' || array_alvo[i] == 'o' || array_alvo[i] == 'u' || array_alvo[i] == 'A' || array_alvo[i] == 'E' || array_alvo[i] == 'I' || array_alvo[i] == 'O' || array_alvo[i] == 'U') total++; //inviável tantos "ou"
    }
    printf("Número de vogais = %d\n", total);

    int j;
    char vogais[11] = "aeiouAEIOUI";
    int tamanho_array_vogais = strlen(vogais);
    for (i=0; i<tamanho_array_alvo; i++){
        for (j=0;  j<tamanho_array_vogais; j++){
            if(tamanho_array_alvo == vogais[j]){
                total++;
                break; //lembrando que o break irá interromper esse comando for do "j", para que o programa pare de percorrer por outras vogais quando ele já tiver encontrado uma. Obs.: caso ele não faça isso, por exemplo, quando ele for pra posição 5 e encontrar a vogal 'a', ele no primeira posição do j, ou seja, qdo j=0, vogais[0] = 'a', e o array_alvo[5] = 'a', se ele não tem o "break", mesmo que ele já tenha encontrado, ele continua testando os outros vogais[j], perdendo processamento, energia, etc.
            }
        }
    }
    printf("Número de vogais = %d\n", total);

    system('pause');
    return 0;
}