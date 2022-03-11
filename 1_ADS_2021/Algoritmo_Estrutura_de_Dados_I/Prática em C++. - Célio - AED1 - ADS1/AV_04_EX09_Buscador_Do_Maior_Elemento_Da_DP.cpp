/* 9-) Escreva um programa ou algoritmo que leia uma matriz de 3x3 e encontre
o maior elemento da diagonal principal (i = j). Mostre o elemento encontrado. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 3

int matriz[T][T], i, j, maior;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t BUSCADOR DO ELEMENTO X NO MEIO DE UMA MATRIZ: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Digite o elemento ["<< i <<"]["<< j <<"]: ";
			cin >> matriz[i][j];
		}
	}
	
	// Insere na variável o primeiro elemento da matriz
	maior = matriz[0][0];
	
	// Verifica se o elemento pertence à diagonal principal e se é maior do que o elemento armazenado em 'maior'
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			if (i == j && matriz[i][j] > maior) {
				
				maior = matriz[i][j];
			}
		}		
	}
	
	// Imprime o maior elemento da diagonal principal
	cout << "\n\t O maior elemento da diagonal principal é o: " << maior;
	
	getch();	
}
