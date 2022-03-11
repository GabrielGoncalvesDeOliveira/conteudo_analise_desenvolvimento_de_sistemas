/* 6) Escreva um algoritmo que leia um vetor de 30 elementos do tipo inteiro e: 
 a) Mostre a quantidade de elementos divisíveis por 5; 
 b) Mostre em quais posições os elementos ímpares estão armazenados. */
 
#include <iostream>
#include <conio.h>
using namespace std;

#define T 30
int vetor[T], quantidadeDeDivisiveisPor5, i;

int main() {
	
	setlocale(LC_ALL,"");
	
	i = 0;
	
	cout << "\n\t ALGORITMO CONTADOR DE ELEMENTOS DIVISÍVEIS POR 5 EM UM VETOR DE 30 ELEMENTOS: \n";
	
	do {
		cout << "\n\t Por gentileza, digite um número: ";
		cin >> vetor[i];
		i++;
		
	} while (i < T);
	
	i = 0; quantidadeDeDivisiveisPor5 = 0;
	
	do {
		if (vetor[i] != 0) {
		
			if (vetor[i] % 5 == 0) {
				quantidadeDeDivisiveisPor5++;
			}
		}
		if (vetor[i] % 2 != 0) {
			cout << "\n\n\t Na posição vet[" << i << "] existe um número ímpar (" << vetor[i] << ").";
		}
		i++;
		
	} while (i < T);
	
	cout << "\n\n\t A quantidade de números divisíveis por 5 é: " << quantidadeDeDivisiveisPor5;
	
	getch();
}
