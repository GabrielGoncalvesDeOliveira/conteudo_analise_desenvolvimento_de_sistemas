/* 14) Escreva um algoritmo que leia um vetor de 8 elementos, do tipo real, calcule e 
mostre: 
a. A soma entre os elementos >= a 20 e < que 30; 
b. A quantidade de números negativos; 
c. O maior elemento. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 8

float vetor[T], soma, maior;
int i, quantidadeDeNegativos;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO REALIZADOR DE PROCESSAMENTOS EM UM VETOR: \n";
	
	for (i = 0; i < T; i++ ) {
		
		cout << "\n\t Por gentileza digite o " << i + 1 << "º elemento: ";
		cin >> vetor[i];
	}
	
	soma = 0; maior = vetor[i];
	
	for (i = 0; i < T; i++) {
		
		if (vetor[i] >= 20 && vetor[i] < 30) {
			
			soma += vetor[i];
		}
		if (vetor[i] < 0) {
			
			quantidadeDeNegativos++;
		}
		if (vetor[i] > maior) {
			
			maior = vetor[i];
		}
	}
	
	cout << "\n\t A soma dos elementos >= 20 e < 30 é: " << soma << "\n";
	
	cout << "\n\t A quantidade de elementos negativos é: " << quantidadeDeNegativos << "\n";
	
	cout << "\n\t O maior elemento é o: " << maior << "\n";
	
	getch();
}
