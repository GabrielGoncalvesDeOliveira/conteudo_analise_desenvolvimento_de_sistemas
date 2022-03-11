/* 9) Faça um algoritmo que leia um vetor de 10 posições e mostre quantos elementos 
são maiores que seus respectivos índices. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10
int vetor[T], quantidadeDeElementos, i;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO CONTADOR DA QUANTIDADE DE ELEMENTOS MAIORES QUE SEUS RESPECTIVOS ÍNDICES EM UM VETOR: \n";
	
	i = 0;
	
	do {
		cout << "\n\t Por gentileza, digite um elemento: ";
		cin >> vetor[i];
		i++;
		
	} while (i < T);
	
	i = 0;
	
	do {
		if (vetor[i] > i) {
			quantidadeDeElementos++;
			
			cout << "\n\n\t O elemento " << vetor[i] << " é maior que seu índice (posição " << i << ").";
		}
		i++;
		
	} while (i < T);
	
	cout << "\n\n\t A quantidade de elementos maiores que seus respectivos índices é: " << quantidadeDeElementos;
	
	getch();
}
