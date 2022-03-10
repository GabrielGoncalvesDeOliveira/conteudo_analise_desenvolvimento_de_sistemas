#include <iostream>
#include <iomanip>
#include "Processo.h"
#include "Advogado.h"

class Vara {
	private:
		int id;
		Processo processo;
		Advogado advogado;
		string juiz;
		float valorCausa;

	public:
		Vara();
		Vara(int, Processo, Advogado, string, float);

		void leitura();
		void impressao();
		void impressaoCompleta();

		int getId();
		Processo getProcesso();
		Advogado getAdvogado();
		string getJuiz();
		float getValorCausa();

		void setId(int);
		void setProcesso(Processo);
		void setAdvogado(Advogado);
		void setJuiz(string);
		void setValorCausa(float);
};

Vara::Vara() {
	id = 1;
	Processo processo;

	this -> processo = processo;

	Advogado advogado;
	this -> advogado = advogado;
	juiz = "";
	valorCausa = 0.0;
}

Vara::Vara(int id, Processo processo, Advogado advogado, string juiz, float valorCausa) {
	this -> id = id;
	this -> processo = processo;
	this -> advogado = advogado;
	this -> juiz = juiz;
	this -> valorCausa = valorCausa;
}

void Vara::leitura() {

	Processo processo;
	processo.leitura();

	Advogado advogado;
	advogado.leitura();

	cout << "\n\t ==========================================";
	cout << "\n\t Leitura dos dados da Vara: ";
	cout << "\n\t ========================================== " << endl;
	cout << "\n\t Por gentileza informe o id da Vara: ";
	cin >> id;

	this -> processo = processo;
	this -> advogado = advogado;

	cout << "\n\t Informe o juiz: ";
	cin >> juiz;
	cout << "\n\t Por fim, informe o valor da causa: ";
	cin >> valorCausa;
	cout << "\t ========================================== " << endl;
	getc;
}

void Vara::impressao() {
	cout << "\n\t ==========================================";
	cout << "\n\t Impressão dos dados da Vara: ";
	cout << "\n\t ==========================================";
	cout << "\n\t Id da Vara é: " << id;
	cout << "\n\t Descrição do processo: " << processo.getDescricao();
	cout << "\n\t Nome do advogado envolvido: " << advogado.getNome();
	cout << "\n\t Nome do juiz: " << juiz;
	cout << "\n\t Valor da causa: " << valorCausa;
	cout << "\n\t ========================================== " << endl;
	getc;
}

// ALERTA DE POSSÍVEL GAMBIARRA:
void Vara::impressaoCompleta() {
	cout << "\n\t ==========================================";
	cout << "\n\t Impressão completa dos dados da Vara: ";
	cout << "\n\t ==========================================";
	cout << "\n\t Id da Vara é: " << id;
	cout << "\n\t Id do Processo: " << processo.getId();
	cout << "\n\t Descrição do Processo: " << processo.getDescricao();
	cout << "\n\t Data de entrada do Processo: " << processo.getDataEntrada();
	cout << "\n\t Hora de entrada do Processo: " << processo.getHoraEntrada();


	cout << "\n\t Id do Advogado: " << advogado.getId();
	cout << "\n\t Nome do Advogado: " << advogado.getNome();
	cout << "\n\t Cidade do Advogado: " << advogado.getCidade();
	cout << "\n\t Estado do Advogado: " << advogado.getEstado();
	cout << "\n\t Idade do Advogado: " << advogado.getIdade();
	cout << "\n\t Nome do juiz: " << juiz;
	cout << "\n\t Valor da causa: " << valorCausa;
	cout << "\n\t ========================================== " << endl;
	getc;
}

int Vara::getId() {
	return id;
}

Processo Vara::getProcesso() {
	return processo;
}

Advogado Vara::getAdvogado() {
	return advogado;
}

string Vara::getJuiz() {
	return juiz;
}

float Vara::getValorCausa() {
	return valorCausa;
}

void Vara::setId(int id) {
	this -> id = id;
}

void Vara::setProcesso(Processo processo) {
	this -> processo = processo;
}

void Vara::setAdvogado(Advogado advogado) {
	this -> advogado = advogado;
}

void Vara::setJuiz(string juiz) {
	this -> juiz = juiz;
}

void Vara::setValorCausa(float valorCausa) {
	this -> valorCausa = valorCausa;
}