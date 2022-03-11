/* 4) Faça um algoritmo que leia um vetor A de 10 elementos, do tipo inteiro, e gere um vetor B 
como sendo a multiplicação de a[i] por i. Mostre o vetor B. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10

int vetorA[T], vetorB[T], i;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO GERADOR DE VETOR COM VALORES MULTIPLICADOS PELO ÍNDICE: \n";
	
	// efetua a leitura dos elementos do vetor A[]
	for (i = 0; i < T; i++) {
		
		cout << "\n\t Por gentileza digite o " << i + 1 << "º elemento do vetor: ";
		cin >> vetorA[i];
	}
	
	// gera os novos elementos do vetor B[] a partir dos de A[]
	for (i = 0; i < T; i++) {
		
		vetorB[i] = vetorA[i] * i;
	}
	
	// Imprime cada elemento do novo vetor
	for (i = 0; i < T; i++) {
		
		cout << "\n\t O " << i + 1 << "º elemento do novo vetor B[], é: " << vetorB[i] << "\n";
	}
	
	getch();
}
