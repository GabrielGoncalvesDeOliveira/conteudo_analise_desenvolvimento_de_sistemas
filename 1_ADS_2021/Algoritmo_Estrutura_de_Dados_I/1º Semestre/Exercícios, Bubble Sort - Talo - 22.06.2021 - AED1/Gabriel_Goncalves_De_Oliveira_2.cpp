/* Nome: Gabriel Gon�alves de Oliveira - RA: 2111550021 - 1� ADS 

Exerc�cio de Algoritmo e Estruturas de Dados 1 - AED1 - 22/06/2021 - 1� Semestre
Professor Dr. Luiz Carlos Begosso 

Objetivo Parte 2 - Implementar em C++ o algoritmo Bubble Sort, em ordena��o decrescente. */

#include <iostream>
#include <conio.h>
using namespace std;

// Defini��o do tamanho do vetor e declara��o das vari�veis
#define T 10

int vetorDecrescente[T], i, n, auxiliar;

int main() {
	
	// Instru��o utilizada para permitir o uso de acentos e caracteres especiais no 'cout'
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO ORDENADOR DE VETOR COM ORDENA��O DECRESCENTE PELO M�TODO 'BUBBLE SORT' \n";
	
	// Leitura dos elementos do vetor
	for (i = 0; i < T; i++) {
		
		cout << "\n\t Por gentileza digite o " << i + 1 << "� elemento: ";
		
		cin >> vetorDecrescente[i];
	}
	
	// Processamento respons�vel por ordenar o vetor
	for (n = 0; n < T - 1; n++) {
		
		for (i = 0; i < T - 1; i++) {
			
			// Verifica��o que define que a ordena��o ser� decrescente
			if (vetorDecrescente[i] < vetorDecrescente[i + 1]) {
				
				auxiliar = vetorDecrescente[i];
				
				vetorDecrescente[i] = vetorDecrescente[i + 1];
				
				vetorDecrescente[i + 1] = auxiliar;
			}
		}
	}
	
	// Impress�o dos elementos do vetor ordenado
	for (i = 0; i < T; i++) {
		
		cout << "\n\t O novo elemento do vetor ordenado, na " << i + 1 << "� posi��o � o: " << vetorDecrescente[i] << ". \n";
	}
	getch();
}
