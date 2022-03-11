/* 1-) Faça um algoritmo que leia um número inteiro. Mostre-o somado com 5, caso o número lido seja PAR
ou mostre-o multiplicado por 8 caso seja ÍMPAR. Para o cálculo do PAR/ÍMPAR, considere: 
q = n / 2; -- r = n - q * 2; */

#include <iostream>
#include <conio.h>
using namespace std;

int numero;

int main() {
	
	setlocale(LC_ALL,"");

	cout << "\n\t ALGORITMO QUE EFETUA UMA OPERAÇÃO SE O NÚMERO É PAR OU OUTRA SE É ÍMPAR \n";
	
	cout << "\n\t Por gentileza, digite um número: ";
	cin >> numero;
	
	if (numero % 2 == 0) {
		cout << "\n\t Pelo número " << numero 
		<< " ser PAR, o resultado da operação dele, somado com 5 é: " << numero + 5;
	
	} else {
		cout << "\n\t Pelo número " << numero
		<< " ser ÍMPAR, o resultado da operação dele, multiplicado por 8 é: " << numero * 8;
	}
	
	getch();
	
	/* 
		quociente = numero / 2;
		resto = numero - quociente * 2;
		
		if (resto == 0) // número par {
			cout << "..." << numero + 5;
		
		} else // número ímpar {
			cout << "..." << numero * 8;
		} 
		getch();
	*/
}

