/* 4-) Escreva um algoritmo que calcule e mostre a �rea do paralelogramo. �rea = base * altura  */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float base, altura;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADORA DE �REAS DE PARALELOGRAMOS: \n";
	cout << "\n\t Por gentileza digite o valor da base do paralelogramo (em cm): ";
	cin >> base;
	cout << "\n\t Muito bem, agora digite o valor da altura do paralelogramo (em cm): ";
	cin >> altura;
	// area = base * altura;
	cout << "\n\t Bom, o valor da �rea do seu Paralelogramo, em cm, �: " << base * altura;
	
	getch();
}
