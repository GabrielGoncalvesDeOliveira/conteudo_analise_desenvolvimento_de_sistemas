/* 2-) Uma pessoa deseja economizar nas compras e, para isso, fez a cotação de 5 produtos em 3 supermercados.

Escreva um programa para armazenar os dados da cotação e depois imprimir o nome do mercado onde 
cada produto está mais barato, bem como o valor do produto. */

#include <iostream>
#include <conio.h>
using namespace std;

#define L 5
#define C 3

float m[L][C];
string prod[L] = { "Arroz", "Feijão", "Batata", "Groselha", "Carne" };
string merc[C] = { "Avenida", "SuperBom", "Amigão" };
int i, j, menorPreco;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t COMPARADOR DE PREÇOS DE PRODUTOS ENTRE MERCADOS DIFERENTES (TRABALHANDO COM VETORES E MATRIZES): \n";
	
	for (i = 0; i < L; i++) {
		
		cout << "\n\t Digite os preços do(a) " << prod[i] << ", \n";
		
		for (j = 0; j < C; j++) {
			
			cout << "\n\t No mercado " << merc[j] << ": R$ ";
			cin >> m[i][j];
		}
	}
	
	for (i = 0; i < L; i++) {
		
		menorPreco = 0;
		
		for (j = 0; j < C; j++) {
			
			if (m[i][j] < m[i][menorPreco]) {
				
				menorPreco = j;
			}
		}
		cout << "\n\t O mercado que possui o(a) " << prod[i] 
		<< " mais barato é o " << merc[menorPreco] << ", no valor de R$ " << m[i][menorPreco] << ". \n";
	}
	
	getch();
}
