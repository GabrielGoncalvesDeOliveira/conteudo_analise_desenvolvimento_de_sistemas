/* 11-) Escreva um algoritmo que leia o peso de uma pessoa aqui na Terra. Em seguida
calcule e mostre qual ser� o peso lido em Marte e em V�nus. Sabe-se que a
gravidade relativa em Marte � 0.38 e em V�nus � 0.88. A f�rmula para o c�lculo do
peso, fora da Terra, considerando a gravidade relativa �: pesoNoPlaneta = (PesoNaTerra / 10) * gravidade */

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
	cout << "\n\t O seu peso em Marte, em Kg, �: " << peso * 0.38;
	cout << "\n\t O seu peso em V�nus, em Kg, �: " << peso * 0.88;
	
	getch();
}
