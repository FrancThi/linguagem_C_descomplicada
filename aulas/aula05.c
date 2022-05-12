#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int x = 5, y; /* a primeira variável está recebendo o valor 5 e a segunda não está recebendo valor algum, apenas sendo declarada! +++ Vale atentar que se solicitada, ela pode acabar entregando um valor qualquer, efeito esse conhecido como lixo de memória, pois o ponteiro tentou alocar um espaço e por vezes esse espaço já tinha informação, e como só foi adicionado um ponteiro pra esse espaço o mesmo não tem seu valor alterado, gerando esse lixo de memória */
    printf("%d\n%d\n\n", x, y);

    int i, j, k;
    i = j = k = 10; /* Aqui a "ordem" do programa é: k recebe 10, j recebe o valor de 10, que é 10 e finalmente i recebe o valor de j que é 10. No fundo, temos que todas as variáveis recebem o mesmo valor */
    printf("%d\n%d\n%d\n\n", i, j, k);

    int w = 97; /* declaração de uma integer normal */
    char ch1, ch2 = 'A'; /* declaração de dois char, o segundo atribuindo o caracter 'A' */
    ch1 = w; /* Perceba que não estamos transformando o integer 97 em char(ou string), qdo damos esse comando a linguagem entende que deseja q seja absorvido o char de número 'w' da tabela ASCII, e é esse valor que foi atribuido a variável ch1 */
    printf("ch1 = %c\nch2 = %c\n", ch1, ch2); 
    w = ch2; /* Agora estou fazendo o passo inverso ao recém comentado, ou seja, eu tenho um char e quero saber qual seu número na tabela ASCII, e é esse valor que é atribuido a variável 'w' */
    printf("w = %d\n\n", x);

    int p = 833; /* declarando um integer e atribuindo valor 833 a ele */
    float f1, f2 = 5.25; /* declarando dois floats e atribuindo o valor '5.25' ao segundo */
    f1 = p; /* transformando o valor do integer 'p' num float e atribuindo a variável f1 */
    printf("f1 = %f\n", f1);
    p = f2; /* transformando o valor do float para integer, repare que ele não "arredonda" e apenas ignora o que tem a partir do seu ponto flutuante '.' */
    printf("p = %d\n\n", p);

    float f = 97.3; /* declarando um float e atribuindo o valor 97.3 a ele */
    char ch3, ch4 = 'A'; /* declarando dois char e atribuindo o valor 'A' ao segundo */
    ch3 = f; /* convertendo o float em char, lembrando do mesmo caso anterior, ele não está transformando numa string, mas sim procurando por seu valor na tabela ASCII, ele segue o mesmo critério dito logo acima, onde ele trunca(ignora) o que vêm a partir do seu ponto flutuante, passando nesse exemplo a procurar pelo valor '97' na tabela ASCII */
    printf("ch3 = %c\n", ch3);
    f = ch4; /* convertendo char em float, aqui vale a mesma idéia de truncagem e tabela ASCII descrita nos exemplos acima, atentar sempre para o fato do char ser de 8bits, logo seu valor pode ser de -128~127 para que não gere erro */
    printf("f = %f\n\n", f);
    
    system('pause');
    return 0;
}