/* 17) Escreva um algoritmo que leia o vetor A, do tipo inteiro, com 10 elementos. A 
partir do vetor lido gere o vetor B de, 5 elementos, com a última metade do vetor A. 
Gere também o vetor C com a primeira metade do vetor A. Imprima os vetores B e C. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10 // tamanho
#define S 5 // size

int vetorA[T], vetorB[S], vetorC[S], i, j;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO GERADOR DE DOIS VETORES A PARTIR DE UM ÚNICO VETOR: \n";
	
	for (i = 0; i < T; i++) {
		
		cout << "\n\t Por gentileza digite o " << i + 1 << "º elemento: ";
		cin >> vetorA[i];
	}
	
	j = 5;
	
	for (i = 0; i < S; i++) {
		
		vetorB[i] = vetorA[j];
		
		j++;
	}
	
	for (i = 0; i < S; i++) {
		
		vetorC[i] = vetorA[i];
	}
	
	cout << "\n\t ====================================================================================== \n";
	
	for (i = 0; i < S; i++) {
		
		cout << "\n\t O " << i + 1 << "º elemento do novo vetor B[], gerado a partir da segunda metade do vetor A[], é: " << vetorB[i] << "\n";
	}
	
	cout << "\n\t ====================================================================================== \n";
	
	for (i = 0; i < S; i++) {
		
		cout << "\n\t O " << i + 1 << "º elemento do novo vetor C[], gerado a partir da primeira metade do vetor A[], é: " << vetorC[i] << "\n";
	}
	
	getch();
}
