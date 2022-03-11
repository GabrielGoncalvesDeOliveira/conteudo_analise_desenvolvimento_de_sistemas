/* Exercício: Avaliação de Matrizes - 11.08.2021 - AED1 */

#include <iostream>
#include <conio.h>
using namespace std;
#define L 4
#define C 2
int matriz[L][C], soma, i, j;
int main() {
	setlocale(LC_ALL,"");
	cout << "\n\t Soma dos elementos de uma matriz: \n";
	for (i = 0; i < L; i++) {
		for (j = 0; j < C; j++) {
			cout << "\n\t Por gentileza digite o elemento ["<< i <<"]["<< j <<"]: ";
			cin >> matriz[i][j];
		}
	}
	soma = 0;
	i = 2;
	for (j = 0; j < C; j++) {
		soma += matriz[i][j];
	}
	cout << "\n\t A soma entre os elementos da 3ª linha da matriz é: " << soma;
	getch();
}
