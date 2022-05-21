#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("Hello world!\n");
    
    //gerando o nome das linhas pra colocar no .gitignore ;)
    short int i;
    for (i=1; i<=200; i++) printf("aula%d\n", i);

    system('pause');
    return 0;
}