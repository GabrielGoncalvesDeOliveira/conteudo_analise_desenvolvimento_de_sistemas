// Algoritmo calculador de IMC (Índice de Massa Corporal), com base na altura e no peso de uma pessoa.

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float altura, peso;

int main() {
	
	setlocale(LC_ALL,"");

	cout << "\n\t ALGORITMO CALCULADOR DE IMC, COM BASE NA ALTURA E NO PESO: \n";
	
	cout << "\n\t Por gentileza, digite sua altura [em m]: ";
	cin >> altura;
	
	cout << "\n\t Certo, agora digite o seu peso [em kg]: ";
	cin >> peso;
	
	if (peso < 30 || peso > 350) {
		cout << "\n\t Peso inválido, tente novamente inserindo outro valor.";
	
	} else if (altura < 1 || altura > 3) {
		cout << "\n\t Altura inválida, tente novamente inserindo outro valor.";
	
	} else {
		
		cout << "\n\t Por fim, seu IMC (índice de massa corporal) é: " << peso / pow(altura, 2);
	}
	
	getch();
}
