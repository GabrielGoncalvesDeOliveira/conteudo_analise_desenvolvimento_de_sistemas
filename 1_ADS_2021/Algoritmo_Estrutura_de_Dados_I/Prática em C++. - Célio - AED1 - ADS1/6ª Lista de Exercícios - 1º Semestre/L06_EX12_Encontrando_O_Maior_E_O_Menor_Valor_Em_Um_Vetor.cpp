/* 12) Construa um programa que leia um vetor de 5 elementos reais e encontre o maior 
e o menor elemento. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 5
float vetor[T], maior, menor; 
int i;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO QUE ENCONTRA O MAIOR E O MENOR VALOR DE UM VETOR DE 5 ELEMENTOS: \n";
	
	i = 0;
	
	do {
		cout << "\n\t Digite o elemento da posição vet[" << i << "]: ";
		cin >> vetor[i];
		i++;
		
	} while (i < T);
	
	i = 0; menor = vetor[i];
	
	do {
		if (vetor[i] > maior) {
			maior = vetor[i];
		}
		if (vetor[i] < menor) {
			menor = vetor[i];
		}
		i++;
		
	} while (i < T);
	
	cout << "\n\t O maior elemento desse vetor é o: " << maior << "\n";
	cout << "\n\t O menor elemento desse vetor é o: " << menor << "\n";
	
	getch();
}
