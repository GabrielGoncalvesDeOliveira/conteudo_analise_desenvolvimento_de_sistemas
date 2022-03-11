/* Escreva um programa ou algoritmo que leia um vetor A de 6 elementos, do tipo inteiro. 
Em seguida gere o vetor B, também de 6 elementos e do tipo inteiro, da seguinte forma:
- Guarde 0 em B se o conteúdo de A for: par e >= 10;
- Guarde 1 em B para qualquer outro valor de A.
- Mostre o vetor B. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 6
int vetorA[T], vetorB[T], i;

int main() {
	
	setlocale(LC_ALL,"");
	
	i = 0;
	
	do {
		cout << "\n\t Por gentileza digite um elemento: ";
		cin >> vetorA[i];
		i++;
		
	} while (i < 5);
	
	i = 0;
	
	do {
		if (vetorA[i] % 2 == 0 && vetorA[i] >= 10) {	
			
			vetorB[i] = 0;
		
		} else {
			vetorB[i] = 1;
		} 
		i++;
		
	} while (i < 5);
	
	i = 0;
	
	while (i < 5) {
		cout << "\n\t O novo vetor B possui como " << i + 1 << "º elemento o valor: " << vetorB[i] << ". \n";
		i++;
	}
	getch();
}
