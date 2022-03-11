/* Construa um algoritmo que leia 3 números reais. A seguir mostre  a
quantidade de números que são >= 0 e a quantidade de números que são < 0. */

#include <iostream>
#include <conio.h>
using namespace std;

float primeiro, segundo, terceiro;
int contadorPositivo, contadorNegativo;

int main() {
	
	setlocale(LC_ALL,"");
	
	contadorPositivo = 0;
	contadorNegativo = 0;
	
	cout << "\n\t ALGORITMO CONTADOR DA QUANTIDADE DE NÚMEROS POSITIVOS E NEGATIVOS: \n";
	
	cout << "\n\t Por gentileza, digite o primeiro número: ";
	cin >> primeiro;
	
	cout << "\n\t Certo, digite o segundo número: ";
	cin >> segundo;
	
	cout << "\n\t Agora, digite o terceiro número: ";
	cin >> terceiro;
	
	if (primeiro >= 0) {
		contadorPositivo++; // ou contadorPositivo += 1;
	
	} else {
		contadorNegativo++; // ou contadorNegativo += 1;
	}
	
	if (segundo >= 0) {
		contadorPositivo++;
	
	} else {
		contadorNegativo++;
	}
	
	if (terceiro >= 0) {
		contadorPositivo++;
	
	} else {
		contadorNegativo++;
	}
	
	cout << "\n\t A quantidade de números positivos (maiores ou iguais a zero) é: " << contadorPositivo;
	cout << "\n\t E, a quantidade de números negativos (menores que zero) é: " << contadorNegativo;
	
	getch();
}
