/* 5) Fa�a um algoritmo que leia 15 n�meros inteiros e mostre: 
a) A quantidade de n�meros entre 30 e 90 (inclusive os extremos); 
b) O somat�rio dos n�meros negativos; 
c) A quantidade de n�meros �mpares.  */

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
	
	cout << "\n\t ALGORITMO CONTADOR DE N�MEROS ENTRE 30 E 90, NEGATIVOS, E N�MEROS �MPARES:  \n";
	
	while (contador <= 15) {
		
		cout << "\n\t Por gentileza, digite o " << contador << "� n�mero: ";
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
		cout << "\n\t N�o foram digitados n�meros entre 30 e 90.";
		
	} else {
		cout << "\n\t A quantidade de n�meros entre 30 e 90 �: " << quantidadeDeNumerosEntre30e90;
	}
	cout << "\n\n\t O somat�rio dos n�meros negativos �: " << somaDeNegativos;
	
	if (quantidadeDeImpares == 0) {
		cout << "\n\n\t N�o foram encontrados n�meros �mpares.";
		
	} else {		
		cout << "\n\n\t A quantidade de n�meros �mpares �: " << quantidadeDeImpares;
	}
	if (quantidadeDeNumerosEntre30e90 == 0 && somaDeNegativos == 0 && quantidadeDeImpares == 0) {
		cout << "\n\n\t Infelizmente nenhuma condi��o foi satisfeita.";
	}
	
	getch();
}
