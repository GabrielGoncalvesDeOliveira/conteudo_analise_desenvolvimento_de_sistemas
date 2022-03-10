#include <iostream>
#include <iomanip>
using namespace std;

class Processo {
	private:
		int id;
		string descricao;
		string dataEntrada;
		string horaEntrada;

	public:
		Processo();
		Processo(int, string, string, string);

		void leitura();
		void impressao();

		int getId();
		string getDescricao();
		string getDataEntrada();
		string getHoraEntrada();

		void setId(int id);
		void setDescricao(string);
		void setDataEntrada(string);
		void setHoraEntrada(string);
};

Processo::Processo() {
	id = 1;
	descricao = "Processo...";
	dataEntrada = "dd-mm-yyyy";
	horaEntrada = "hh:mm";
}

Processo::Processo(int id, string descricao, string dataEntrada, string horaEntrada) {
	this -> id = id;
	this -> descricao = descricao;
	this -> dataEntrada = dataEntrada;
	this -> horaEntrada = horaEntrada;
}

void Processo::leitura() {
	cout << "\n\t ==========================================";
	cout << "\n\t Leitura dos dados do Processo: ";
	cout << "\n\t ========================================== " << endl;
	cout << "\n\t Por gentileza informe o id do Processo: ";
	cin >> id;
	cout << "\n\t Informe sua descricao: ";
	cin >> descricao;
	cout << "\n\t Data de entrada (padrão dd-mm-yyyy) ";
	cin >> dataEntrada;
	cout << "\n\t Hora de entrada (padrão hh:mm): ";
	cin >> horaEntrada;
	cout << "\t ========================================== " << endl;
	getc;
}

void Processo::impressao() {
	cout << "\n\t ==========================================";
	cout << "\n\t Impressão dos dados do Processo: ";
	cout << "\n\t ==========================================";
	cout << "\n\t Id do Processo é: " << id;
	cout << "\n\t Descricao: " << descricao;
	cout << "\n\t Data de entrada: " << dataEntrada;
	cout << "\n\t Hora de entrada: " << horaEntrada;
	cout << "\n\t ========================================== " << endl;
	getc;
}

int Processo::getId() {
	return id;
}

string Processo::getDescricao() {
	return descricao;
}

string Processo::getDataEntrada() {
	return dataEntrada;
}

string Processo::getHoraEntrada() {
	return horaEntrada;
}

void Processo::setId(int id) {
	this -> id = id;
}

void Processo::setDescricao(string descricao) {
	this -> descricao = descricao;
}

void Processo::setDataEntrada(string dataEntrada) {
	this -> dataEntrada = dataEntrada;
}

void Processo::setHoraEntrada(string horaEntrada) {
	this -> horaEntrada = horaEntrada;
}