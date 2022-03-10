#include <iostream>
#include <iomanip>
using namespace std;
// Gabriel Gon�alves de Oliveira - 2111550021 - 2� ADS - L.P. Almir 

class TipoProcesso {
	private:
		int id;
		string descricao;

	public:
		TipoProcesso();
		TipoProcesso(int, string);

		void leitura();
		void impressao();

		int getId();
		string getDescricao();

		void setId(int);
		void setDescricao(string);
};

TipoProcesso::TipoProcesso() {
	id = 1;
	descricao = "";
}

TipoProcesso::TipoProcesso(int id, string descricao) {
	this -> id = id;
	this -> descricao = descricao;
}

void TipoProcesso::leitura() {
	cout << "\n\t ==========================================";
	cout << "\n\t Leitura do Tipo de Processo: ";
	cout << "\n\t ========================================== " << endl;;
	cout << "\n\t Informe o id do Tipo de processo: ";
	cin >> id; fflush(stdin);
	cout << "\n\t Informe sua descricao: ";
	getline(cin, descricao);
	cout << "\t ========================================== " << endl;;
	getc;
}

void TipoProcesso::impressao() {
	cout << "\n\t ==========================================";
	cout << "\n\t Impress�o do Tipo de Processo: ";
	cout << "\n\t ==========================================";
	cout << "\n\t Id do Processo �: " << id;
	cout << "\n\t Descricao: " << descricao;
	cout << "\n\t ========================================== " << endl;;
	getc;
}

int TipoProcesso::getId() {
	return id;
}

string TipoProcesso::getDescricao() {
	return descricao;
}

void TipoProcesso::setId(int id) {
	this -> id = id;
}

void TipoProcesso::setDescricao(string descricao) {
	this -> descricao = descricao;
}
