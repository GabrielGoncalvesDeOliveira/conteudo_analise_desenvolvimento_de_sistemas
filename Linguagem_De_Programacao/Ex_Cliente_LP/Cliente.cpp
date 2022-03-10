#include <iostream>
#include <iomanip>
#include <clocale>
#include <iomanip>
#include "Cliente.h"
using namespace std;

int main() {
	setlocale(LC_ALL,"");

	Cliente primeiroCliente;
	primeiroCliente.ler();
	primeiroCliente.imprimir();

	primeiroCliente.depositar(1000.0);

	cout << "\n\t O Saldo após o depósito é: " << primeiroCliente.getSaldo() << "\n";

	primeiroCliente.sacar(300.0);

	cout << "\n\t O Saldo após o saque é: " << primeiroCliente.getSaldo() << "\n";
}