/* 9-) Escreva um algoritmo que leia o peso de uma pessoa, 
calcule e mostre: o novo peso caso a pessoa engorde 15% sobre o peso digitado;
O novo peso caso a pessoa emagre�a 20% sobre o peso digitado. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float peso;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\t /-/-PROGRAMA CALCULADOR DE PESOS: \n\n";
	cout << "\n\t Por gentileza, digite o seu peso: ";
	cin >> peso;
	
	cout << "\n\t O seu peso, caso voc� engorde 15%, ser�: " << peso * 1.15;
	// peso = (peso * 15) / 100;
	// peso = (peso + peso * 0.15;
	cout << "\n\t O seu peso, caso voc� emagre�a 20%, ser�: " << peso * 0.8;
	// peso = (peso * 20) / 100;
	// peso = (peso - peso * 0.2);
	getch();
}
