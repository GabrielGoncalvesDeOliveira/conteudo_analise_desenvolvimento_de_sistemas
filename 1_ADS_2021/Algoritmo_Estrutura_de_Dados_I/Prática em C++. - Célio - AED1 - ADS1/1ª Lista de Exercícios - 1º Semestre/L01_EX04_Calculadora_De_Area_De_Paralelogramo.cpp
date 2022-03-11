/* 4-) Escreva um algoritmo que calcule e mostre a área do paralelogramo. Área = base * altura  */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float base, altura;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADORA DE ÁREAS DE PARALELOGRAMOS: \n";
	cout << "\n\t Por gentileza digite o valor da base do paralelogramo (em cm): ";
	cin >> base;
	cout << "\n\t Muito bem, agora digite o valor da altura do paralelogramo (em cm): ";
	cin >> altura;
	// area = base * altura;
	cout << "\n\t Bom, o valor da área do seu Paralelogramo, em cm, é: " << base * altura;
	
	getch();
}
