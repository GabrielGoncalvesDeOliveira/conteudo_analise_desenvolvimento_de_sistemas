/* 3-) Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 1,10 metro
e cresce 3 cent�metros por ano. Constru um algoritmo que calcule e imprima
quantos anos ser�o necess�rios para que Z� seja maior que Chico. */

#include <iostream>
#include <conio.h>
using namespace std;

float alturaDoZe, alturaDoChico; 
int tempoEmAnos;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO DO Z� CRESCENTE: \n";

	alturaDoZe = 1.10; alturaDoChico = 1.50; tempoEmAnos = 0;
	
	do {
		
		alturaDoChico = alturaDoChico * 1.02;
		alturaDoZe = alturaDoZe * 1.03;
		tempoEmAnos++;
		
	} while (alturaDoZe < alturaDoChico);
	
	cout << "\n\t Ser�o necess�rios " << tempoEmAnos << " anos para que Z� seja mais alto do que o Chico.";
	
	cout << "\n\n\t A altura do Z� �: " << alturaDoZe;
	cout << "\n\n\t e a altura do Chico �: " << alturaDoChico;
	
	getch();
}
