/* 3-) Construa um algoritmo que calcule e imprima o
somat�rio dos 30 primeiros termos da s�rie:
S = 480/10 - 475/11 + 470/12 - 465/13 + ... */

#include <iostream>
#include <conio.h>
using namespace std;

float somatorio, numerador, denominador;

int main () {
	
	setlocale(LC_ALL,"");
	
	somatorio = 0;
	numerador = 480;
	denominador = 10;
	
	cout << "\n\t SOMAT�RIO DOS 30 PRIMEIROS TERMOS DE UMA S�RIE:";
	
	while (denominador <= 38) {
		
		somatorio += numerador / denominador;
		
		cout << "\n\n\t O valor do somat�rio, para os valores de "
		<< numerador << " (numerador)" << " e " << denominador
		<< " (denominador) �: " << somatorio;
		
		numerador -= 5;
		denominador++;
		
		somatorio -= numerador / denominador;
		
		cout << "\n\n\t O valor do somat�rio, para os valores de "
		<< numerador << " (numerador)" << " e " << denominador
		<< " (denominador) �: " << somatorio;
		
		numerador -= 5;
		denominador++;
	}
	cout << "\n\n\t O valor do somat�rio, para os valores de " 
	<< numerador << " (numerador)" << " e " << denominador << " (denominador) �: " << somatorio;
	cout << "\n\n\t O valor final do somat�rio � S = " << somatorio;
	
	getch();
	
	/* O exerc�cio pode ser feito usando um contador tamb�m, 
	indo de 1 at� 30, conforme pedido pelo enunciado.
	A� no caso, ficaria "cont += 2;" ao final do While. */
}
