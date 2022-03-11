/* 11) Construa um algoritmo que leia dois vetores de 5 elementos cada um. A seguir 
gere um terceiro vetor a partir da intercalação dos dois vetores lidos. Mostre o vetor 
gerado. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 5
int vetA[T], vetB[T], vetC[10], i, j;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO GERADOR DE VETOR PELA INTERCALACAO ENTRE DOIS VETORES: \n";
	
	i = 0;
	
	do {
		cout << "\n\t Digite o elemento do vetor A na posição vet[" << i << "]: ";
		cin >> vetA[i];
		i++;
		
	} while (i < T);
	
	i = 0;
	
	do {
		cout << "\n\t Digite o elemento do vetor B na posição vet[" << i << "]: ";
		cin >> vetB[i];
		i++;
	
	} while (i < T);
	
	i = 0; j = 0;
	
	do {
		vetC[j] = vetA[i];
		j = j + 1;
		vetC[j] = vetB[i];
		j = j + 1;
		i = i + 1;
		
	} while (i < T);
	
	i = 0;
	
	do {
		cout << "\n\t O valor do novo vetor C, na posição [" << i << "] é: " << vetC[i] << "\n";
		i++;
		
	} while (i < 10);
	
	getch();
}
