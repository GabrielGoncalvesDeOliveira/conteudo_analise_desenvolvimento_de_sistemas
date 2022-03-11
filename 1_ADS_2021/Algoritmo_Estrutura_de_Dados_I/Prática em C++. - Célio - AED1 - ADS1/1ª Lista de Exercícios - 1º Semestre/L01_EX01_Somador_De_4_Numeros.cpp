// 1-) Construa um algoritmo que leia 4 números reais e mostre o somatório entre eles. 

#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

float numero1, numero2, numero3, numero4, soma;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADOR DA SOMA DE QUATRO NUMEROS REAIS: \n";
	cout << "\n\t Digite o 1º número: "; cin >> numero1;
	cout << "\n\t Digite o 2º número: "; cin >> numero2;
	cout << "\n\t Digite o 3º número: "; cin >> numero3;
	cout << "\n\t Digite o 4º número: "; cin >> numero4;
	
	soma = numero1 + numero2 + numero3 + numero4;
	
	cout << "\n\t O somatório destes quatro números é: " << soma;
	
	getch();	
}
