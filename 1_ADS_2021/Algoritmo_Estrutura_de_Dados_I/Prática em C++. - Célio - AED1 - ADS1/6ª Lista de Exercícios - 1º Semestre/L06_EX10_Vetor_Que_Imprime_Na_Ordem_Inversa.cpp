/* 10) Faça um algoritmo que leia um vetor de 20 posições (a partir do índice 0) e 
imprima-o na ordem inversa (do 19º até o 0º elemento). */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 20
int vetor[T], i;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t VETOR QUE ARMAZENA VALORES E OS IMPRIME NA ORDEM INVERSA: \n";
	
	for (i = 0; i < T; i++) {
		cout << "\n\t Digite o valor do elemento Vet[" << i << "] : ";
		cin >> vetor[i];
	}
	i = T -1;
	
	while (i >= 0) {
		cout << "\n\t O valor do elemento na posição Vet[" << i << "] é: " << vetor[i] << "\n";
		i--;
	}
	getch();
	
	/* Fazendo a impressão dos valores com um for:
	* 
	* for (i = 0; i < T; i--) {
	*   cout << "\n\t O valor do elemento na posição Vet[" << i << "] é: " << vetor[i] << "\n";
	* }
	*/
}
