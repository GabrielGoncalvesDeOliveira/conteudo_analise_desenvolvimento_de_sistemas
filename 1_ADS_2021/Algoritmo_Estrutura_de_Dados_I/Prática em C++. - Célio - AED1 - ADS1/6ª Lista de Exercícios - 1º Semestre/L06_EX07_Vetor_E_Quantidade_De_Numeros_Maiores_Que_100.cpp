/* 7) Escreva um algoritmo que leia um vetor de 10 elementos do tipo real e: 
 a) Mostre a quantidade de elementos maiores que 100. Se n�o existir nenhum 
elemento, mostre uma mensagem indicando esta situa��o; 
 b) Mostre a m�dia entre os elementos menores que 50. Se n�o existir nenhum 
elemento que satisfa�a esta condi��o, mostre uma mensagem indicando tal situa��o. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10
float vetor[T], mediaDosElementosMenoresQue50;
int quantidadeDeElementosMaioresQue100, divisorDosMenoresQue50, i;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CONTADOR DA QUANTIDADE DE ELEMENTOS MAIORES QUE 100 EM UM VETOR DE 10 ELEMENTOS: \n";

	i = 0;

	do {
		cout << "\n\t Por gentileza, digite um elemento: ";
		cin >> vetor[i];
		i++;
		
	} while (i < T);
	
	i = 0; quantidadeDeElementosMaioresQue100 = 0; divisorDosMenoresQue50 = 0;
	mediaDosElementosMenoresQue50 = 0;
	
	do {
		if (vetor[i] > 100) {
			quantidadeDeElementosMaioresQue100++;
		}
		if (vetor[i] < 50) {
			mediaDosElementosMenoresQue50 += vetor[i];
			divisorDosMenoresQue50++;
		}
		i++;
		
	} while (i < 10);

	if (quantidadeDeElementosMaioresQue100 == 0) {
		cout << "\n\t N�o foi digitado nenhum elemento maior que 100.";
	
	} else {
		cout << "\n\t Foram digitados " << quantidadeDeElementosMaioresQue100 << " elementos maiores que 100.";
	}

	if (mediaDosElementosMenoresQue50 == 0) {
		cout << "\n\n\t N�o foi digitado nenhum elemento menor que 50 para que a m�dia fosse calculada.";
	
	} else {
		cout << "\n\n\t A m�dia dos elementos menores que 50 �: " << mediaDosElementosMenoresQue50 / divisorDosMenoresQue50;
	}
	getch();
}
