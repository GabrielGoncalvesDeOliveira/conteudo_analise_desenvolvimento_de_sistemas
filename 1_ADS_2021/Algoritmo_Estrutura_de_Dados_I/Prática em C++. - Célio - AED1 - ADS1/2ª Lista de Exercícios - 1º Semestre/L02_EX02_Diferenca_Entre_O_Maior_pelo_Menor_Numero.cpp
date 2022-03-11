/* 2-) Construa um algoritmo que leia dois números inteiros e mostre
o resultado da diferença do maior pelo menor valor */ 

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int numero1, numero2;
// int diferenca;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t PROGRAMA CALCULADOR DA DIFERENÇA ENTRE O MAIOR PELO MENOR NÚMERO \n";
	cout << "\n\t Digite o primeiro número: ";
	cin >> numero1;
	cout << "\n\t Digite o segundo número: ";
	cin >> numero2;
	
	if (numero1 > numero2) {
		// diferenca = n1 - n2;
		cout << "\n\t A diferença entre o número " << numero1 << " pelo número " << numero2 << " é: " << numero1 - numero2;			
	} else {
		// diferenca = n2 - n2;
		cout << "\n\t A diferença entre o número " << numero2 << " pelo número " << numero1 << " é: " << numero2 - numero1;
	}
	
	getch();
}
