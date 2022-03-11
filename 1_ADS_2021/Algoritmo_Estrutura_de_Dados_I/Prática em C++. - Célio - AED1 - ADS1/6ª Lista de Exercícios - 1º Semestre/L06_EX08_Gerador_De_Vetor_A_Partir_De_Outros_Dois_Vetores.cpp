/* 8) Escreva um algoritmo que leia o vetor A de 5 elementos reais e o vetor B, do 
mesmo tamanho. A seguir gere o vetor C como sendo a soma dos vetores A e B. 
Mostre C. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 5
float vetorA[T], vetorB[T], vetorC[T];
int i;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO GERADOR DE VETOR A PARTIR DOS ELEMENTOS DE OUTROS DOIS VETORES: \n";
	
	i = 0;
	
	do {
		cout << "\n\t Digite o " << i + 1 << "º elemento do vetor A: ";
		cin >> vetorA[i];
		i++;
		
	} while (i < T);
	
	i = 0;
	
	do {
		cout << "\n\t Digite o " << i + 1 << "º elemento do vetor B: ";
		cin >> vetorB[i];
		i++;	
		
	} while (i < T);
	
	i = 0;
	
	do {
		vetorC[i] = vetorA[i] + vetorB[i];
		cout << "\n\n\t O valor do " << i + 1 << "º elemento do vetor C é: " << vetorC[i];
		i++;
		
	} while (i < T);
	getch();
}
