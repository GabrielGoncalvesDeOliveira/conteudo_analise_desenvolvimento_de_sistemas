/* 5) Faça um algoritmo que leia 15 números inteiros e mostre: 
a) A quantidade de números entre 30 e 90 (inclusive os extremos); 
b) O somatório dos números negativos; 
c) A quantidade de números ímpares.  */

#include <conio.h>
#include <iostream>
using namespace std;

int contador, numero, quantidadeDeNumerosEntre30e90, somaDeNegativos, quantidadeDeImpares; 

int main() {
	
	contador = 1;
	quantidadeDeNumerosEntre30e90 =0;
	somaDeNegativos = 0;
	quantidadeDeImpares = 0;
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO CONTADOR DE NÚMEROS ENTRE 30 E 90, NEGATIVOS, E NÚMEROS ÍMPARES:  \n";
	
	while (contador <= 15) {
		
		cout << "\n\t Por gentileza, digite o " << contador << "º número: ";
		cin >> numero;
		
		if (numero >= 30 && numero <= 90) {
			quantidadeDeNumerosEntre30e90++;
		}
		if (numero < 0) {
			somaDeNegativos += numero;
		}
		if (numero % 2 != 0) {
			quantidadeDeImpares++;
		}
		contador++;
	}
	if (quantidadeDeNumerosEntre30e90 == 0) {
		cout << "\n\t Não foram digitados números entre 30 e 90.";
		
	} else {
		cout << "\n\t A quantidade de números entre 30 e 90 é: " << quantidadeDeNumerosEntre30e90;
	}
	cout << "\n\n\t O somatório dos números negativos é: " << somaDeNegativos;
	
	if (quantidadeDeImpares == 0) {
		cout << "\n\n\t Não foram encontrados números ímpares.";
		
	} else {		
		cout << "\n\n\t A quantidade de números ímpares é: " << quantidadeDeImpares;
	}
	if (quantidadeDeNumerosEntre30e90 == 0 && somaDeNegativos == 0 && quantidadeDeImpares == 0) {
		cout << "\n\n\t Infelizmente nenhuma condição foi satisfeita.";
	}
	
	getch();
}
