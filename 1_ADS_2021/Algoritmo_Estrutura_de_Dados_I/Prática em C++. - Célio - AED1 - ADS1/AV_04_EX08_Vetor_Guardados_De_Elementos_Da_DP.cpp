/* 8-) Elabore um programa que leia uma matriz 4x4 do tipo inteiro.
Guarde em um vetor os elementos da diagonal sercund�ria (i + j = t - 1) da matriz lida.
Mostre o vetor gerado. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 4

int matriz[T][T], vetor[T] i, j;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t VETOR QUE GUARDA OS ELEMENTOS DA DIAGONAL SECUND�RIA DE UMA MATRIZ: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Digite o elemento ["<< i <<"]["<< j <<"]: ";
			cin >> matriz[i][j];
		}
	}
	
	// Verifica se o elemento pertence � diagonal secund�ria
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			if (i + j == T - 1) {
				
				// A vari�vel j define que a diagonal comecar� a ser gerada de baixo para cima
				vetor[j] = matriz[i][j];
			}
		}
	}

	// Impress�o dos elementos do novo vetor	
	for (i = 0; i < T; i++) {
		
		cout << "\n\t O "<< i + 1 <<"� elemento desse novo vetor possui o valor: " << vetor[i];
	}
	getch();
}
