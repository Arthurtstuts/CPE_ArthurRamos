/* 4. Entre com valores inteiros de 0s e 1s representando um n�mero bin�rio e calcule seu valor decimal correspondente.
(Dica: use o operador m�dulo e divis�o para selecionar os d�gitos do n�mero "bin�rio", um de cada vez, da direita para a esquerda.
Assim como no sistema de n�mero decimal, em que o d�gito mais � direita tem o valor posicional 1 e o pr�ximo d�gito � esquerda tem o
valor posicional 10, depois 100, depois 1000 etc. no sistema de n�meros bin�rios, o mais � direita d�gito tem um valor posicional 1, o pr�ximo d�gito �
esquerda tem o valor posicional 2, depois 4, depois 8, etc. Assim, o n�mero decimal 234 pode ser interpretado como . O equivalente decimal do bin�rio 1101 � .) */

#include <iostream>
using namespace std;

int main() {
    int binario, decimal = 0, posicao = 1; // igualar 'decimal' e 'posicao' na declara��o estabelece o valor inicial delas como 0 e 1, que ser� importante na convers�o

    cout << "Numero binario (0 e 1s): ";
    cin >> binario;

   while (binario > 0) { // loop que vai executar essa condi��o repetinamente para cada d�gito do n�mero bin�rio at� que n�o hajam mais d�gitos
        int digito = binario % 10; // igual ao exercicio 3, utilizar o operador '%' para dividir por 10 extrai o �timo d�gito de um n�mero e armazena esse valor
        decimal += digito * posicao; // multiplica o valor armazenado na linha anterior pelo valor da sua posi��o e soma ao valor de decimal
        binario /= 10; // isso remove o �ltimo d�gito do numero binario, que foi calculado nessa intera��o
        posicao *= 2; // atuliza o valor da posi��o multiplicando ele por 2, como o ultimo digito binario foi removido, ele ir� multiplicar pelo novo valor na pr�xima itera��o do loop 'while'
    } // agora o processo se repete para cada d�gito, com os valores de 'decimal' e 'posi��o' sendo atualizados at� que n�o hajam mais d�gitos do n�meoro bin�rio

    cout << "Numero decimal: " << decimal << endl;

    return 0;
}
