#include <iostream>
#include <iomanip>
using namespace std;

class Conta {
	private:
		int numeroConta;
		string titular;
		float saldo;

	public:
		
		Conta(); // Método Construtor
		Conta(int, string);
		Conta(int, string, float);

		int getNumeroConta();
		string getTitular();
		float getSaldo();

		void setNumeroConta(int);
		void setTitular(string);
		void setSaldo(float);

		void imprimir();
};

Conta::Conta() {
	numeroConta = 0;
	titular = "";
	saldo = 0.0;
}

Conta::Conta(int numeroConta, string titular) {
	this -> numeroConta = numeroConta;
	this -> titular = titular;
	saldo = 0.0;
}

Conta::Conta(int numeroConta, string titular, float saldo) {
	this -> numeroConta = numeroConta;
	this -> titular = titular;
	this -> saldo = saldo;
}

int Conta::getNumeroConta() {
	return numeroConta;
}

string Conta::getTitular() {
	return titular;
}

float Conta::getSaldo() {
	return saldo;
}

void Conta::setNumeroConta(int numeroConta) {
	this -> numeroConta = numeroConta;
}

void Conta::setTitular(string titular) {
	this -> titular = titular;
}

void Conta::setSaldo(float saldo) {
	this -> saldo = saldo;
}

void Conta::imprimir() {
	cout << "\n\t====================================";
	cout << "\n\t Impressão das informações da Conta:";
	cout << "\n\t====================================";
	cout << "\n\t Número da Conta: " << numeroConta;
	cout << "\n\t Titular: " << titular;
	cout << "\n\t Saldo: " << saldo;
	cout << "\n\t==================================== \n";
}