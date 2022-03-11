/* 4-) Construa um programa ou algoritmo que leia uma matriz de 4x2 do tipo inteiro.
Calcule e mostre a soma entre os elementos da 3ª linha (i = 2) da matriz. */

#include <iostream>
#include <conio.h>
using namespace std;

#define L 4
#define C 2

int matriz[L][C], i, j, soma = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DA SOMA ENTRE OS ELEMENTOS DA TERCEIRA LINHA: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < L; i++) {
		
		for (j = 0; j < C; j++) {
			
			cout << "\n\t Informe o elemento ["<< i <<"]["<< j <<"]: ";
			cin >> matriz[L][C];
		}
	}

	// Verifica se o elemento está na terceira linha e o acrescenta à variável soma caso esteja
	/* for (i = 0; i < L; i++) {
		
		for (j = 0; j < C; j++) {
			
			if (i == 2) {
				soma += matriz[i][j];
			}
		}
	} */
	
	// Efetua a soma entre os elementos que estão na 3ª linha
	i = 2;
	
	for (j = 0; j < C; j++) {
		
		soma = soma + matriz[i][j];
	}
	
	// Impressão da soma entre os elementos da 3ª linha
	cout << "\n\t A soma entre os elementos da terceira linha é: " << soma;

	getch();
}
