/* 1� B�nus - Fa�a um algoritmo que leia dois valores inteiros A e B. Se os valores forem iguais
some-os e mostre o resultado; caso contr�rio, multiplique A por B e mostre o resultado. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int valorA, valorB, resultado;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t MANIPULADOR DE DOIS N�MEROS: \n";
	
	cout << "\n\t Digite o primeiro valor (A): ";
	cin >> valorA;
	cout << "\n\t Digite o segundo valor (B): ";
	cin >> valorB;
	
	if (valorA == valorB) {
		resultado = valorA + valorB;
		cout << "\n\t Como s�o valores iguais: ";
		cout << "\n\t A soma entre " << valorA << " e " << valorB << " � " << resultado; 
	} else {
		resultado = valorA * valorB;
		cout << "\n\t Como s�o valores diferentes: ";
		cout << "\n\t A multiplica��o entre " << valorA << " e " << valorB << " � " << resultado;
	}
	
	getch();
}
