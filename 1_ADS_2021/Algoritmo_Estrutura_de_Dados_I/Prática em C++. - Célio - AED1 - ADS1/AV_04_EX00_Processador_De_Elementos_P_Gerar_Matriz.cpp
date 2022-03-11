/* 0-) Escreva um algoritmo que gere uma matriz A de tamanho 4x4 da seguinte forma:

A[i][j] = 2 * i + 7 * j - 2, se i < j
A[i][j] = 3 * i - 1, se i = j
A[i][j] = 4 * i - 5 * j, se i > j */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 3

int matrizA[T][T], i, j;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t PROCESSADOR DE ELEMENTOS COM BASE EM SUA POSIÇÃO PARA GERAÇÃO DE UMA NOVA MATRIZ: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Digite o elemento A["<< i <<"]["<< j <<"]: ";
			cin >> matrizA[i][j];
		}
	}
	
	// Processa cada expressão com base na posição do elemento na matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			if (i < j) {
				
				// Expressão para posição de linha menor que de coluna
				matrizA[i][j] = 2 * i + 7 * j - 2;
			
			} else if (i == j) {
				
				// Expressão para posição de linha igual a de coluna
				matrizA[i][j] = 3 * i - 1;
			
			} else {
				
				// Expressão para posição de linha maior que de coluna
				matrizA[i][j] = 4 * i - 5 * j;
			}
		}
	}
	
	// Impressão dos elementos da matriz A[][] (de uma forma épica)
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\t" << matrizA[i][j];
		}
		cout << "\n";
	}
	
	getch();
}
