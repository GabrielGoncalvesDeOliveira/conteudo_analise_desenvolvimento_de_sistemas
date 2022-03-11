/* 10-) Construa um programa que leia uma matriz de 3x3 do tipo inteiro.
Calcule e mostre:

A-) A soma dos n�meros pares;
B-) A quantidade de n�meros �mpares. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 3

int matriz[T][T], soma = 0, cont = 0, i, j;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DA SOMA DE PARES E QUANTIDADE DE �MPARES: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Digite o elemento ["<< i <<"]["<< j <<"]: ";
			cin >> matriz[i][j];
		}
	}
	
	// Verifica se o elemento � par, acrescentando-o � vari�vel soma caso seja
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			if (matriz[i][j] % 2 == 0) {
				
				soma += matriz[i][j];
			
			} else {
				cont++;
			}
		}
	}
	
	// Imprime o resultado obtido nas vari�veis "soma" e "cont"
	cout << "\n\t A soma entre os n�meros pares �: " << soma;
	cout << "\n\t A quantidade de n�meros �mpares �: " << cont;
	
	getch();	
}
