/* 15) Escreva um algoritmo que leia um vetor de 10 elementos, do tipo inteiro. Calcule e 
mostre os n�meros superiores a 50 e suas respectivas posi��es. Mostrar mensagem se 
n�o existir nenhum n�mero nessa condi��o. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10

int vetor[T], i, quantidadeDeMaioresQue50 = 0;

int main() {
	
	setlocale(LC_ALL,"");

	cout << "\n\t ALGORITMO BUSCADOR DE N�MEROS MAIORES QUE 50 EM UM VETOR: \n";
	
	for (i = 0; i < T; i++) {
		
		cout << "\n\t Por gentileza, digite o " << i + 1 << "� elemento: ";
		cin >> vetor[i];
	}
	
	for (i = 0; i < T; i++) {
		
		if (vetor[i] > 50) {
			
			cout << "\n\t O elemento " << vetor[i] << ", na " << i + 1 << "� posi��o � maior que 50. \n";
			
			quantidadeDeMaioresQue50++;
		}
	}
	
	if (quantidadeDeMaioresQue50 == 0) {
		
		cout << "\n\t N�o foi digitado nenhum elemento maior do que 50. ";
	}
	
	getch();
}
