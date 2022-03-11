/* 1.1-) Escreva um algoritmo que leia uma matriz de 3x2 do tipo real. Calcule e mostre:

A-) A média entre todos os elementos da matriz;
B-) A quantidade de elementos positivos;
C-) A soma entre todos os elementos. */

#include <iostream>
#include <conio.h>
using namespace std;

#define L 3
#define C 2

float m[L][C], soma;
int quantPositivos, i, j;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DE MÉDIA ENTRE OS ELEMENTOS DE UMA MATRIZ: \n";
	
	// Leitura dos elementos da matriz
	for (i = 0; i < L; i++) {
		
		for (j = 0; j < C; j++) {
			
			cout << "\n\t Digite o elemento M["<< i <<"]["<< j <<"], por gentileza: ";
			cin >> m[i][j];
		}
	}
	
	// Processamentos da Matriz
	for (i = 0; i < L; i++) {
		
		for (j = 0; j < C; j++) {
			
			if (m[i][j] > 0) {
				quantPositivos++;
			}
			soma += m[i][j];
		}
	}
	
	// Exibição dos dados processados
	cout << "\n\t A média entre os elementos da matriz é: " << soma / (L * C) << "\n";
	
	cout << "\n\t A quantidade de elementos positivos é: " << quantPositivos << "\n";
	
	cout << "\n\t A soma entre todos os elementos da matriz é: " << soma;
	
	getch();
}
