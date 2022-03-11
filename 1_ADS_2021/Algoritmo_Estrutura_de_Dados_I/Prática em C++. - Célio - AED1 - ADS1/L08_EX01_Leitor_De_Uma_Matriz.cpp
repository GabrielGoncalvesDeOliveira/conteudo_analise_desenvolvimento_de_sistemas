/* 1-) Faça um algoritmo que leia uma matriz M de 2x2 e mostre:

A-) A quantidade de elementos maiores que 5
B-) A soma entre todos os elementos */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 2

int m[T][T], i, j, quantMaioresQue5, soma;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO LEITOR DE UMA MATRIZ 2x2: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Digite o elemento M["<< i <<"]["<< j <<"], por gentileza: ";
			cin >> m[i][j];	
		}
	}
	
	// Processamentos da Matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			if (m[i][j] > 5) {
				quantMaioresQue5++;
			}
			soma += m[i][j];
		}
	}
	
	// Exibição dos dados processados
	cout << "\n\t A quantidade de números maiores que 5 informados foi: " << quantMaioresQue5 << "\n";
	
	cout << "\n\t A soma entre todos os elementos foi: " << soma;
	
	getch();
}
