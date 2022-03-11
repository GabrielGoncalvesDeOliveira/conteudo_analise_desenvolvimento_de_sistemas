/* 4-) Escreva um algoritmo que leia duas matrizes, A e B (3x3) e calcule, numa matriz R,
o quadrado de cada elemento de A somado ao quadrado de cada elemento de B. 
Mostre a matriz resultante R. Dica: r[i][j] = a[i][j]**2 + b[i][j] */

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

#define T 3

float A[T][T], B[T][T], R[T][T]; 
int i, j;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADOR DA MATRIZ RESULTANTE VINDA DO EXPOENTE DOS ELEMENTOS DE DUAS MATRIZES: \n";
	
	// Leitura dos elementos da matriz A[]
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Por gentileza digite o elemento A["<< i <<"]["<< j <<"]: ";
			cin >> A[i][j];
		}
	}
	
	cout << "\n\t ========================================== \n";
	
	// Leitura dos elementos da matriz B[]
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Por gentileza digite o elemento B["<< i <<"]["<< j <<"]: ";
			cin >> B[i][j];
		}
	}
	
	// Processamentos das Matrizes
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			R[i][j] = pow(A[i][j], 2) + pow(B[i][j], 2);
		}
	}
	
	cout << "\n\t ========================================== \n";
	
	// Exibição dos elementos da matriz R[], gerada a partir das matrizes A[] e B[]
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t O elemento R["<< i <<"]["<< j <<"] da matriz resultante é: " << R[i][j] << "\n";
		}
	}
	
	getch();
}
