/* 16) Escreva um algoritmo que defina um vetor de 12 posições, do tipo inteiro. O 
algoritmo deverá ler todos os elementos (da posição 1 até a posição 10). Pede-se: 
 a. Armazene na posição 0 a soma dos elementos PARES. Mostre o resultado da 
soma; 
 b. Armazene na posição 11 a soma dos elementos ÍMPARES. Mostre o resultado da 
soma; 
 c. Encontre o maior elemento do vetor (da posição 1 até a posição 10). */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 12

int vetor[T], i, maiorElemento;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO REALIZADOR DE SOMAS E VERIFICAÇÕES EM UM VETOR: \n";
	
	for (i = 1; i < T - 1; i++) {
		
		cout << "\n\t Por gentileza digite o " << i << "º elemento: ";
		cin >> vetor[i];
	}
	
	vetor[0] = 0;
	vetor[11] = 0;
	maiorElemento = 0;
	
	for (i = 1; i < T - 1; i++) {
		
		if (vetor[i] % 2 == 0) {
			
			vetor[0] += vetor[i];
		
		} else {
			vetor[11] += vetor[i];
		}
		
		if (vetor[i] > maiorElemento) {
			
			maiorElemento = vetor[i];
		}
	}
	
	cout << "\n\t O resultado da soma entre elementos PARES do vetor é: " << vetor[0] << "\n";
	
	cout << "\n\t O resultado da soma entre elementos ÍMPARES do vetor é: " << vetor[11] << "\n";
	
	cout << "\n\t O MAIOR elemento do vetor é o: " << maiorElemento << "\n";
	
	getch();
}
