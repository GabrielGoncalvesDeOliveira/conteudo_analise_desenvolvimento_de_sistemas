/* 15-) Faça um algoritmo que leia o salário de um funcionário, calcule e mostre o novo salário, 
sabendo-se que este sofre um aumento de 25%. Experimente multiplicar o salário por 1.25. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float salario; // float novoSalario;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADORA DE AUMENTO DE SALÁRIO: \n";
	cout << "\n\t Digite o salário atual, em R$ ";
	cin >> salario;
	cout << "\n\t O novo salário, com aumento de 25% é R$ " << salario * 1.25;
	
	getch();
}
