/* 3-) Construa um algoritmo que leia uma matriz Z de 9 elementos do tipo inteiro
e mostre a quantidade de elementos pares e a quantidade de elementos �mpares
armazenados na matriz. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 3	

int z[T][T], quantPares, quantImpares, i, j;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CONTADOR DE ELEMENTOS PARES E �MPARES DE UMA MATRIZ: \n";
	
	// Leitura dos elementos da matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Digite o elemento Z["<< i <<"]["<< j <<"] por gentileza: ";
			cin >> z[i][j];
		}
	}
	
	// Processamentos da Matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			if (z[i][j] % 2 == 0) {	
				quantPares++;
			
			} else {
				quantImpares++;
			}
		}
	}
	
	// Exibi��o dos dados processados
	cout << "\n\t A quantidade de elementos pares �: " << quantPares << "\n";
	
	cout << "\n\t A quantidade de elementos �mpares �: " << quantImpares << "\n";
	
	getch();
}
