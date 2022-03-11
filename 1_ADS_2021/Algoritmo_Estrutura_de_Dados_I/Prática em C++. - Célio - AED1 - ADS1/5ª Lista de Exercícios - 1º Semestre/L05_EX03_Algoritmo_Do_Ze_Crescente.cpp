/* 3-) Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro
e cresce 3 centímetros por ano. Constru um algoritmo que calcule e imprima
quantos anos serão necessários para que Zé seja maior que Chico. */

#include <iostream>
#include <conio.h>
using namespace std;

float alturaDoZe, alturaDoChico; 
int tempoEmAnos;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO DO ZÉ CRESCENTE: \n";

	alturaDoZe = 1.10; alturaDoChico = 1.50; tempoEmAnos = 0;
	
	do {
		
		alturaDoChico = alturaDoChico * 1.02;
		alturaDoZe = alturaDoZe * 1.03;
		tempoEmAnos++;
		
	} while (alturaDoZe < alturaDoChico);
	
	cout << "\n\t Serão necessários " << tempoEmAnos << " anos para que Zé seja mais alto do que o Chico.";
	
	cout << "\n\n\t A altura do Zé é: " << alturaDoZe;
	cout << "\n\n\t e a altura do Chico é: " << alturaDoChico;
	
	getch();
}
