/* 6-) Faça um algoritmo que leia dois números maiores que zero, A e B, por exemplo.
Calcule e mostre a exponenciação entre A e B: */

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;

int primeiroNumero, segundoNumero;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADORA DA EXPONENCIAÇÃO ENTRE DOIS NÚMEROS: \n";
	cout << "\n\t Por favor, digite o primeiro número: ";
	cin >> primeiroNumero;
	cout << "\n\t Certo, agora digite o segundo número: ";
	cin >> segundoNumero;
	cout << "\n\t O valor da exponenciação entre o número " << primeiroNumero << " e o " << segundoNumero
	<< " é: " << pow(primeiroNumero, segundoNumero);
	
	getch();
}
