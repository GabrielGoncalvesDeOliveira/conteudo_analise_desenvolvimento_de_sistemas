#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

#define t 10

int verificarMenor(int numeros[]);

int main() {
	setlocale(LC_ALL,"");

	int numeros[t];

	for (int i = 0; i < t; i++) {
		cout << "\n\t Digite o " << i + 1 << "º número: ";
		cin >> numeros[i];
	}

	cout << "\n\t O menor número digitado foi o: " << verificarMenor(numeros);
	cout << "\n====================================================";
	getc;
}

int verificarMenor(int numeros[]) {
	int menor = numeros[0];

	for (int i = 1; i < t; i++) {
		if (numeros[i] < menor) {
			menor = numeros[i];
		}
	}
	return menor;
}