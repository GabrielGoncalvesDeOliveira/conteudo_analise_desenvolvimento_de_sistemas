#include <iostream>
#include <iomanip>
using namespace std;
// Gabriel Gonçalves de Oliveira - 2111550021 - 2º ADS - L.P. Almir 

class Advogado {
	private:
		int id;
		string nome;
		string cidade;
		string estado;
		int idade;

	public:
		// Construtores
		Advogado();
		Advogado(int, string, string, string, int);

		// Métodos de leitura e impressão
		void leitura();
		void impressao();

		// Métodos Getter e Setter
		int getId();
		string getNome();
		string getCidade();
		string getEstado();
		int getIdade();

		void setId(int);
		void setNome(string);
		void setCidade(string);
		void setEstado(string);
		void setIdade(int);
};

Advogado::Advogado() {
	id = 1;
	nome = "";
	cidade = "";
	estado = "";
	idade = 0;
}

Advogado::Advogado(int id, string nome, string cidade, string estado, int idade) {
	this -> id = id;
	this -> nome = nome;
	this -> cidade = cidade;
	this -> estado = estado;
	this -> idade = idade; 
}

void Advogado::leitura() {
	cout << "\n\t ==========================================";
	cout << "\n\t Leitura dos dados do Advogado: ";
	cout << "\n\t ========================================== " << endl;;
	cout << "\n\t Por gentileza informe seu id: ";
	cin >> id; fflush(stdin);
	cout << "\n\t Agora informe seu nome: ";
	getline(cin, nome); fflush(stdin);
	cout << "\n\t Sua cidade, por gentileza: ";
	getline(cin,cidade); fflush(stdin);
	cout << "\n\t O estado (somente a UF): ";
	getline(cin, estado); fflush(stdin);
	cout << "\n\t Por fim, informe sua idade (em anos): ";
	cin >> idade;
	cout << "\t ========================================== " << endl;;
	getc;
}

void Advogado::impressao() {
	cout << "\n\t ==========================================";
	cout << "\n\t Impressão dos dados do Advogado: ";
	cout << "\n\t ==========================================";
	cout << "\n\t O id do Advogado é: " << id;
	cout << "\n\t Seu nome é: " << nome;
	cout << "\n\t Sua cidade: " << cidade;
	cout << "\n\t Seu estado (UF): " << estado;
	cout << "\n\t E sua idade (em anos): " << idade;
	cout << "\n\t ========================================== " << endl;;
	getc;
}

int Advogado::getId() {
	return id;
}

string Advogado::getNome() {
	return nome;
}

string Advogado::getCidade() {
	return cidade;
}

string Advogado::getEstado() {
	return estado;
}

int Advogado::getIdade() {
	return idade;
}

void Advogado::setId(int id) {
	this -> id = id;
}

void Advogado::setNome(string nome) {
	this -> nome = nome;
}

void Advogado::setCidade(string cidade) {
	this -> cidade = cidade;
}

void Advogado::setEstado(string estado) {
	this -> estado = estado;
}

void Advogado::setIdade(int idade) {
	this -> idade = idade;
}
