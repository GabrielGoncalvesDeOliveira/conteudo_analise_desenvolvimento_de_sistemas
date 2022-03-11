/* 6) Faça um algoritmo que leia o valor de X e a seguir calcule e mostre o valor do 
somatório: 
 X^25/1 + X^24/2 + X^23/3 + ... + X/25 */
 
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

float somatorio, valorDoNumerador; int expoente, denominador;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t SOMATÓRIO COM NUMERADOR INSERIDO PELO USUÁRIO: \n";
	
	somatorio = 0; expoente = 25; denominador = 1;
	
	cout << "\n\t Por gentileza, digite o valor de X para o cálculo do somatório: ";
	cin >> valorDoNumerador;
	
	while (denominador <= 25) {
		
		somatorio += pow(valorDoNumerador, expoente) / denominador;
	
		cout << "\n\n\t O valor do somatório, para o numerador valendo "
		<< valorDoNumerador << ", é: " << fixed << setprecision(2) << somatorio << ".";
		
		cout << "\n\n\t valor do denominador: " << denominador;
		
		expoente--;
		
		denominador++;
	}
	cout << "\n\n\t O valor final do somatório é: " << fixed << setprecision(2) << somatorio << ".";
	
	getch();
}
