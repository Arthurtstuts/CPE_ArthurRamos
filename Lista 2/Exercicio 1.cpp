/*
1 - Fa�a as seguintes declara��es na linguagem c++ e imprima os valores de x, y e z.
x=7+3*6/2-1
y=2 mod 2+2*2/2
z=(3*9*(3+(9*3/(3))))
mod corresponde ao operador �m�dulo�.
*/

#include<iostream>
using namespace std;

int main(){
	float x,y,z;
	//calcular x=7+3*6/2-1
	x = 7+3*6/2-1;
	cout << "x = 7+3*6/2-1" << endl << "x = " << x << endl;
	
	//calcular y=2 mod 2+2*2/2
	y = 2 % 2+2*2/2; // % � o operador 'm�dulo' (resto da divis�o)
	cout << "y = 2 % 2+2*2/2" << endl << "y = " << y << endl;
	
	//calcular z=(3*9*(3+(9*3/(3))))
	z = (3*9*(3+(9*3/(3))));
	cout << "z = (3*9*(3+(9*3/(3))))" << endl << "z = " << z << endl;

	return 0;
}

