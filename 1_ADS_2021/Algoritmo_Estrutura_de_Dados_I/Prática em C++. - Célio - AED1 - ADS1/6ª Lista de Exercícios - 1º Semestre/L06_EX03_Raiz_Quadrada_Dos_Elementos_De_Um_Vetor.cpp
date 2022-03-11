/* 3) Faça um algoritmo que leia um vetor de 10 elementos e mostre: 
 · A raiz quadrada de cada elemento: sqrt (número); 
 · O cubo de cada elemento: pow (base, expoente). */
 
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

#define t 10

float v[t]; int i = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t LEITURA DO VETOR DE "<< t << " ELEMENTOS: \n";
	
	// Entrada dos elementos do vetor pelo usuário
	while (i < t) {
		
		cout << "\n\t Informe o valor de V["<< i <<"] : ";
		cin >> v[i];
		i++;
	}
	i = 0;
	
	// Processamento (cálculo da raiz quadrada dos elementos)
	while (i < t) {
		
		if (v[i] < 0) {
			cout << "\n\n\t Não existe raíz quadrada real para de um número negativo!";
		}
		cout << "\n\n\t Cálculo da raíz quadrada do v["<< i <<"] : " << sqrt(v[i]);
		i++;
	}
	i = 0;
	
	// Processamento (cálculo da raiz cúbica dos elementos)
	while (i < t) {
		
		cout << "\n\n\t Cálculo da raíz cúbica do v["<< i <<"] : " << pow(v[i], 3);
		i++;
	}
	getch();
}
