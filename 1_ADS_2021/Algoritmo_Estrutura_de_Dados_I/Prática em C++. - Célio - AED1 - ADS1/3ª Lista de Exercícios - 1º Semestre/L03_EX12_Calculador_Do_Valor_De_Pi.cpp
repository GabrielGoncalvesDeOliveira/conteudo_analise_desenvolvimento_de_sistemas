/* 13) Fa�a um algoritmo que calcule e imprima o valor do n�mero PI, utilizando a 
seguinte s�rie: 
	
	PI = 4 - (4/3) + (4/5) - (4/7) + (4/9) - (4/11) + ...

Para garantir o n�mero 3.1415 execute a rotina, pelo menos, 5000 vezes. */

#include <iostream>
#include <conio.h>
using namespace std;

float pi; 
int denominador, contador, sinal;

int main() {
	
	setlocale(LC_ALL,"");
	
	denominador = 3; contador = 1; pi = 0; sinal = 1;
	
	cout << "\n\t ALGORITMO CALCULADOR DO VALOR DE PI, UTILIZANDO S�RIE: \n";
	
	while (contador <= 2500) {
		
		pi += 4 + sinal * (4 / denominador);
		
		cout << "\n\t O valor de Pi no momento �: " << pi;
		cout << "\n\t O valor do sinal �: " << sinal;
		
		denominador + 2;
		sinal *= -1;
		contador++;
		
		pi += sinal * (4/denominador); 
		
		cout << "\n\t O valor de Pi no momento �: " << pi;
		cout << "\n\t O valor do sinal �: " << sinal;
		
		denominador + 2;
		sinal *= -1;
		contador++;
	}
	getch();
}
