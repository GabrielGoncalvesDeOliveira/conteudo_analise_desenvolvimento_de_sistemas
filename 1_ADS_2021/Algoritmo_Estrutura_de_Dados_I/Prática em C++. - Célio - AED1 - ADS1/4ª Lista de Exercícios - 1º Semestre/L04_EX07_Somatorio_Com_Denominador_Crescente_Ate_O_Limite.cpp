/* 7) Sendo H = 1 + � + 1/3 + � + ... + 1/N, elabore um algoritmo 
para gerar e imprimir o n�mero H. O valor de N dever� ser lido.  */

#include <iostream>
#include <conio.h>
using namespace std;

float somatorio, contador;
int denominadorN; 

int main() {

	setlocale(LC_ALL,"");
	
	cout << "\n\t SOMAT�RIO COM DENOMINADOR CRESCENTE AT� O LIMITE LIDO: \n";
	
	contador = 1; somatorio = 0;
	
	cout << "\n\t Digite o valor de N: ";
	cin >> denominadorN;
	
	while (contador <= denominadorN) {
		
		somatorio = somatorio + 1 / contador;
		
		cout << "\n\n\t O valor do somat�rio H, para N igual a " << contador << " �: " << somatorio;
		
		contador++;
	}
	getch();
}
