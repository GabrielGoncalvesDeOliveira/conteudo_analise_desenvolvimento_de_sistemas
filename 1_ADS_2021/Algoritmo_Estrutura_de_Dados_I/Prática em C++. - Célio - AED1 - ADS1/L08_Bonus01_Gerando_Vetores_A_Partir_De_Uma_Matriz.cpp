/* 1-) Escreva um algoritmo que leia uma matriz 5x6 de inteiros e a seguir:
	
	A-) Armazene em um vetor a média de cada linha.
	B-) Armazene em um vetor a soma de cada coluna.
	C-) Mostre os vetores gerados. */

#include <iostream>	
#include <conio.h>
using namespace std;

#define L 5
#define C 6

int matriz[L][C], vetA[L], vetB[C], i, j;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t GERANDO VETORES A PARTIR DAS MÉDIAS DAS LINHAS E COLUNAS DE UMA MATRIZ: \n";
	
	// Leitura dos elementos da matriz
	for (i = 0; i < L; i++) {
		
		for (j = 0; j < C; j++) {
			
			cout << "\n\t Por gentileza digite o elemento ["<< i <<"]["<< j <<"] da matriz: ";
			cin >> matriz[i][j];
		}
	}
	
	// Processamento que calcula a média de cada linha e a armazena em uma posição do vetor A[]
	for (i = 0; i < L; i++) {
	
		vetA[i] = 0;
	
		for (j = 0; j < C; j++) {
		
			vetA[i] += matriz[i][j];
		}
		vetA[i] = vetA[i] / C;
	}
	
	// Processamento que calcula a média de cada coluna e a armazena em uma posição do vetor B[]
	for (j = 0; j < C; j++) {
		
		vetB[j] = 0; 
		
		for (i = 0; i < L; i++) {
			
			vetB[j] += matriz[i][j];
		}
	}
	
	// Impressão dos elementos do vetor A[]
	for (i = 0; i < L; i++) {
		
		cout << "\n\t O vetor A[], gerado a partir das linhas da matriz possui como " << i + 1 << "º elemento: " << vetA[i] << "\n";
	}
	
	// Impressão dos elementos do vetor B[]
	for (j = 0; j < C; j++) {
		
		cout << "\n\t O vetor B[], gerado a partir das colunas da matriz possui como " << j + 1 << "º elemento: " << vetB[j] << "\n";
	}
	
	// Impressão dos elementos do vetor A[], porém de outra forma
	cout << "\n\t Média das Linhas: \n\n";
	
	for (i = 0; i < L; i++) {
		
		cout << "\t A[" << i << "]: " << vetA[i] << "\n";
	}
	
	// Impressão dos elementos do vetor B[], porém de outra forma
	cout << "\n\t Soma das Colunas: \n\n";
	
	for (j = 0; j < L; j++) {
		
		cout << "\t B[" << j << "]: " << vetB[j] << "\n";
	}
	
	getch();
}
