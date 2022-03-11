/* 15) Escreva um algoritmo que leia um vetor de 10 elementos, do tipo inteiro. Calcule e 
mostre os números superiores a 50 e suas respectivas posições. Mostrar mensagem se 
não existir nenhum número nessa condição. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10

int vetor[T], i, quantidadeDeMaioresQue50 = 0;

int main() {
	
	setlocale(LC_ALL,"");

	cout << "\n\t ALGORITMO BUSCADOR DE NÚMEROS MAIORES QUE 50 EM UM VETOR: \n";
	
	for (i = 0; i < T; i++) {
		
		cout << "\n\t Por gentileza, digite o " << i + 1 << "º elemento: ";
		cin >> vetor[i];
	}
	
	for (i = 0; i < T; i++) {
		
		if (vetor[i] > 50) {
			
			cout << "\n\t O elemento " << vetor[i] << ", na " << i + 1 << "ª posição é maior que 50. \n";
			
			quantidadeDeMaioresQue50++;
		}
	}
	
	if (quantidadeDeMaioresQue50 == 0) {
		
		cout << "\n\t Não foi digitado nenhum elemento maior do que 50. ";
	}
	
	getch();
}
