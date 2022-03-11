/* 6-) Faça um algoritmo que leia um valor do tipo inteiro
e verifique se esse número é par ou ímpar. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int numero;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t VERIFICADOR SE NÚMERO É PAR OU SE É IMPAR: \n";
	
	cout << "\n\t Por gentileza, digite um número: ";
	cin >> numero;
	
	if (numero % 2 == 0) {
		cout << "\n\t O número " << numero << " é PAR. \n";
	} else {
		cout << "\n\t O número " << numero << " é ÍMPAR. \n";
	}
	
	getch();
}
