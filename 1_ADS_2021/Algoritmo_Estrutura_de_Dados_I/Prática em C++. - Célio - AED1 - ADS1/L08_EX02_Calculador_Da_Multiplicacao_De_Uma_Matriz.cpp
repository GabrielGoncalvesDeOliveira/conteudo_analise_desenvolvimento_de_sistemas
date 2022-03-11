/* 2-) Escreva um algoritmo que leia uma matriz A de 4x3 do tipo real. Calcule e mostre:

A-) A média entre todos os elementos;
B-) A quantidade de elementos >= 0;
C-) A multiplicação entre todos os elementos. */ 

#include <iostream>
#include <conio.h>
using namespace std;

#define L 4
#define C 3

float a[L][C], soma, multiplicacao;
int quantPositivos, i, j;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADOR DA MULTIPLICAÇÃO ENTRE OS ELEMENTOS DE UMA MATRIZ: \n";
	
	// Leitura dos elementos da matriz	
	for (i = 0; i < L; i++) {
		
		for (j = 0; j < C; j++) {
			
			cout << "\n\t Digite o elemento A["<< i <<"]["<< j <<"] por gentileza: ";
			cin >> a[i][j];
		}
	}
	
	multiplicacao = 1;
	
	// Processamentos da Matriz
	for (i = 0; i < L; i++) {
		
		for (j = 0; j < C; j++) {
			
			if (a[i][j] >= 0) {
				quantPositivos++;
			}
			soma += a[i][j];
			multiplicacao *= a[i][j];
		}
	}
	
	// Exibição dos dados processados
	cout << "\n\t A média entre os elementos da matriz é: " << soma / (L * C) << "\n";
	
	cout << "\n\t A quantidade de elementos positivos é: " << quantPositivos << "\n";
	
	cout << "\n\t A multiplicação entre todos os elementos da matriz é: " << multiplicacao;
	
	getch();
}
