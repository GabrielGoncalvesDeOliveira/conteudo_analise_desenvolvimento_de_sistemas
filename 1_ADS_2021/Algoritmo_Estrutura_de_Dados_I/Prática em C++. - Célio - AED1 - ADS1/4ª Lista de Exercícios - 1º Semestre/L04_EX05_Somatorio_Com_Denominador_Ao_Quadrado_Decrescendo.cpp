/* 5) Faça um algoritmo que calcule e mostre o valor de H:
H = 1/225 - 2/196 + 4/169 - 8/144 + ... + 16384/1 */

#include <conio.h>
#include <iostream>
using namespace std;

float numerador, denominador, diferenca, sinal, somatorio;

int main() {
	
	setlocale(LC_ALL,"");
	
	numerador = 1; denominador = 225; diferenca = 29;
	sinal = 1; somatorio = 0;
	
	cout << "\n\t CALCULADOR DO SOMATÓRIO COM DENOMINADOR AO QUADRADO DECRESCENTE: \n";

	while (denominador >= 1) {
		
		somatorio = somatorio + sinal * numerador / denominador;
		
		cout << "\n\n\t O valor do Somatório H é: " << somatorio;
		
		numerador = numerador * 2;
		
		denominador = denominador - diferenca;
		
		diferenca = diferenca - 2;
		
		sinal = sinal * -1; // alterna o sinal entre +1 e -1;
	}
	getch();
}
