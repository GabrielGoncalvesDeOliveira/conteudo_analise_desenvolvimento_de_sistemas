#include <iostream>
#include <iomanip>
#include <clocale>
#include "Conta.h"

int main() {
	setlocale(LC_ALL,"");

	Conta primeiraConta(12, "Primeiro titular bacana");
	primeiraConta.setSaldo(1.0);
	primeiraConta.imprimir();

	Conta segundaConta(25, "Outro titular bacana", 2000);
	segundaConta.imprimir();

	Conta terceiraConta;
	terceiraConta.setNumeroConta(8);
	terceiraConta.setTitular("Gabriel");
	terceiraConta.setSaldo(250.0);
	terceiraConta.imprimir();
}