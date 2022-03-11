/* 2-) Fa�a um algoritmo que calcule e imprima o seguinte
somat�rio S:
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
	
	cout << "\n\t ALGORITMO CALCULADOR DE S�RIE COM MULTIPLICA��O CRUZADA: ";

	while (denominador <= 37) {
		
		somatorio += termoADoNumerador * termoBDoNumerador / denominador;
		
		cout << "\n\n\t O valor do somat�rio, para os valores de "
		<< termoADoNumerador << " (1� termo do numerador)" << " e " 
		<< termoBDoNumerador << " (2� termo do numerador), com o " << denominador
		<< " (denominador) �: " << somatorio;

		termoADoNumerador--;
		termoBDoNumerador--;
		denominador++;
	}
	cout << "\n\n\t O resultado final do somat�rio � S = " << somatorio;

	getch();	
	
	/* Esse exerc�cio pode ser feito com o operador un�rio (++ e --) antes
	ou depois das vari�veis, na mesma linha em que s�o executadas, dentro
	da estrutura while. Esse incremento/decremento n�o precisa ser feito
	em outra linha, embora possa ser. */
}
