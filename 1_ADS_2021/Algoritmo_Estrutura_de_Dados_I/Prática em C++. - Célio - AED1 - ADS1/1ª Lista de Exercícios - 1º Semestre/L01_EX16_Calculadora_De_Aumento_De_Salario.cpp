/* 16-) Construa um algoritmo que leia o sal�rio de um funcion�rio
e o percentual de aumento, calcule e mostre o valor do novo sal�rio. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float salario, percentualDeAumento;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADORA DE AUMENTO DE SAL�RIO \n";
	cout << "\n\t Por gentileza, digite seu sal�rio: R$ "; 
	cin >> salario;
	cout << "\n\t Informe o percentual de aumento: ";
	cin >> percentualDeAumento;
	
	salario = salario + (salario * percentualDeAumento / 100);
	
	cout << "\n\t O seu novo sal�rio �: R$ " << salario;
	
	getch();
	
	/* float salario, percentual, novoSalario; 
		cout << "informe o sal�rio: ";
		cin >> salario;
		cout << "informe o percentual de aumento";
		cin >> percentual;
		novoSalario = salario + (salario * percentual / 100);
		cout << "O novo sal�rio �: " << novoSalario;
	*/
	
} 
