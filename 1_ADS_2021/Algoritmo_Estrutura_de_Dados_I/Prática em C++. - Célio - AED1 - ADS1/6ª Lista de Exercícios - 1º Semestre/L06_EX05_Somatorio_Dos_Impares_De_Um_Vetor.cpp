/* 5) Escreva um algoritmo que calcule e mostre o somat�rio 
dos �mpares de um vetor M de 6 elementos inteiros. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 6
int vetM[T], somatorio; int i = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DO SOMAT�RIO DOS �MPARES DE UM VETOR M DE 6 ELEMENTOS: \n";
	
	while (i < T) {
		
		cout << "\n\t Digite um n�mero: ";
		cin >> vetM[i];
		i++;
	}
	i = 0;
	
	while (i < T) {
		
		if (vetM[i] % 2 != 0) {
			
			somatorio += vetM[i];
		}
		i++;
	}
	i = 0;
	
	cout << "\n\t O somat�rio dos �mpares de um vetor M de 6 elementos �: "
		<< somatorio;
	
	getch();
}
