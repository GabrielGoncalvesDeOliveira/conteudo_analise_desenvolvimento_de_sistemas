#include <iostream>
#include <iomanip>
#include <clocale>
#include <string>
using namespace std;

class Produto {
	// Atributos da classe:

	private:
		int id;
		string descricao;
		float quantidade;
		float valor;

	// Métodos da classe
	public:
		void ler();
		void imprimir();

		int getId();
		string getDescricao();
		float getQuantidade();
		float getValor();

		void setId(int id);
		void setDescricao(string descricao);
		void setQuantidade(float quantidade);
		void setValor(float valor);
};

void Produto::ler() {
	cout << "\n\t LEITURA DAS INFORMACOES DO PRODUTO:";
	cout << "\n\t ============================================= \n";

	cout << "\n\t Por gentileza, digite o id do produto: ";
	cin >> id;
	cout << "\n\t Agora, informe a descricao do produto: ";
	cin >> descricao;
	cout << "\n\t Pois bem, informe a quantidade do produto: ";
	cin >> quantidade;
	cout << "\n\t Por fim, informe seu valor: ";
	cin >> valor;
	cout << "\n\t ============================================= \n"; 
	getc;
}

void Produto::imprimir() {
	cout << "\n\t IMPRESSAO DAS INFORMCOES DO PRODUTO:";
	cout << "\n\t ============================================= \n"; 
	cout << "\n\t O id do produto é: " << id << endl;
	cout << "\n\t Sua descricao é: " << descricao << endl;
	cout << "\n\t Sua quantidade é: " << quantidade << endl;
	cout << "\n\t Por fim, seu valor: " << valor << endl;
	cout << "\n\t ============================================= \n"; 
	getc;
}

// Métodos Getters e Setters:
int Produto::getId() {
	return id;
}

string Produto::getDescricao() {
	return descricao;
}

float Produto::getQuantidade() {
	return quantidade;
}

float Produto::getValor() {
	return valor;
}

void Produto::setId(int id) {
	this -> id = id;
}

void Produto::setDescricao(string descricao) {
	this -> descricao = descricao;
}

void Produto::setQuantidade(float quantidade) {
	this -> quantidade = quantidade;
}

void Produto::setValor(float valor) {
	this -> valor = valor;
}