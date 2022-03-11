/* 3) Fa�a um algoritmo que leia um vetor de 10 elementos e mostre: 
 � A raiz quadrada de cada elemento: sqrt (n�mero); 
 � O cubo de cada elemento: pow (base, expoente). */
 
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

#define t 10

float v[t]; int i = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t LEITURA DO VETOR DE "<< t << " ELEMENTOS: \n";
	
	// Entrada dos elementos do vetor pelo usu�rio
	while (i < t) {
		
		cout << "\n\t Informe o valor de V["<< i <<"] : ";
		cin >> v[i];
		i++;
	}
	i = 0;
	
	// Processamento (c�lculo da raiz quadrada dos elementos)
	while (i < t) {
		
		if (v[i] < 0) {
			cout << "\n\n\t N�o existe ra�z quadrada real para de um n�mero negativo!";
		}
		cout << "\n\n\t C�lculo da ra�z quadrada do v["<< i <<"] : " << sqrt(v[i]);
		i++;
	}
	i = 0;
	
	// Processamento (c�lculo da raiz c�bica dos elementos)
	while (i < t) {
		
		cout << "\n\n\t C�lculo da ra�z c�bica do v["<< i <<"] : " << pow(v[i], 3);
		i++;
	}
	getch();
}
