/* 2-) Elabore um algoritmo que leia 10 números reais, calcule e mostre:
a-) A soma entre os números maiores que 30. 
b-) A média entre os números lidos. */

#include <iostream>
#include <conio.h>
using namespace std;

float numero, soma = 0, somaMaioresQue30 = 0;
int contador = 1;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO SOMADOR DE NÚMEROS MAIORES QUE 30: \n";

	while (contador <= 10) {
		
		cout << "\n\t Por gentileza, digite o " << contador << "º número: ";
		cin >> numero;	
			
		if (numero > 30) {
			somaMaioresQue30 += numero;
		
		}
		soma += numero;	
		
		contador++;
	}
	cout << "\n\t A soma dos números maiores que 30 é: " << somaMaioresQue30;
	
	cout << "\n\n\t A média dos números lidos é: " << soma / 10;
}
