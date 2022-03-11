/* 10) Faça um algoritmo que calcule e imprima o seguinte somatório: 
S = 5/1 + 8/2 + 11/3 + ... + 32/10. */

#include <conio.h>
#include <iostream>
using namespace std;

float somatorio, somador;
float denominador, numerador;

int main() {
	
	setlocale(LC_ALL,"");
	
	numerador = 5;
	denominador = 1;
	somador = 5;
	somatorio = 0;
	
	cout << "\n\t ALGORITMO CALCULADOR DE SOMATÓRIO: \n";
	
	cout << "\n\t o resultado do somatório, para o valor de numerador " << numerador << " e o valor de denominador "
	<< denominador << " é: " << somatorio << ". \n";
	
	while (denominador < 10) {
		
		somador = numerador / denominador;
		
		somatorio += somador;
		
		numerador += 3;
		denominador += 1;
		
		cout << "\n\t o resultado do somatório, para o valor de numerador " << numerador << " e o valor de denominador "
		<< denominador << " é: " << somatorio << ". \n";
	}
	cout << "\n\t O resultado final do somatório é: " << somatorio;
}
