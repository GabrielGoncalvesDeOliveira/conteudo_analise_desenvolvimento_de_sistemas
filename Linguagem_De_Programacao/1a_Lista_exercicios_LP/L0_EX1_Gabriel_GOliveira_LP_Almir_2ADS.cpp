/* Nome: Gabriel Gonçalves de Oliveira - RA: 2111550021 - 2º ADS - 2022

Primeiro exercício (1º da lista):

	Elabore um programa em C/C++ que calcule e imprima o salário de 50 funcionários. 
Sabe-se que para cada funcionário deve ser informado o salário base,
	que ele tem 16% de gratificação e paga 30% de imposto.
Ao final do algoritmo deve ser impresso o valor pago aos 50 funcionários e o
total de imposto que foi descontado destes funcionários. */

#include <iomanip>
#include <iostream>
#include <clocale>
using namespace std;

#define totalFuncionarios 50

int main() {
	setlocale(LC_ALL, "");

	float salarios[totalFuncionarios], gratificacao, imposto; 
	gratificacao = 1.16; // Corresponde ao valor atual + 16%
	imposto = 0.3; // Corresponde a 30%

	cout << "\n\t ===================================================================== \n";
	// Leitura dos salários
	for (int i = 0; i < totalFuncionarios; i++) {

		cout << "\n\t Por gentileza, informe o " << i+1 << "º salário do funcionario: ";
		cin >> salarios[i];
	}

	// Processo de cálculo da gratificação e do imposto sob o salário base
	for (int i = 0; i < totalFuncionarios; i++) {

		salarios[i] = (salarios[i] * gratificacao) - (salarios[i] * imposto);
	}
	cout << "\n ===================================================================== \n";
	// Impressão dos salários
	for (int i = 0; i < totalFuncionarios; i++) {

		cout << "\n\t O novo salário do " << i+1 << "º funcionário, com o cálculo da gratificação e do imposto é: " << salarios[i]; 
	}
	cout << "\n\n ===================================================================== \n";
	getc;
}