// Algoritmo calculador da sequência de Fibonacci

#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;
	
int primeiro, segundo, limite, contador, valor;

int main() {
	
	setlocale(LC_ALL,"");
	
	valor = -1;
	primeiro = 0;
	segundo = 1;
	
	cout << "\n\t ALGORITMO CALCULADOR DA SEQUÊNCIA DE FIBONACCI: \n";
	
	cout << "\n\t =============================================== \n";
	
	cout << "\n\t Por gentileza, digite o limite da sequência: ";
	cin >> limite;
	
	while (contador < limite) {
		
		valor = primeiro;
		
		cout << "\n\t " << valor << "\n";
		
		primeiro = segundo; 
		
		segundo = primeiro + valor;
		
		contador++;		
	}
}
