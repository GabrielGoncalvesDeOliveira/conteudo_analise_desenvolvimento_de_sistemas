#include <iostream>
#include <iomanip>
using namespace std;

// Interface da Classe
class Cliente {
	private:
		int id;
		string nome;
		float saldo;


	public:
		void ler();
		void imprimir();

		int getId();
		string getNome();
		float getSaldo();

		void setId(int id);
		void setNome(string nome);
		void setSaldo(float saldo);

		void depositar(float valor);
		void sacar(float valor);
};

// Corpo dos métodos
void Cliente::ler() {
	cout << "\n\t LER DADOS DO CLIENTE \n";
	cout << "\n\t Informe o Id: ";
	cin >> id;
	cout << "\n\t Informe o nome: ";
	cin >> nome;
	cout << "\n\t Informe o saldo: ";
	cin >> saldo;
	fflush(stdin);
}

void Cliente::imprimir() {
	cout << "\n\t IMPRESSÃO DOS DADOS DO CLIENTE \n";
	cout << "\n\t Id informado: " << id << endl;
	cout << "\n\t Nome informado: " << nome << endl;
	cout << "\n\t Saldo informado: " << saldo << endl;
}

int Cliente::getId() {
	return id;
}

string Cliente::getNome() {
	return nome;
}

float Cliente::getSaldo() {
	return saldo;
}

void Cliente::setId(int id) {
	this -> id = id;
}

void Cliente::setNome(string nome) {
	this -> nome = nome; 
}

void Cliente::setSaldo(float saldo) {
	this -> saldo = saldo;
}

void Cliente::depositar(float valor) {
	this -> saldo += valor;
}

void Cliente::sacar(float valor) {
	if (valor < this -> saldo) {
		this -> saldo -= valor;
		cout << "\n\t Saque efetuado com sucesso! \n";
	
	} else {
		cout << "\n\t Saque falhou porque o saldo atual é insuficiente. \n";
	}
}

