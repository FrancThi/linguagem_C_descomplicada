#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char str[20] = "Linguagem C";
    
    int i;
    for (i=strlen(str)-1; i>=0; i--) printf("%c", str[i]);
    printf("\n\n");

    char str1[20];
    int j=0;
    for (i=strlen(str)-1; i>=0; i--){
        str1[j] = str[i];
        j++;
    }
    str1[j] = '\0';
    printf("%s\n\n", str1);

    system('pause');
    return 0;
}