/* 2º Bônus - Escreva um algoritmo que encontre o dobro de um número caso ele seja positivo
e o seu triplo caso seja negativo. Imprima os resultados */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int numero;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DO DOBRO OU DO TRIPLO DE UM NÚMERO: \n";
	
	cout << "\n\t Por gentileza, digite um número: ";
	cin >> numero;
	
	if (numero > 0) {
		cout << "\n\t Como o número é positivo: ";
		cout << "\n\t O dobro do número " << numero << " será: " << numero * 2;
	} else if (numero == 0) {
		cout << "\n\t Como o número é nulo (igual a zero): ";
		cout << "\n\t Nenhuma operação será feita, (número = " << numero << ")";
	} else {
		cout << "\n\t Como o número é negativo: ";
		cout << "\n\t O triplo do número " << numero << " será: " << numero * 3;
	}
	
	getch();
}
