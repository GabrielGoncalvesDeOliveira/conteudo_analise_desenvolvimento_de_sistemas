/* 2-) Escreva um algoritmo que leia uma matriz A de 4x3 do tipo real. Calcule e mostre:

A-) A m�dia entre todos os elementos;
B-) A quantidade de elementos >= 0;
C-) A multiplica��o entre todos os elementos. */ 

#include <iostream>
#include <conio.h>
using namespace std;

#define L 4
#define C 3

float a[L][C], soma, multiplicacao;
int quantPositivos, i, j;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADOR DA MULTIPLICA��O ENTRE OS ELEMENTOS DE UMA MATRIZ: \n";
	
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
	
	// Exibi��o dos dados processados
	cout << "\n\t A m�dia entre os elementos da matriz �: " << soma / (L * C) << "\n";
	
	cout << "\n\t A quantidade de elementos positivos �: " << quantPositivos << "\n";
	
	cout << "\n\t A multiplica��o entre todos os elementos da matriz �: " << multiplicacao;
	
	getch();
}
