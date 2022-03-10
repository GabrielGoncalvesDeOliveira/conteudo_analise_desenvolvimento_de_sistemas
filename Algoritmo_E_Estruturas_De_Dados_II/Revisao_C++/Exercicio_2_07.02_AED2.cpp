#include <iomanip>
#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL,"");
	int numero, numeroAnterior, maior, menor, cont = 0, soma = 0;

	for (int i = 0; i < 10; i++) {

		cout << "\n\t\t Digite um número: ";
		cin >> numero;
		
		if (i == 0) {
			maior = numero;
			menor = numero;
			numeroAnterior = numero;
		}
		if (numero > maior) {
			maior = numero;
		}
		if (numero < menor) {
			menor = numero;
		}
		if (numero == numeroAnterior + 1) {
			i = 10;
		}
		numeroAnterior = numero;
		soma += numero;
		cont++;
	}
	cout << "\n\n\t O maior número é o: " << maior;
	cout << "\n\n\t O menor número é o: " << menor;
	cout << "\n\n\t A média dos números é: " << soma / cont;
	cout << "\n\n\t A soma números é: " << soma;
}