/* 13-) Faça um algoritmo que leia um valor em Real e o valor da cotação do dólar do dia.
Calcule e mostre o valor lido em Real transformado p/ dólares. */ 

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float valorEmReais, cotacao;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CONVERSOR DE VALORES EM REAL PARA DOLÁR: \n";
	cout << "\n\t Digite o valor em reais R$: ";
	cin >> valorEmReais;
	cout << "\n\t Digite a cotação do dólar do dia: ";
	cin >> cotacao;
	cout << "\n\t O valor de R$ " << valorEmReais << " transformado para dólares é: US$ " 
	<< valorEmReais / cotacao;
	
	getch();
}
