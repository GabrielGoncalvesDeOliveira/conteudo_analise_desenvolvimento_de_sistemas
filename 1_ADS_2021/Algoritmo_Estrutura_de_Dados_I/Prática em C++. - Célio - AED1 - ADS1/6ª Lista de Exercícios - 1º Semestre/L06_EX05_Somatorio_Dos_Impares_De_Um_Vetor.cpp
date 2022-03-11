/* 5) Escreva um algoritmo que calcule e mostre o somatório 
dos ímpares de um vetor M de 6 elementos inteiros. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 6
int vetM[T], somatorio; int i = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DO SOMATÓRIO DOS ÍMPARES DE UM VETOR M DE 6 ELEMENTOS: \n";
	
	while (i < T) {
		
		cout << "\n\t Digite um número: ";
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
	
	cout << "\n\t O somatório dos ímpares de um vetor M de 6 elementos é: "
		<< somatorio;
	
	getch();
}
