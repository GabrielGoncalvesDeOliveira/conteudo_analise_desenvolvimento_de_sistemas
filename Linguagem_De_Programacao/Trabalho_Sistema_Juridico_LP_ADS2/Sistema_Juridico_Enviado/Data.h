#include <iostream>
#include <iomanip>
using namespace std;
// Gabriel Gon�alves de Oliveira - 2111550021 - 2� ADS - L.P. Almir 

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
	cout << "\n\t Informe o dia (n�o digitar o 0 � esquerda se dia for anterior a 10): ";
	cin >> dia;

	// Verifica��o caso seja informado um dia inv�lido
	dia = dia > 30 || dia < 0 ? 1 : dia;

	cout << "\n\t Informe o m�s (n�o digitar o 0 � esquerda se m�s for anterior a 10): ";
	cin >> mes;

	// Verifica��o caso seja informado um mês inv�lido
	mes = mes > 12 || mes < 0 ? 1 : mes; 

	cout << "\n\t Informe o ano: ";
	cin >> ano;

	// Verifica��o caso seja informado um ano inv�lido	
	ano = ano > 2032 || ano < 1970 ? 2022 : ano;

	cout << "\t ======================================================== " << endl;
	getc;
}

void Data::impressao() {
	cout << "\n\t ============================";
	cout << "\n\t Impress�o da Data: ";
	cout << "\n\t ============================";
	cout << "\n\t O dia �: " << dia;
	cout << "\n\t O m�s: " << mes;
	cout << "\n\t e o ano: " << ano;
	cout << "\n\t Logo, a data �: " << dia << "/" << mes << "/" << ano;
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


