/* 6-) Fa�a um algoritmo que leia um valor do tipo inteiro
e verifique se esse n�mero � par ou �mpar. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int numero;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t VERIFICADOR SE N�MERO � PAR OU SE � IMPAR: \n";
	
	cout << "\n\t Por gentileza, digite um n�mero: ";
	cin >> numero;
	
	if (numero % 2 == 0) {
		cout << "\n\t O n�mero " << numero << " � PAR. \n";
	} else {
		cout << "\n\t O n�mero " << numero << " � �MPAR. \n";
	}
	
	getch();
}
