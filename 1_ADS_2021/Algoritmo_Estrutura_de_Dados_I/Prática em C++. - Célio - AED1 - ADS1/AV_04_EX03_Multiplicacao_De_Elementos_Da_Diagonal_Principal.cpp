/* 3-) Escreva um programa ou algoritmo que leia uma matriz de 3x3 elementos do tipo real.
Calcule e mostre a multiplica��o entre os elementos que est�o na diagonal principal (i = j). */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 3

float matriz[T][T], mult = 1;
int i, j;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADOR DA MULTIPLICA��O ENTRE OS ELEMENTOS DA DIAGONAL PRINCIPAL: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Por gentileza, informe o elemento ["<< i <<"]["<< j <<"]: ";
			cin >> matriz[i][j];
		}
	}
	
	// Multiplica��o entre os elementos da diagonal principal
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			if (i == j) {
				
				mult *= matriz[i][j];
			}
		}
	}
	
	// Impress�o do resultado da multiplica��o
	cout << "\n\t O resultado da multiplica��o entre os elementos da diagonal principal �: " << mult;

	getch();
}
