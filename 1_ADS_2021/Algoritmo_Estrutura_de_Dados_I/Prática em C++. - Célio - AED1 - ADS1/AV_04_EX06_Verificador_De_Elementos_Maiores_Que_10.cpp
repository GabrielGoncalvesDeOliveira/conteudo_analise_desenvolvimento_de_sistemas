/* 6-) Escreva um algoritmo que leia uma matriz 6x6 e mostre
a quantidade de valores > 10 que ela possui.
Se não encontrar nenhum valor > 10, mostre a mensagem:
	"Não foram encontrados valores > 10." */
	
#include <iostream>
#include <conio.h>
using namespace std;

#define T 6

int matriz[T][T], i, j, cont = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t VERIFICADOR DE ELEMENTOS MAIORES QUE 10 EM UMA MATRIZ: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Digite o elemento ["<< i <<"]["<< j <<"]: ";
			cin >> matriz[i][j];
		}
	}
	
	// verifica se o valor do elemento é maior do que 10
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			if (matriz[i][j] > 10) {
				cont++;
			}
		}
	}
	
	// Verifica se nenhum valor maior do que 10 foi digitado
	if (cont == 0) {
		
		cout << "\n\t Não foram encontrados valores maiores que 10.";
	
	} else {
		
		cout << "\n\t Ao todo foram encontrados " << cont << " valores maiores do que 10.";	
	}
	
	getch();
}
