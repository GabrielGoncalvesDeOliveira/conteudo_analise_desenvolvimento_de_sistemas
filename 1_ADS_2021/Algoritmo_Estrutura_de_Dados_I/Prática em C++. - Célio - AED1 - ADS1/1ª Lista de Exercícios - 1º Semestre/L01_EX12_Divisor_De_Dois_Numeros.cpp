/* 12-) Construa um algoritmo que leia dois números inteiros, divida um pelo outro e
mostre o resto da divisão (suponha que será dividido o maior pelo menor).  */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int primeiroNumero, segundoNumero;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t DIVISOR DE DOIS NÚMEROS QUE EXIBE O RESTO DA DIVISÃO: \n";
	cout << "\n\t Digite o primeiro número: ";
	cin >> primeiroNumero;
	cout << "\n\t Digite o segundo número: ";
	cin >> segundoNumero;
	
	if (primeiroNumero > segundoNumero) {
		cout << "\n\t O resto da divisão do número " << primeiroNumero << " por " << segundoNumero << " é: "
		<< primeiroNumero % segundoNumero;
	} else {
		cout << "\n\t o resto da divisão do número " << segundoNumero << " por " << primeiroNumero << " é: "
		<< segundoNumero % primeiroNumero;
	}
	
	getch();
}
