/* 14-) Fa�a um algoritmo que leia um valor em quilometro e transforme-o para metros.
Imprima o resultado. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float valorEmQuilometros;

int main() {
	
	setlocale(LC_ALL,"");
	cout << "\n\t CONVERSOR DE QUIL�METROS PARA METROS: \n";
	cout << "\n\t Digite um valor em quil�metros: ";
	cin >> valorEmQuilometros;
	cout << "\n\t O valor de " << valorEmQuilometros << " km corresponde a: " << valorEmQuilometros * 1000 << " metros.";
	
	getch();
}
