/* Escreva um algoritmo que leia a altura e o sexo ("M" ou "F") de uma pessoa. 
Calcule e mostre seu peso ideal, utilizando uma das seguintes fórmulas:
Se sexo for "M": (72.7 * altura) – 58;
Se sexo for "F": (62.1 * altura) – 44.7 */ 

#include <iostream>
#include <conio.h>
using namespace std;

float altura;
char sexo;

int main () {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO CALCULADOR DE PESO IDEAL COM BASE NA ALTURA E NO SEXO: \n";
	
	cout << "\n\t Por gentileza, digite a sua altura [em m]: ";
	cin >> altura;
	
	cout << "\n\t Certo, agora digite o seu sexo [M / F]: ";
	cin >> sexo;
	
	if (sexo == 'M' || sexo == 'm') {
		
		cout << "\n\t Por ser homem, seu peso ideal é: " << (72.7 * altura) - 58 << " kg.";
		
	} else if (sexo == 'F' || sexo == 'f') {
		
		cout << "\n\t Por ser mulher, seu peso ideal é: " << (62.1 * altura) - 44.7 << " kg.";
	
	} else {
		cout << "\n\t Sexo inválido, tente novamente.";
	}
	
	getch();
}
