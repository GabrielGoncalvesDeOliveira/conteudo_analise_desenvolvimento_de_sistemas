/* 10) Fa�a um algoritmo que leia um vetor de 20 posi��es (a partir do �ndice 0) e 
imprima-o na ordem inversa (do 19� at� o 0� elemento). */

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
		cout << "\n\t O valor do elemento na posi��o Vet[" << i << "] �: " << vetor[i] << "\n";
		i--;
	}
	getch();
	
	/* Fazendo a impress�o dos valores com um for:
	* 
	* for (i = 0; i < T; i--) {
	*   cout << "\n\t O valor do elemento na posi��o Vet[" << i << "] �: " << vetor[i] << "\n";
	* }
	*/
}
