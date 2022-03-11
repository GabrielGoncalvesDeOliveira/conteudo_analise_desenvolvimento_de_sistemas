/* 3-) Construa um algoritmo que calcule e imprima o
somatório dos 30 primeiros termos da série:
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
	
	cout << "\n\t SOMATÓRIO DOS 30 PRIMEIROS TERMOS DE UMA SÉRIE:";
	
	while (denominador <= 38) {
		
		somatorio += numerador / denominador;
		
		cout << "\n\n\t O valor do somatório, para os valores de "
		<< numerador << " (numerador)" << " e " << denominador
		<< " (denominador) é: " << somatorio;
		
		numerador -= 5;
		denominador++;
		
		somatorio -= numerador / denominador;
		
		cout << "\n\n\t O valor do somatório, para os valores de "
		<< numerador << " (numerador)" << " e " << denominador
		<< " (denominador) é: " << somatorio;
		
		numerador -= 5;
		denominador++;
	}
	cout << "\n\n\t O valor do somatório, para os valores de " 
	<< numerador << " (numerador)" << " e " << denominador << " (denominador) é: " << somatorio;
	cout << "\n\n\t O valor final do somatório é S = " << somatorio;
	
	getch();
	
	/* O exercício pode ser feito usando um contador também, 
	indo de 1 até 30, conforme pedido pelo enunciado.
	Aí no caso, ficaria "cont += 2;" ao final do While. */
}
