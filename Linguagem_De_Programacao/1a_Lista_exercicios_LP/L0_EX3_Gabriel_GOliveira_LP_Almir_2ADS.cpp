/* Nome: Gabriel Gonçalves de Oliveira - RA: 2111550021 - 2º ADS - 2022

Terceiro exercício (10º da lista):

	Faça um programa que leia uma lista de 40 números inteiros, não repetidos, e
armazene-os em um vetor. A seguir, o programa deve ler uma lista de números
terminada pelo número 0 (que não entrará nos cálculos). Para cada número da lista, 
o programa deve verificar se ele está no vetor. Ao final do programa, deve
ser mostrado o número de vezes que cada número do vetor foi encontrado.*/

#include <iomanip>
#include <iostream>
#include <clocale>
using namespace std;

#define totalNumeros 50

int main() {
	setlocale(LC_ALL, "");

	int numeros[totalNumeros], numerosTerminadosCom0[totalNumeros], totalDeNumerosEncontrados = 0, numeroDigitado; 

	cout << "\n ====================================================================== \n";
	// Leitura dos 40 números inteiros
	for (int i = 0; i < totalNumeros; i++) {
		cout << "\n\t Digite o " << i + 1 << " número: ";
		cin >> numeroDigitado;

		if (numeroDigitado != numeros[i-1]) {
			numeros[i] = numeroDigitado;
		
		} else {
			i--;
		}
	}

	// Leitura de 40 números terminados com 0
	for (int i = 0; i < totalNumeros; i++) {
		cout << "\n\t Digite o " << i+1 << " número terminado com 0: ";
		cin >> numeroDigitado;

		if (numeroDigitado % 10 == 0) {
			numerosTerminadosCom0[i] = numeroDigitado;
		
		} else {
			i--;
		}
	}

	// Verificação se os números estão na lista
	for (int i = 0; i < totalNumeros; i++) {
		for (int j = 0; j < totalNumeros; j++) {
			
			if (numerosTerminadosCom0[i] == numeros[j]) {
				totalDeNumerosEncontrados++;
			}
		}
	}
	// Impressão do total de números encontrados
	cout << "\n\t O total de vezes que um número do vetor foi encontrado foi de: " << totalDeNumerosEncontrados;
	cout << "\n\n ====================================================================== \n";
	getc;
}