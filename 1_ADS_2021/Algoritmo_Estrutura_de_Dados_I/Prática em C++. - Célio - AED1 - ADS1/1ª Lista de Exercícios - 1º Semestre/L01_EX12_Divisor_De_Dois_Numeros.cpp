/* 12-) Construa um algoritmo que leia dois n�meros inteiros, divida um pelo outro e
mostre o resto da divis�o (suponha que ser� dividido o maior pelo menor).  */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int primeiroNumero, segundoNumero;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t DIVISOR DE DOIS N�MEROS QUE EXIBE O RESTO DA DIVIS�O: \n";
	cout << "\n\t Digite o primeiro n�mero: ";
	cin >> primeiroNumero;
	cout << "\n\t Digite o segundo n�mero: ";
	cin >> segundoNumero;
	
	if (primeiroNumero > segundoNumero) {
		cout << "\n\t O resto da divis�o do n�mero " << primeiroNumero << " por " << segundoNumero << " �: "
		<< primeiroNumero % segundoNumero;
	} else {
		cout << "\n\t o resto da divis�o do n�mero " << segundoNumero << " por " << primeiroNumero << " �: "
		<< segundoNumero % primeiroNumero;
	}
	
	getch();
}
