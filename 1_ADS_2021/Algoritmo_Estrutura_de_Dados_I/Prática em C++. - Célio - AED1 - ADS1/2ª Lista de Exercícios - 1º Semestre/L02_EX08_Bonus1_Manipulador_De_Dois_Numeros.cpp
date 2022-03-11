/* 1º Bônus - Faça um algoritmo que leia dois valores inteiros A e B. Se os valores forem iguais
some-os e mostre o resultado; caso contrário, multiplique A por B e mostre o resultado. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int valorA, valorB, resultado;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t MANIPULADOR DE DOIS NÚMEROS: \n";
	
	cout << "\n\t Digite o primeiro valor (A): ";
	cin >> valorA;
	cout << "\n\t Digite o segundo valor (B): ";
	cin >> valorB;
	
	if (valorA == valorB) {
		resultado = valorA + valorB;
		cout << "\n\t Como são valores iguais: ";
		cout << "\n\t A soma entre " << valorA << " e " << valorB << " é " << resultado; 
	} else {
		resultado = valorA * valorB;
		cout << "\n\t Como são valores diferentes: ";
		cout << "\n\t A multiplicação entre " << valorA << " e " << valorB << " é " << resultado;
	}
	
	getch();
}
