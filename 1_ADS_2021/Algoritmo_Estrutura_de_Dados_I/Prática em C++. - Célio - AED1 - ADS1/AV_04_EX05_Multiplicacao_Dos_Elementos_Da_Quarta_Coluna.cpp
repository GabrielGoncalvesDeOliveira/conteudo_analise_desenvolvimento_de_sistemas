/* 5-) Elabore um programa que leia uma matriz de 3x4 do tipo inteiro.
Calcule e mostre a multiplica��o entre os elementos da 4� coluna. */

#include <iostream>
#include <conio.h>
using namespace std;

#define L 3
#define C 4

int matriz[L][C], i, j, mult = 1;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DA MULTIPLICA��O ENTRE OS ELEMENTOS DA QUARTA COLUNA: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < L; i++) {
		
		for (j = 0; j < C; j++) {
			
			cout << "\n\t Informe o elemento ["<< i <<"]["<< j <<"]: ";
			cin >> matriz[L][C];
		}
	}
	
	// Multiplica��o entre os elementos da 4� coluna da matriz
	j = 3;
	
	for (i = 0; i < L; i++) {
		
		mult *= matriz[i][j];
	}
	
	// Impress�o do resultado da multiplica��o
	cout << "\n\t A multiplica��o entre os elementos da quarta coluna � igual a: " << mult;

	getch();	
}
