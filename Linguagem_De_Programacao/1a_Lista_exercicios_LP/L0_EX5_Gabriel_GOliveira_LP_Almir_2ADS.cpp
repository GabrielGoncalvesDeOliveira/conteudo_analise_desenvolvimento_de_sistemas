/* Nome: Gabriel Gonçalves de Oliveira - RA: 2111550021 - 2º ADS - 2022

Quinto exercício (15º da lista):

	Leia m e n e calcule a soma de todos os números ímpares entre n e m*/

#include <iomanip>
#include <iostream>
#include <clocale>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	int numeroN, numeroM, somaDosImpares = 0;

	cout << "\n ====================================================================== \n";
	cout << "\n\t Por gentileza, digite o primeiro número: ";
	cin >> numeroN;

	cout << "\n\t Por gentileza, digite o segundo número: ";
	cin >> numeroM;

	while (numeroN < numeroM) {
		if (numeroN % 2 != 0) {
			somaDosImpares += numeroN;
		}
		numeroN++;
	}

	cout << "\n\t A soma de todos os números ímpares entre N e M (o primeiro e o segundo número) é de: " << somaDosImpares;
	cout << "\n\n ====================================================================== \n";
	getc;
}