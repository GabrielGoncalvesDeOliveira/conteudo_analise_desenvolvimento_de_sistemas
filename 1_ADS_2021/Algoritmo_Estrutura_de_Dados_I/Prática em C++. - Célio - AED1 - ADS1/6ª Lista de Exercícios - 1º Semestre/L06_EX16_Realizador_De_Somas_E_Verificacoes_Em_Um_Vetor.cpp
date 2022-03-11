/* 16) Escreva um algoritmo que defina um vetor de 12 posi��es, do tipo inteiro. O 
algoritmo dever� ler todos os elementos (da posi��o 1 at� a posi��o 10). Pede-se: 
 a. Armazene na posi��o 0 a soma dos elementos PARES. Mostre o resultado da 
soma; 
 b. Armazene na posi��o 11 a soma dos elementos �MPARES. Mostre o resultado da 
soma; 
 c. Encontre o maior elemento do vetor (da posi��o 1 at� a posi��o 10). */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 12

int vetor[T], i, maiorElemento;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO REALIZADOR DE SOMAS E VERIFICA��ES EM UM VETOR: \n";
	
	for (i = 1; i < T - 1; i++) {
		
		cout << "\n\t Por gentileza digite o " << i << "� elemento: ";
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
	
	cout << "\n\t O resultado da soma entre elementos PARES do vetor �: " << vetor[0] << "\n";
	
	cout << "\n\t O resultado da soma entre elementos �MPARES do vetor �: " << vetor[11] << "\n";
	
	cout << "\n\t O MAIOR elemento do vetor � o: " << maiorElemento << "\n";
	
	getch();
}
