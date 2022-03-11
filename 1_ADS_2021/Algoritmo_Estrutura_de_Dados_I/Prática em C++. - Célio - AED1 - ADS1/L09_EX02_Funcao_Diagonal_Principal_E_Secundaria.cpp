/* Outro exercício - Funções - 19/08/2021 - AED1

2-) Escreva um programa que leia uma matriz de 3x3, do tipo inteiro e mostre:

A-) Os elementos da diagonal principal(i == j)
B-) A soma entre os elementos que estão abaixo da diagonal principal (i > j) */

#include <iostream>
#include <conio.h>
using namespace std;

#define t 3
int matriz[t][t];

// função que efetua a leitura dos elementos da matriz
void lerElementosDaMatriz() {
	
	cout << "\n\t LEITURA DOS ELEMENTOS DA MATRIZ: \n";
	
	int i, j;
	
	for (i = 0; i < t; i++) {
		
		for (j = 0; j < t; j++) {
			
			cout << "\n\t Por gentileza digite o elemento M["<< i <<"]["<< j <<"]: ";
			cin >> matriz[i][j];
		}
	}
}

// função que efetua a busca pelos elementos da diagonal principal
void buscarElementosDaDiagonalPrincipal() {
	
	cout << "\n\t BUSCANDO OS ELEMENTOS DA DIAGONAL PRINCIPAL: \n";
	
	int i, j;
	
	for (i = 0; i < t; i++) {
		
		for (j = 0; j < t; j++) {
			
			if (i == j) {
		
				cout << "\n\t O elemento ["<< i <<"]["<< j <<"]: " << matriz[i][j] << " pertence a diagonal principal. \n";
			}
		}
	}	
}

// função que efetua a soma entre os elementos abaixo da diagonal principal
void calcularSomaEntreElementosAbaixoDaDiagonalPrincipal() {
	
	cout << "\n\t CALCULANDO A SOMA ENTRE OS ELEMENTOS ABAIXO DA DIAGONAL PRINCIPAL: \n";
	
	int i, j, soma = 0;
	
	for (i = 0; i < t; i++) {
		
		for (j = 0; j < t; j++) {
			
			if (i > j) {
		
				soma += matriz[i][j];
			}
		}
	}
	cout << "\n\t A soma entre os elementos abaixo da diagonal principal é: " << soma;
}

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CHAMANDO ALGUMAS FUNÇÕES: \n";
	
	lerElementosDaMatriz();
	
	buscarElementosDaDiagonalPrincipal();
	
	calcularSomaEntreElementosAbaixoDaDiagonalPrincipal();
	
	getch();
}
