/* 11-) Escreva um algoritmo que leia o peso de uma pessoa aqui na Terra. Em seguida
calcule e mostre qual será o peso lido em Marte e em Vênus. Sabe-se que a
gravidade relativa em Marte é 0.38 e em Vênus é 0.88. A fórmula para o cálculo do
peso, fora da Terra, considerando a gravidade relativa é: pesoNoPlaneta = (PesoNaTerra / 10) * gravidade */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float peso, gravidade;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADORA DE PESOS FORA DA TERRA: \n";
	cout << "\n\t Digite o seu peso em Kg: ";
	cin >> peso;
	cout << "\n\t O seu peso em Marte, em Kg, é: " << peso * 0.38;
	cout << "\n\t O seu peso em Vênus, em Kg, é: " << peso * 0.88;
	
	getch();
}
