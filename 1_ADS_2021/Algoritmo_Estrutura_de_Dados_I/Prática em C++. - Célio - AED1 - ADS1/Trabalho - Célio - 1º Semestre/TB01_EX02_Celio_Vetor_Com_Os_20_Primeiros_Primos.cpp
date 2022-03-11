/* 2-) Escreva um programa que armazene em um vetor os 20 primeiros n�meros primos
e imprima o vetor gerado. 

Podemos reduzir o processamento ao substituir o teste que divide o n�mero por todas as
possibilidades at� a metade de seu valor, pelo teste que o divide pelos n�meros primos
anteriores a ele. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10000
int primo[T], i = 0, num = 1, div, cont;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t VETOR IMPRESSOR DOS 20 PRIMEIROS N�MEROS PRIMOS: \n";
	
	while (i < T) {
		
		div = 2; 
		cont = 0;
		
		while (div <= num / 2) {
			
			if (num % div == 0) {
				cont++;
			}
			div++;
		}
		if (cont == 0) {
			
			primo[i] = num;
			i++;
		}
		num++;
	}
	i = 0;
	
	while (i < T) {
		
		cout << "\n\t O " << i + 1 << " n�mero primo digitado foi o: " << primo[i] << "\n";
		i++;
	}
	getch();
}
