/* 3-) Escreva um algoritmo que leia um n�mero (do tipo real) e mostre-o multiplicado por 3; 
somado com 10; e dividido por 20. (modo economia de mem�ria) */

#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

float numero;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t PROCESSADOR DE UM N�MERO (MULTIPLICA POR 3, SOMA COM 10 E DIVIDE POR 20): \n"; 
	cout << "\n\t Digite o n�mero que ser� processado: ";
	cin >> numero;
	
	cout << "\n\t O n�mero " << numero << " multiplicado por 3 �: " << numero * 3;
	cout << "\n\t Este, somado com 10 �: " << (numero * 3) + 10;
	cout << "\n\t por fim, dividido por 20 �: " << ((numero * 3) + 10) /20;
	
	getch();
}
