// 1-) Construa um algoritmo que leia 4 n�meros reais e mostre o somat�rio entre eles. 

#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

float numero1, numero2, numero3, numero4, soma;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADOR DA SOMA DE QUATRO NUMEROS REAIS: \n";
	cout << "\n\t Digite o 1� n�mero: "; cin >> numero1;
	cout << "\n\t Digite o 2� n�mero: "; cin >> numero2;
	cout << "\n\t Digite o 3� n�mero: "; cin >> numero3;
	cout << "\n\t Digite o 4� n�mero: "; cin >> numero4;
	
	soma = numero1 + numero2 + numero3 + numero4;
	
	cout << "\n\t O somat�rio destes quatro n�meros �: " << soma;
	
	getch();	
}
