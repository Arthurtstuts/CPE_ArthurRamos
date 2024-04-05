/* 4. Entre com valores inteiros de 0s e 1s representando um número binário e calcule seu valor decimal correspondente.
(Dica: use o operador módulo e divisão para selecionar os dígitos do número "binário", um de cada vez, da direita para a esquerda.
Assim como no sistema de número decimal, em que o dígito mais à direita tem o valor posicional 1 e o próximo dígito à esquerda tem o
valor posicional 10, depois 100, depois 1000 etc. no sistema de números binários, o mais à direita dígito tem um valor posicional 1, o próximo dígito à
esquerda tem o valor posicional 2, depois 4, depois 8, etc. Assim, o número decimal 234 pode ser interpretado como . O equivalente decimal do binário 1101 é .) */

#include <iostream>
using namespace std;

int main() {
    int binario, decimal = 0, posicao = 1; // igualar 'decimal' e 'posicao' na declaração estabelece o valor inicial delas como 0 e 1, que será importante na conversão

    cout << "Numero binario (0 e 1s): ";
    cin >> binario;

   while (binario > 0) { // loop que vai executar essa condição repetinamente para cada dígito do número binário até que não hajam mais dígitos
        int digito = binario % 10; // igual ao exercicio 3, utilizar o operador '%' para dividir por 10 extrai o útimo dígito de um número e armazena esse valor
        decimal += digito * posicao; // multiplica o valor armazenado na linha anterior pelo valor da sua posição e soma ao valor de decimal
        binario /= 10; // isso remove o último dígito do numero binario, que foi calculado nessa interação
        posicao *= 2; // atuliza o valor da posição multiplicando ele por 2, como o ultimo digito binario foi removido, ele irá multiplicar pelo novo valor na próxima iteração do loop 'while'
    } // agora o processo se repete para cada dígito, com os valores de 'decimal' e 'posição' sendo atualizados até que não hajam mais dígitos do númeoro binário

    cout << "Numero decimal: " << decimal << endl;

    return 0;
}
