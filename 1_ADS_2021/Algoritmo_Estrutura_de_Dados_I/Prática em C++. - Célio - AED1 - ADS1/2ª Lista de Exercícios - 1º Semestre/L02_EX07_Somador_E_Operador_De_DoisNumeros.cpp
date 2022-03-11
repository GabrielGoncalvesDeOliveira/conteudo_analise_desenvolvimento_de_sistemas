/* 7-) Escreva um algoritmo que leia dois números e efetue a soma ente eles. Caso o valor
somado seja maior que 20, este deverá ser apresentado somando-se a ele mais 8; caso
o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5.  */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int primeiroValor, segundoValor, soma;

int main () {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t SOMADOR E OPERADOR ENTRE DOIS NÚMEROS: \n"; 
	
	cout << "\n\t Digite o primeiro valor: ";
	cin >> primeiroValor;
	cout << "\n\t Digite o segundo valor: ";
	cin >> segundoValor;
	
	soma = primeiroValor + segundoValor;
	
	if (soma > 20) {
		cout << "\n\t O valor somado (" << soma << ") é maior que 20, logo, acrescenta-se 8, " 
		<< "ficando " << soma + 8;
	} else if (soma == 20) {
		cout << "\n\t O valor somado (" << soma << ") é igual a 20, logo, subtrai-se 5,"
	 	<< "ficando " << soma - 5;
	} else {
		cout << "\n\t O valor somado (" << soma << ") é menor que 20, logo, subtrai-se 5, "
		<< "ficando " << soma - 5;
	}
	
	getch();
}
