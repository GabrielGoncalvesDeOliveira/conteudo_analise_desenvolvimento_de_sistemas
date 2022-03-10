#include <iostream>
#include <iomanip>
using namespace std;
// Gabriel Gonçalves de Oliveira - 2111550021 - 2º ADS - L.P. Almir 

class Data {
	private:
		int dia;
		int mes;
		int ano;

	public:
		Data();
		Data(int, int, int);

		void leitura();
		void impressao();

		int getDia();
		int getMes();
		int getAno();

		void setDia(int);
		void setMes(int);
		void setAno(int);
};

Data::Data() {
	dia = 1;
	mes = 1;
	ano = 2020;
}

Data::Data(int dia, int mes, int ano) {
	this -> dia = dia;
	this -> mes = mes;
	this -> ano = ano;
}

void Data::leitura() {
	cout << "\n\t ======================================================== " << endl;
	cout << "\n\t Leitura da Data: ";
	cout << "\n\t ======================================================== " << endl;
	cout << "\n\t Informe o dia (não digitar o 0 à esquerda se dia for anterior a 10): ";
	cin >> dia;

	// Verificação caso seja informado um dia inválido
	dia = dia > 30 || dia < 0 ? 1 : dia;

	cout << "\n\t Informe o mês (não digitar o 0 à esquerda se mês for anterior a 10): ";
	cin >> mes;

	// Verificação caso seja informado um mÃªs inválido
	mes = mes > 12 || mes < 0 ? 1 : mes; 

	cout << "\n\t Informe o ano: ";
	cin >> ano;

	// Verificação caso seja informado um ano inválido	
	ano = ano > 2032 || ano < 1970 ? 2022 : ano;

	cout << "\t ======================================================== " << endl;
	getc;
}

void Data::impressao() {
	cout << "\n\t ============================";
	cout << "\n\t Impressão da Data: ";
	cout << "\n\t ============================";
	cout << "\n\t O dia é: " << dia;
	cout << "\n\t O mês: " << mes;
	cout << "\n\t e o ano: " << ano;
	cout << "\n\t Logo, a data é: " << dia << "/" << mes << "/" << ano;
	cout << "\n\t ============================ "  << endl;
	getc;
}

int Data::getDia() {
	return dia;
}

int Data::getMes() {
	return mes;
}

int Data::getAno() {
	return ano;
}

void Data::setDia(int dia) {
	this -> dia = dia;
}

void Data::setMes(int mes) {
	this -> mes = mes;
}

void Data::setAno(int ano) {
	this -> ano = ano;
}


