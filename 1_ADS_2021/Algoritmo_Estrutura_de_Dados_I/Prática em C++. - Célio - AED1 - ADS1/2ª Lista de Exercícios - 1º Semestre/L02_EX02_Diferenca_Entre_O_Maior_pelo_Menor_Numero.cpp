/* 2-) Construa um algoritmo que leia dois n�meros inteiros e mostre
o resultado da diferen�a do maior pelo menor valor */ 

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int numero1, numero2;
// int diferenca;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t PROGRAMA CALCULADOR DA DIFEREN�A ENTRE O MAIOR PELO MENOR N�MERO \n";
	cout << "\n\t Digite o primeiro n�mero: ";
	cin >> numero1;
	cout << "\n\t Digite o segundo n�mero: ";
	cin >> numero2;
	
	if (numero1 > numero2) {
		// diferenca = n1 - n2;
		cout << "\n\t A diferen�a entre o n�mero " << numero1 << " pelo n�mero " << numero2 << " �: " << numero1 - numero2;			
	} else {
		// diferenca = n2 - n2;
		cout << "\n\t A diferen�a entre o n�mero " << numero2 << " pelo n�mero " << numero1 << " �: " << numero2 - numero1;
	}
	
	getch();
}
