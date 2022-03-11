/* 3-) Faça um algoritmo que leia dois números reais e mostre o maior, o menor, ou se eles são iguais; */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float primeiroNumero, segundoNumero;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t COMPARADOR DE DOIS NÚMEROS REAIS: \n";

	cout << "\n\t Digite o primeiro número: ";
	cin >> primeiroNumero;
	cout << "\n\t Digite o segundo número: ";
	cin >> segundoNumero;
	if (primeiroNumero > segundoNumero) {
		cout << "\n\t O maior número é o primeiro: " << primeiroNumero;
		cout << "\n\t Logo, o menor número é o segundo: " << segundoNumero;
	} else if (primeiroNumero == segundoNumero) {
		cout << "\n\t Ambos os números são iguais, pois: " << primeiroNumero << " = " << segundoNumero;
	} else {
		cout << "\n\t O maior número é o segundo: " << segundoNumero;
		cout << "\n\t Logo, o menor número é o primeiro: " << primeiroNumero;
	}
	getch();
}

 
