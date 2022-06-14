#include <stdio.h>
#include <stdlib.h>

/*
soma(4) = soma(3) + 4
soma(3) = soma(2) + 3
soma(2) = soma(1) + 2
soma(1) = soma(0) + 1
*/
//traduzindo para uma função recursiva:
int soma(int n){
    if (n == 0)
        return 0;
    else
        return n + soma(n-1);
}


int main(int argc, char const *argv[])
{
    printf("%d\n", soma(9999));

    system('pause');
    return 0;
}