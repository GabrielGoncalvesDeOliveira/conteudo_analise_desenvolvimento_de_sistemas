/* 2-) Elabore um algoritmo que leia 10 n�meros reais, calcule e mostre:
a-) A soma entre os n�meros maiores que 30. 
b-) A m�dia entre os n�meros lidos. */

#include <iostream>
#include <conio.h>
using namespace std;

float numero, soma = 0, somaMaioresQue30 = 0;
int contador = 1;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO SOMADOR DE N�MEROS MAIORES QUE 30: \n";

	while (contador <= 10) {
		
		cout << "\n\t Por gentileza, digite o " << contador << "� n�mero: ";
		cin >> numero;	
			
		if (numero > 30) {
			somaMaioresQue30 += numero;
		
		}
		soma += numero;	
		
		contador++;
	}
	cout << "\n\t A soma dos n�meros maiores que 30 �: " << somaMaioresQue30;
	
	cout << "\n\n\t A m�dia dos n�meros lidos �: " << soma / 10;
}
