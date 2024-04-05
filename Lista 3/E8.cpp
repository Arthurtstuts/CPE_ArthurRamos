/* 8. Codifique um programa que faça a leitura de dois número reais. 
A seguir o programa lê um caractere, que deve ser +, -, * ou /, e realiza a operação indicada pelo caractere sobre os valores lidos.
Seu programa deve usar o comando switch. O programa deve imprimir o resultado da operação realizada sobre eles,
como mostra o exemplo a seguir (exibindo exatamente duas casas decimais): Resultado: 4.50 + 5.00 = 9.50 */

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	double n1, n2, r;
	char operador;
	
	cout << "Operacao: 1o numero . Operador . 2o numero" << endl;
	cout << endl;
	
	cout << "Primeiro numero: " << endl;
	cin >> n1;
	cout << "Segundo numero: " << endl;
	cin >> n2;
	
	cout << "Operador (+, -, *, /): " << endl;
	cin >> operador;
	
	switch (operador){
	
		case '+':
		r = n1 + n2;
		break;
	
		case '-':
		r = n1 - n2;
		break;
		
		case '*':
		r = n1 * n2;
		break;
		
		case '/':
			if(n2 == 0) {
			cout << "Nao pode dividir por 0." << endl;
			return 1;
		}	else {
			r = n1 / n2;
		}
		break;
		
		default:
			cout << "Operador invalido" << endl;
			return 1;
			
	}

	cout << fixed << setprecision(2) << n1 << " " << operador << " " << n2 << " = " << r << endl;

	return 0;
}

