/* Exercícios da 1ª Avaliação do 2º Semestre - Talo & Célio - AED1 

2-) Escreva um programa ou algoritmo que gere uma matriz 5x5 da seguinte forma: 
preencha com 1 a diagonal principal (1 = j) e com 0 os demais elementos.
Mostre a matriz obtida. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 5

int matriz[T][T], i, j;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t GERADOR DE ELEMENTOS DE UMA MATRIZ COM BASE EM SUA DIAGONAL PRINCIPAL: \n\n";

	// Geração dos valores com base na posição dos elementos em relação à diagonal principal
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			if (i == j) {
				
				matriz[i][j] = 1;
			
			} else {
				matriz[i][j] = 0;
			}
		}
	}
	
	// Impressão dos elementos da matriz A[][] (de uma forma épica)
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\t" << matriz[i][j];
		}
		cout << "\n";
	}
	
	// Impressão dos elementos gerados
	/* for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t O elemento ["<< i <<"]["<< j <<"] possui o valor:" << matriz[i][j] << "\n";
		}
	} */
	
	getch();
}
