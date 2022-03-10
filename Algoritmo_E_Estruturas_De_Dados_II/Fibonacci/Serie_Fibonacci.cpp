#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

int fibonacci(int numero);

int main() {
	setlocale(LC_ALL,"");

	int numero;
	cout << "\n\t ==================================================== \n";
	cout << "\n\t ALGORITMO CALCULADOR DA SÉRIE DE FIBONACCI:" << endl;
	cout << "\n\t Digite um número: ";
	cin >> numero;

	for (int i = 0; i < numero; i++) {
		cout << " - ";
		cout << fibonacci(i);
	}
	cout << "\n\t ==================================================== \n";
	cout << "\n Final da Série de Fibonacci";
	cout << "\n\t ==================================================== \n";
	getc;
}

int fibonacci(int numero) {
	if (numero == 0 || numero == 1) {
		return numero;
	}
	return fibonacci(numero - 1) + fibonacci(numero - 2);
}