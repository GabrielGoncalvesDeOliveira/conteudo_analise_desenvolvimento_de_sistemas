/* Nome: Gabriel Gonçalves de Oliveira - RA: 2111550021 - 1º ADS 

Exercício de Algoritmo e Estruturas de Dados 1 - AED1 - 22/06/2021 - 1º Semestre
Professor Dr. Luiz Carlos Begosso 

Objetivo Parte 1 - Implementar em C++ o algoritmo Bubble Sort, em ordenação crescente. */

#include <iostream>
#include <conio.h>
using namespace std;

// Definição do tamanho do vetor e declaração das variáveis
#define T 10

int vetorCrescente[T], i, n, auxiliar; 

int main() {
	
	// Instrução utilizada para permitir o uso de acentos e caracteres especiais no 'cout'
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO ORDENADOR DE VETOR COM ORDENAÇÃO CRESCENTE PELO MÉTODO 'BUBBLE SORT': \n";
	
	// Leitura dos elementos do vetor
	for (i = 0; i < T; i++) {
		
		cout << "\n\t Por gentileza digite o " << i + 1 << "º elemento: ";
		
		cin >> vetorCrescente[i];
	}
	
	// Processamento responsável por ordenar o vetor
	for (n = 0; n < T - 1; n++) {
	
		for (i = 0; i < T - 1; i++ ) {
			
			// Verificação que define que a ordenação será crescente
			if (vetorCrescente[i] > vetorCrescente[i + 1]) {
				
				auxiliar = vetorCrescente[i];
				
				vetorCrescente[i] = vetorCrescente[i + 1];
				
				vetorCrescente[i + 1] = auxiliar;
			}
		}	
	}
	
	// Impressão dos elementos do vetor ordenado
	for (i = 0; i < T; i++) {
		
		cout << "\n\t O novo elemento do vetor ordenado, na " << i + 1 << "ª posição é o: " << vetorCrescente[i] << ". \n";
	}
	getch();
}
