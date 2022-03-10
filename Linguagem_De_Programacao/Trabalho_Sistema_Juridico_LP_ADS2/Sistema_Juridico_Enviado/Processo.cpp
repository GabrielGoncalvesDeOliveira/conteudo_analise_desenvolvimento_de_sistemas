#include <iostream>
#include <iomanip>
#include <clocale>
#include "Processo.h"
using namespace std;
// Gabriel Gonçalves de Oliveira - 2111550021 - 2º ADS - L.P. Almir 

int main() {
	setlocale(LC_ALL,"");

	Processo primeiroProcesso;

	primeiroProcesso.leitura();
	cout << "\n\t Abaixo segue a impressão dos dados do 1º Processo " << endl;
	primeiroProcesso.impressao();

	Processo segundoProcesso(22, "Processo criminal", "28-02-2022", "11:10");

	cout << "\n\t Abaixo segue a impressão dos dados do 2º Processo " << endl;
	segundoProcesso.impressao();

	Processo terceiroProcesso;

	terceiroProcesso.setId(25);
	terceiroProcesso.setDescricao("Processo trabalhista");
	terceiroProcesso.setDataEntrada("02-03-2022");
	terceiroProcesso.setHoraEntrada("16:15");

	cout << "\n\t Abaixo segue a impressão dos dados do 3º Processo " << endl;
	terceiroProcesso.impressao();

	getc;
}
