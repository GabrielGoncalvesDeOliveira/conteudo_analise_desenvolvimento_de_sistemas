/* 6) Escreva um algoritmo que leia um vetor de 30 elementos do tipo inteiro e: 
 a) Mostre a quantidade de elementos divis�veis por 5; 
 b) Mostre em quais posi��es os elementos �mpares est�o armazenados. */
 
#include <iostream>
#include <conio.h>
using namespace std;

#define T 30
int vetor[T], quantidadeDeDivisiveisPor5, i;

int main() {
	
	setlocale(LC_ALL,"");
	
	i = 0;
	
	cout << "\n\t ALGORITMO CONTADOR DE ELEMENTOS DIVIS�VEIS POR 5 EM UM VETOR DE 30 ELEMENTOS: \n";
	
	do {
		cout << "\n\t Por gentileza, digite um n�mero: ";
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
			cout << "\n\n\t Na posi��o vet[" << i << "] existe um n�mero �mpar (" << vetor[i] << ").";
		}
		i++;
		
	} while (i < T);
	
	cout << "\n\n\t A quantidade de n�meros divis�veis por 5 �: " << quantidadeDeDivisiveisPor5;
	
	getch();
}
