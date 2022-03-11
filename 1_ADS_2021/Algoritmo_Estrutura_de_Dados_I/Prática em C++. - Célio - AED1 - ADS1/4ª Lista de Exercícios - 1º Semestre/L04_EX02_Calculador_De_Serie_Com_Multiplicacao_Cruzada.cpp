/* 2-) Faça um algoritmo que calcule e imprima o seguinte
somatório S:
S = (37*38)/1 + (36*37)/2 + (35*36)/3 + ... + (1*2)/37 */

#include <iostream>
#include <conio.h>
using namespace std;

float somatorio, termoADoNumerador, termoBDoNumerador, denominador;

int main () {
	
	setlocale(LC_ALL,"");

	somatorio = 0;
	termoADoNumerador = 37;
	termoBDoNumerador = 38;
	denominador = 1;
	
	cout << "\n\t ALGORITMO CALCULADOR DE SÉRIE COM MULTIPLICAÇÃO CRUZADA: ";

	while (denominador <= 37) {
		
		somatorio += termoADoNumerador * termoBDoNumerador / denominador;
		
		cout << "\n\n\t O valor do somatório, para os valores de "
		<< termoADoNumerador << " (1º termo do numerador)" << " e " 
		<< termoBDoNumerador << " (2º termo do numerador), com o " << denominador
		<< " (denominador) é: " << somatorio;

		termoADoNumerador--;
		termoBDoNumerador--;
		denominador++;
	}
	cout << "\n\n\t O resultado final do somatório é S = " << somatorio;

	getch();	
	
	/* Esse exercício pode ser feito com o operador unário (++ e --) antes
	ou depois das variáveis, na mesma linha em que são executadas, dentro
	da estrutura while. Esse incremento/decremento não precisa ser feito
	em outra linha, embora possa ser. */
}
