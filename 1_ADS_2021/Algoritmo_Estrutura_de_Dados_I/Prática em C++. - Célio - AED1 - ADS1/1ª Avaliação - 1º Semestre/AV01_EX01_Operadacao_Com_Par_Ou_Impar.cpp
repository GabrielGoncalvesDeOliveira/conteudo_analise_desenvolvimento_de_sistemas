/* 1-) Fa�a um algoritmo que leia um n�mero inteiro. Mostre-o somado com 5, caso o n�mero lido seja PAR
ou mostre-o multiplicado por 8 caso seja �MPAR. Para o c�lculo do PAR/�MPAR, considere: 
q = n / 2; -- r = n - q * 2; */

#include <iostream>
#include <conio.h>
using namespace std;

int numero;

int main() {
	
	setlocale(LC_ALL,"");

	cout << "\n\t ALGORITMO QUE EFETUA UMA OPERA��O SE O N�MERO � PAR OU OUTRA SE � �MPAR \n";
	
	cout << "\n\t Por gentileza, digite um n�mero: ";
	cin >> numero;
	
	if (numero % 2 == 0) {
		cout << "\n\t Pelo n�mero " << numero 
		<< " ser PAR, o resultado da opera��o dele, somado com 5 �: " << numero + 5;
	
	} else {
		cout << "\n\t Pelo n�mero " << numero
		<< " ser �MPAR, o resultado da opera��o dele, multiplicado por 8 �: " << numero * 8;
	}
	
	getch();
	
	/* 
		quociente = numero / 2;
		resto = numero - quociente * 2;
		
		if (resto == 0) // n�mero par {
			cout << "..." << numero + 5;
		
		} else // n�mero �mpar {
			cout << "..." << numero * 8;
		} 
		getch();
	*/
}

