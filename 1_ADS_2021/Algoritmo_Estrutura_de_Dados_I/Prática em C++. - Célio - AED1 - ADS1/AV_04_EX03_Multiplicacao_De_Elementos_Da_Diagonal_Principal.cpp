/* 3-) Escreva um programa ou algoritmo que leia uma matriz de 3x3 elementos do tipo real.
Calcule e mostre a multiplicação entre os elementos que estão na diagonal principal (i = j). */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 3

float matriz[T][T], mult = 1;
int i, j;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADOR DA MULTIPLICAÇÃO ENTRE OS ELEMENTOS DA DIAGONAL PRINCIPAL: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Por gentileza, informe o elemento ["<< i <<"]["<< j <<"]: ";
			cin >> matriz[i][j];
		}
	}
	
	// Multiplicação entre os elementos da diagonal principal
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			if (i == j) {
				
				mult *= matriz[i][j];
			}
		}
	}
	
	// Impressão do resultado da multiplicação
	cout << "\n\t O resultado da multiplicação entre os elementos da diagonal principal é: " << mult;

	getch();
}
