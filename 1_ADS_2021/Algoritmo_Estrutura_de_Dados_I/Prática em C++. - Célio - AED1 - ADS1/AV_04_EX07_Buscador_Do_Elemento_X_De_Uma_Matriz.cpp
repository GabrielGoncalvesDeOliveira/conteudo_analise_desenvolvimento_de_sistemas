/* 7-) Construa um programa que leia uma matriz 3x3 do tipo real.
Leia tamb�m um valor x. O programa dever� fazer uma busca de x na matriz.
Todas as vezes em que x aparecer na matriz, mostre a localiza��o de linha e de coluna.
Se x n�o aparecer na matriz, mostre a mensagem de "n�o encontrado". */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 3

float matriz[T][T], valorX;
int i, j;
bool valorXEncontrado = false;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t BUSCADOR DO ELEMENTO X NO MEIO DE UMA MATRIZ: \n";

	// Leitura dos elementos da matriz
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			cout << "\n\t Digite o elemento ["<< i <<"]["<< j <<"]: ";
			cin >> matriz[i][j];
		}
	}
	
	// Leitura do valor X
	cout << "\n\t Por gentileza, informe o valor de X: ";
	cin >> valorX;
	
	// Verifica se o elemento da matriz � igual ao valor inserido pelo usu�rio
	for (i = 0; i < T; i++) {
		
		for (j = 0; j < T; j++) {
			
			if (matriz[i][j] == valorX) {
				
				cout << "\n\t Valor X encontrado em M["<< i <<"]["<< j <<"]: ";
				valorXEncontrado = true;
			}
		}
	}
	
	// Verifica se nenhum valor igual a x foi encontrado
	if (!valorXEncontrado) {
		
		cout << "\n\t o valor X n�o foi encontrado na matriz.";
	}

	getch();
}	
