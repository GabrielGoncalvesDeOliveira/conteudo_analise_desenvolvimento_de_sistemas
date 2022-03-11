/* 1) Construa um programa que leia um vetor de 5 elementos reais e encontre o maior e o menor 
elemento. Digite o programa abaixo e confira a execução. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 5

float vetor[T], maior, menor;
int i;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO BUSCADOR DO MENOR E DO MAIOR ELEMENTO DE UM VETOR: \n";
	
	for (i = 0; i < T; i++) {
		
		cout << "\n\t Por gentileza digite o " << i + 1 << "º elemento: ";
		cin >> vetor[i];
	}
	
	maior = vetor[0]; menor = vetor[0];
	
	for (i = 1; i < T; i++) {
		
		if (vetor[i] > maior) {
			
			maior = vetor[i];
		}
		
		if (vetor[i] < menor) {
			
			menor = vetor[i];
		}
	}
	
	cout << "\n\t O maior elemento guardado no vetor foi o: " << maior << "\n";
	
	cout << "\n\t O menor elemento guardado no vetor foi o: " << menor << "\n";
	
	getch();
}
