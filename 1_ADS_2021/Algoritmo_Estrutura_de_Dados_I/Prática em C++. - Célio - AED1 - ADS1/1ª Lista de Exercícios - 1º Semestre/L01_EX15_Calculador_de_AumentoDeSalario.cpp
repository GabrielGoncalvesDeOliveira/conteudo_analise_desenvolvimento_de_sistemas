/* 15-) Fa�a um algoritmo que leia o sal�rio de um funcion�rio, calcule e mostre o novo sal�rio, 
sabendo-se que este sofre um aumento de 25%. Experimente multiplicar o sal�rio por 1.25. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float salario; // float novoSalario;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADORA DE AUMENTO DE SAL�RIO: \n";
	cout << "\n\t Digite o sal�rio atual, em R$ ";
	cin >> salario;
	cout << "\n\t O novo sal�rio, com aumento de 25% � R$ " << salario * 1.25;
	
	getch();
}
