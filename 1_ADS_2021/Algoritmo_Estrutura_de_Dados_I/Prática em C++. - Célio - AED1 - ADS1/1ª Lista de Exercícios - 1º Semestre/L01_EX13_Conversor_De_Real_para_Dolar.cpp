/* 13-) Fa�a um algoritmo que leia um valor em Real e o valor da cota��o do d�lar do dia.
Calcule e mostre o valor lido em Real transformado p/ d�lares. */ 

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float valorEmReais, cotacao;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CONVERSOR DE VALORES EM REAL PARA DOL�R: \n";
	cout << "\n\t Digite o valor em reais R$: ";
	cin >> valorEmReais;
	cout << "\n\t Digite a cota��o do d�lar do dia: ";
	cin >> cotacao;
	cout << "\n\t O valor de R$ " << valorEmReais << " transformado para d�lares �: US$ " 
	<< valorEmReais / cotacao;
	
	getch();
}
