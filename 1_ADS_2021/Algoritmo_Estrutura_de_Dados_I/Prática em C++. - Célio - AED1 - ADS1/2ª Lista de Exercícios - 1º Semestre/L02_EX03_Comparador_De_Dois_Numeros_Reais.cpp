/* 3-) Fa�a um algoritmo que leia dois n�meros reais e mostre o maior, o menor, ou se eles s�o iguais; */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float primeiroNumero, segundoNumero;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t COMPARADOR DE DOIS N�MEROS REAIS: \n";

	cout << "\n\t Digite o primeiro n�mero: ";
	cin >> primeiroNumero;
	cout << "\n\t Digite o segundo n�mero: ";
	cin >> segundoNumero;
	if (primeiroNumero > segundoNumero) {
		cout << "\n\t O maior n�mero � o primeiro: " << primeiroNumero;
		cout << "\n\t Logo, o menor n�mero � o segundo: " << segundoNumero;
	} else if (primeiroNumero == segundoNumero) {
		cout << "\n\t Ambos os n�meros s�o iguais, pois: " << primeiroNumero << " = " << segundoNumero;
	} else {
		cout << "\n\t O maior n�mero � o segundo: " << segundoNumero;
		cout << "\n\t Logo, o menor n�mero � o primeiro: " << primeiroNumero;
	}
	getch();
}

 
