/* 6-) Fa�a um algoritmo que leia dois n�meros maiores que zero, A e B, por exemplo.
Calcule e mostre a exponencia��o entre A e B: */

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
using namespace std;

int primeiroNumero, segundoNumero;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADORA DA EXPONENCIA��O ENTRE DOIS N�MEROS: \n";
	cout << "\n\t Por favor, digite o primeiro n�mero: ";
	cin >> primeiroNumero;
	cout << "\n\t Certo, agora digite o segundo n�mero: ";
	cin >> segundoNumero;
	cout << "\n\t O valor da exponencia��o entre o n�mero " << primeiroNumero << " e o " << segundoNumero
	<< " �: " << pow(primeiroNumero, segundoNumero);
	
	getch();
}
