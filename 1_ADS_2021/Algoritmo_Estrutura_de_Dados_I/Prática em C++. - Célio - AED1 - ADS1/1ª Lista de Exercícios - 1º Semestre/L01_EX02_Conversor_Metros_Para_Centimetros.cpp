/* 2-) Fa�a um algoritmo que leia um valor em metros e transforme-o para cent�metros.
Imprima o resultado. */

#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

float valorEmMetros;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CONVERSOR DE UM VALOR EM METROS PARA CENTIMETROS \n";
	cout << "\n\t Digite o valor em metros: "; 
	cin >> valorEmMetros;
	
	cout << "\n\t O valor transformado em cent�metros �: " << valorEmMetros * 100 << " cm.";
	
	getch();
}
