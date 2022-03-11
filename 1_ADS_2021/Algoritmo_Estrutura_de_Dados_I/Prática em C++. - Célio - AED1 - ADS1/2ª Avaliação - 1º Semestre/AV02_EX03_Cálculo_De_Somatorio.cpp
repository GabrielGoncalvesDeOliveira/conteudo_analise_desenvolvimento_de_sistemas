/* Questão 3 */

#include <iostream>
#include <conio.h>
using namespace std;

float somatorio, numerador, denominador, multNumerador, subtDenominador;

int main() {
	
	setlocale(LC_ALL,"");

	somatorio = 0;
	numerador = 1;
	denominador = 1;
	multNumerador = 1;
	subtDenominador = 0;
	
	while(denominador <= 50) {
		
		somatorio = somatorio + numerador / denominador;
		
		multNumerador = multNumerador * numerador;
		
		subtDenominador = subtDenominador  - denominador;
		
		numerador = numerador + 2;
		
		denominador = denominador + 1;
	}
	cout << "\n\t O valor do somatório é: " << somatorio;
	
	cout << "\n\n\t O resultado da multiplicação entre todos os valores do numerador é: " << multNumerador;
	
	cout << "\n\n\t O resultado da subtração entre todos os valores do denominador é: " << subtDenominador;
	getch();
}
