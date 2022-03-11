/* 1-) Construa um algoritmo que leia 10 números do tipo real.
Calcule e mostre:

a-) A quantidade de números positivos;
b-) A quantidade de números negativos;
c-) A quantidade de números nulos */

#include <iostream>
#include <conio.h>
using namespace std;

float numero;
int quantPositivo = 0, quantNegativo = 0, quantNulo = 0, contador = 1;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CONTADOR DE 10 NÚMEROS, COM ESTRUTURA DE REPETIÇÃO: \n";
	
	while (contador <= 10) {
		
		cout << "\n\t Por gentileza, digite o " << contador << "º número: ";
		cin >> numero;
		
		if (numero > 0) {
			quantPositivo++;
		
		} else if (numero == 0) {
			quantNulo++;
			
		} else {
			quantNegativo++;
		}
		contador++;
	}
	if (quantPositivo == 0) {
		cout << "\n\t Não foram digitados números Positivos.";
		
	} else {
		cout << "\n\t A quantidadede de números Positivos é: " << quantPositivo;
	}
	if (quantNegativo == 0) {
		cout << "\n\n\t Não foram digitados números Negativos."; 
		
	} else {
		cout << "\n\n\t A quantidade de números Negativos é: " << quantNegativo;
	}
	if (quantNulo == 0) {
		cout << "\n\n\t Não foram digitados números Nulos.";
	
	} else {
		cout << "\n\n\t Por fim, a quantidade de números Nulos é: " << quantNulo;
	}
	
	getch();
}
