/* Construa um algoritmo que leia 3 n�meros reais. A seguir mostre  a
quantidade de n�meros que s�o >= 0 e a quantidade de n�meros que s�o < 0. */

#include <iostream>
#include <conio.h>
using namespace std;

float primeiro, segundo, terceiro;
int contadorPositivo, contadorNegativo;

int main() {
	
	setlocale(LC_ALL,"");
	
	contadorPositivo = 0;
	contadorNegativo = 0;
	
	cout << "\n\t ALGORITMO CONTADOR DA QUANTIDADE DE N�MEROS POSITIVOS E NEGATIVOS: \n";
	
	cout << "\n\t Por gentileza, digite o primeiro n�mero: ";
	cin >> primeiro;
	
	cout << "\n\t Certo, digite o segundo n�mero: ";
	cin >> segundo;
	
	cout << "\n\t Agora, digite o terceiro n�mero: ";
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
	
	cout << "\n\t A quantidade de n�meros positivos (maiores ou iguais a zero) �: " << contadorPositivo;
	cout << "\n\t E, a quantidade de n�meros negativos (menores que zero) �: " << contadorNegativo;
	
	getch();
}
