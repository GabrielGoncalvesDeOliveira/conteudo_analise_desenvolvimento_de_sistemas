#include <iomanip>
#include <iostream>
#include <clocale>
using namespace std;

int verificarMaior(int primeiroNumero, int segundoNumero);
int verificarMenor(int primeiroNumero, int segundoNumero);

int main() {
	setlocale(LC_ALL, "");

	int numeros[10], maior, menor, soma = 0, cont = 0;

	for (int i = 0; i < 10; i++) {

		cout << "\n\t\t Por gentileza digite um número: ";
		cin >> numeros[i];

		if (i == 0) {
			maior = numeros[0];
			menor = numeros[0];
		}
		soma += numeros[i];

		if (i != 0 && numeros[i] == numeros[i-1] + 1) {
			maior = verificarMaior(numeros[i], numeros[i-1]);
			menor = verificarMenor(numeros[i], numeros[i-1]);
			i = 10;
		}
		cont++;
	}
	cout << "\n\t O total de números digitados foi: " << cont << "\n";
	cout << "\n\t O maior número (ou número consecutivo) digitado foi: " << maior << "\n";
	cout << "\n\t O menor número (ou número consecutivo) digitado foi: " << menor << "\n";
	cout << "\n\t A média de todos os números digitados foi: " << soma / cont << "\n";
	cout << "\n\t A soma de todos os números digitados foi: " << soma << "\n";
}

int verificarMaior(nit primeiroNumero, int segundoNumero) {
	return primeiroNumero > segundoNumero ? primeiroNumero : segundoNumero;
}

int verificarMenor(int primeiroNumero, int segundoNumero) {
	return primeiroNumero < segundoNumero ? primeiroNumero : segundoNumero;
}