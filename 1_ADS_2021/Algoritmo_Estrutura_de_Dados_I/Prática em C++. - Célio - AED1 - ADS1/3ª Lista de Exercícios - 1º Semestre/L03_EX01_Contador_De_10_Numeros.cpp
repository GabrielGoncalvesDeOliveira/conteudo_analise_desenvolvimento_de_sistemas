/* 1-) Construa um algoritmo que leia 10 n�meros do tipo real.
Calcule e mostre:

a-) A quantidade de n�meros positivos;
b-) A quantidade de n�meros negativos;
c-) A quantidade de n�meros nulos */

#include <iostream>
#include <conio.h>
using namespace std;

float numero;
int quantPositivo = 0, quantNegativo = 0, quantNulo = 0, contador = 1;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CONTADOR DE 10 N�MEROS, COM ESTRUTURA DE REPETI��O: \n";
	
	while (contador <= 10) {
		
		cout << "\n\t Por gentileza, digite o " << contador << "� n�mero: ";
		cin >> numero;
		
		if (numero > 0) {
			quantPositivo++;
		
		} else if (numero == 0) {
			quantNulo++;
			
		} else {
			quantNegativo++;
		}
		contador++;
	}
	if (quantPositivo == 0) {
		cout << "\n\t N�o foram digitados n�meros Positivos.";
		
	} else {
		cout << "\n\t A quantidadede de n�meros Positivos �: " << quantPositivo;
	}
	if (quantNegativo == 0) {
		cout << "\n\n\t N�o foram digitados n�meros Negativos."; 
		
	} else {
		cout << "\n\n\t A quantidade de n�meros Negativos �: " << quantNegativo;
	}
	if (quantNulo == 0) {
		cout << "\n\n\t N�o foram digitados n�meros Nulos.";
	
	} else {
		cout << "\n\n\t Por fim, a quantidade de n�meros Nulos �: " << quantNulo;
	}
	
	getch();
}
