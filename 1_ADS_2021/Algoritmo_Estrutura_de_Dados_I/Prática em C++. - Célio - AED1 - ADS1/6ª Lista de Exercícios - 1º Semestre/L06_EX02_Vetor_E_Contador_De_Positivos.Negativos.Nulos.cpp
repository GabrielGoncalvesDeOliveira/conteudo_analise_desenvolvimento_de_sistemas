/* 2) Fa�a um algoritmo que calcule e mostre a quantidade de elementos positivos, 
negativos e nulos do vetor W de 15 elementos reais. */

#include <iostream>
#include <conio.h>
using namespace std;

#define t 15
float w[t]; 
int i = 0, quantidadePositivos, quantidadeNegativos, quantidadeNulos;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DA QUANTIDADE DE VALORES POSITIVOS, NEGATIVOS E NULOS DO VETOR W: \n";
	
	quantidadePositivos = 0; quantidadeNegativos = 0; quantidadeNulos = 0;
	
	// Leitura dos n�meros digitados pelo usu�rio
	while (i < t) {
		
		cout << "\n\t Digite W["<< i <<"] : ";
		cin >> w[i];
		i++;
	}
	i = 0;
	
	// Processamento desses n�meros
	while (i < t) {
		
		if ( w[i] > 0) {
			quantidadePositivos++;
		}
		else if (w[i] < 0) {
			quantidadeNegativos++;
		
		} else {
			quantidadeNulos++;
		}
		i++;
	}
	i = 0;
	
	// Sa�da / exibi��o dos dados processados.

	cout << "\n\n\t A quantidade de valores positivos do Vetor W �: "
	<< quantidadePositivos;

	cout << "\n\n\t A quantidade de valores negativos do Vetor W �: "
	<< quantidadeNegativos;
	
	cout << "\n\n\t A quantidade de valores nulos do Vetor W �: "
	<< quantidadeNulos;
	
	getch();
	
	/* Daqui para frente usaremos uma estrutura 'enquanto'
	* para a entrada  de dados, um para o processamento
	* e outro para a sa�da de dados (quando necess�rio). */
}
