/* 2� B�nus - Escreva um algoritmo que encontre o dobro de um n�mero caso ele seja positivo
e o seu triplo caso seja negativo. Imprima os resultados */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int numero;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DO DOBRO OU DO TRIPLO DE UM N�MERO: \n";
	
	cout << "\n\t Por gentileza, digite um n�mero: ";
	cin >> numero;
	
	if (numero > 0) {
		cout << "\n\t Como o n�mero � positivo: ";
		cout << "\n\t O dobro do n�mero " << numero << " ser�: " << numero * 2;
	} else if (numero == 0) {
		cout << "\n\t Como o n�mero � nulo (igual a zero): ";
		cout << "\n\t Nenhuma opera��o ser� feita, (n�mero = " << numero << ")";
	} else {
		cout << "\n\t Como o n�mero � negativo: ";
		cout << "\n\t O triplo do n�mero " << numero << " ser�: " << numero * 3;
	}
	
	getch();
}
