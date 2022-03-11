/* 7) Sendo H = 1 + ½ + 1/3 + ¼ + ... + 1/N, elabore um algoritmo 
para gerar e imprimir o número H. O valor de N deverá ser lido.  */

#include <iostream>
#include <conio.h>
using namespace std;

float somatorio, contador;
int denominadorN; 

int main() {

	setlocale(LC_ALL,"");
	
	cout << "\n\t SOMATÓRIO COM DENOMINADOR CRESCENTE ATÉ O LIMITE LIDO: \n";
	
	contador = 1; somatorio = 0;
	
	cout << "\n\t Digite o valor de N: ";
	cin >> denominadorN;
	
	while (contador <= denominadorN) {
		
		somatorio = somatorio + 1 / contador;
		
		cout << "\n\n\t O valor do somatório H, para N igual a " << contador << " é: " << somatorio;
		
		contador++;
	}
	getch();
}
