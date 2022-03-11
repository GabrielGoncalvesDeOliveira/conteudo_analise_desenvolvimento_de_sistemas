/* 3) Construa um algoritmo que pesquise sobre um vetor de 20 elementos e mostre as seguintes 
quantidades: 
a. De elementos pares; 
b. De elementos ímpares; 
c. De vezes que aparece o elemento 5; 
d. De vezes que aparece o elemento 10. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10

int vetor[T], i;
int quantidadeDePares, quantidadeDeImpares, quantidadeDeNumeros5, quantidadeDeNumeros10;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO PESQUISADOR DE QUANTIDADES EM UM VETOR: \n";

	for (i = 0; i < T; i++) {
		
		cout << "\n\t Por gentileza digite o " << i + 1 << "º elemento: ";
		cin >> vetor[i];
	}
	
	quantidadeDePares = 0; quantidadeDeImpares = 0; quantidadeDeNumeros5 = 0; quantidadeDeNumeros10 = 0;
	
	for (i = 0; i < T; i++) {
		
		if (vetor[i] % 2 == 0) {
			
			quantidadeDePares++;
		
		} else {
			
			quantidadeDeImpares++;
		}
		
		if (vetor[i] == 5) {
			
			quantidadeDeNumeros5++;
		
		} 
		
		if (vetor[i] == 10) {
			
			quantidadeDeNumeros10++;
		}
	}
	
	cout << "\n\t A quantidade de elementos pares encontrados no vetor foi: " << quantidadeDePares << ". \n";
	
	cout << "\n\t A quantidade de elementos ímpares encontrados no vetor foi: " << quantidadeDeImpares << ". \n";
	
	cout << "\n\t A quantidade de vezes que o elemento 5 foi encontrado no vetor foi: " << quantidadeDeNumeros5 << ". \n";
	
	cout << "\n\t A quantidade de vezes que o elemento 10 foi encontrado no vetor foi: " << quantidadeDeNumeros10 << ". \n";
	
	getch();
}
