/* Nome: Gabriel Gonçalves de Oliveira - RA: 2111550021 - 2º ADS - 2022

Segundo exercício (7º da lista):

	Elabore um algoritmo que verifique e mostre os números entre 1000 e 2000
(inclusive) que, quando divididos por 11, produzam resto igual a 5.*/

#include <iomanip>
#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	int limiteInferior = 1000;
	int limiteSuperior = 2000;

	cout << "\n ====================================================================== \n";
	while (limiteInferior <= limiteSuperior) {

		if (limiteInferior % 11 == 5) {
			cout << "\n O número " << limiteInferior << " quando dividido por 11, possui resto igual a 5.";
		}
		limiteInferior++;
	}
	cout << "\n\n ====================================================================== \n";
	getc;
}