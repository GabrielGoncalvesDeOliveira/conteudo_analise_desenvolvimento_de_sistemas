/* 4) Faça um algoritmo que: 
 a) Leia um número N (apenas uma vez – fora do laço); 
 b) Leia um vetor VET de 10 posições do tipo real; 
 c) Multiplique cada elemento de VET por N e atualize VET; 
 d) Mostre o novo VET. */
 
#include <iostream>
#include <conio.h>
using namespace std;

#define T 10
float numero, vet[T]; int indice = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t Digite um número: ";
	cin >> numero;
	
	do {
		cout << "\n\t Digite o valor de VET[" << indice << "] : ";
		cin >> vet[indice];
		
		vet[indice] = vet[indice] * numero;
		 
		cout << "\n\t O elemento multiplicado por " << numero << " é: " << vet[indice] << ". \n";
		 
		indice++;
		 
	} while (indice < T);
	
	getch();
}
