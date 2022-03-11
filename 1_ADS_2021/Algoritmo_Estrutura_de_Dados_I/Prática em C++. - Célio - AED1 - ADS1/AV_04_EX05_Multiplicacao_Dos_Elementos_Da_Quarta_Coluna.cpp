/* 5-) Elabore um programa que leia uma matriz de 3x4 do tipo inteiro.
Calcule e mostre a multiplicação entre os elementos da 4ª coluna. */

#include <iostream>
#include <conio.h>
using namespace std;

#define L 3
#define C 4

int matriz[L][C], i, j, mult = 1;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DA MULTIPLICAÇÃO ENTRE OS ELEMENTOS DA QUARTA COLUNA: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < L; i++) {
		
		for (j = 0; j < C; j++) {
			
			cout << "\n\t Informe o elemento ["<< i <<"]["<< j <<"]: ";
			cin >> matriz[L][C];
		}
	}
	
	// Multiplicação entre os elementos da 4ª coluna da matriz
	j = 3;
	
	for (i = 0; i < L; i++) {
		
		mult *= matriz[i][j];
	}
	
	// Impressão do resultado da multiplicação
	cout << "\n\t A multiplicação entre os elementos da quarta coluna é igual a: " << mult;

	getch();	
}
