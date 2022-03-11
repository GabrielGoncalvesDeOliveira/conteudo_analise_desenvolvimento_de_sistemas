/* 1-) Construa um algoritmo que calcule e imprima
o somat�rio dos 30 primeiros termos da s�rie:

S = 480/10 + 475/11 + 470/12 + 465/13 + ... */

#include <iostream>
#include <conio.h>
using namespace std;

float numerador, denominador, somatorio;

int main () {
	
	setlocale(LC_ALL,"");
	
	numerador = 480;
	denominador = 10;
	somatorio = 0;
	
	cout << "\n\t ALGORITMO CALCULADOR DO SOMAT�RIO DE 30 TERMOS DE UMA S�RIE:";

	while (denominador <= 40) {
		
		somatorio += numerador / denominador;
		
		cout << "\n\n\t O valor do somat�rio, para os valores de "
		<< numerador << " (numerador)" << " e " << denominador << " (denominador) �: " << somatorio;
		
		numerador -= 5;
		denominador++;
	}
	cout << "\n\n\t O resultado final do somat�rio � S = " << somatorio;

	getch();
}

