/* 6) Fa�a um algoritmo que leia o valor de X e a seguir calcule e mostre o valor do 
somat�rio: 
 X^25/1 + X^24/2 + X^23/3 + ... + X/25 */
 
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

float somatorio, valorDoNumerador; int expoente, denominador;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t SOMAT�RIO COM NUMERADOR INSERIDO PELO USU�RIO: \n";
	
	somatorio = 0; expoente = 25; denominador = 1;
	
	cout << "\n\t Por gentileza, digite o valor de X para o c�lculo do somat�rio: ";
	cin >> valorDoNumerador;
	
	while (denominador <= 25) {
		
		somatorio += pow(valorDoNumerador, expoente) / denominador;
	
		cout << "\n\n\t O valor do somat�rio, para o numerador valendo "
		<< valorDoNumerador << ", �: " << fixed << setprecision(2) << somatorio << ".";
		
		cout << "\n\n\t valor do denominador: " << denominador;
		
		expoente--;
		
		denominador++;
	}
	cout << "\n\n\t O valor final do somat�rio �: " << fixed << setprecision(2) << somatorio << ".";
	
	getch();
}
