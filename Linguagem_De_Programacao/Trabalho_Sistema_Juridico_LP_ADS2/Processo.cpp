#include <iostream>
#include <iomanip>
#include <clocale>
#include "Processo.h"
using namespace std;

int main() {
	setlocale(LC_ALL,"");

	Processo primeiroProcesso;

	primeiroProcesso.leitura();
	cout << "\n\t Abaixo segue a impressão dos dados do 1º Processo \n";
	primeiroProcesso.impressao();

	Processo segundoProcesso(22, "Processo criminal", "28-02-2022", "11:10");

	cout << "\n\t Abaixo segue a impressão dos dados do 2º Processo \n";
	segundoProcesso.impressao();

	Processo terceiroProcesso;

	terceiroProcesso.setId(25);
	terceiroProcesso.setDescricao("Processo trabalhista");
	terceiroProcesso.setDataEntrada("02-03-2022");
	terceiroProcesso.setHoraEntrada("16:15");

	cout << "\n\t Abaixo segue a impressão dos dados do 3º Processo \n";
	terceiroProcesso.impressao();

	getc;
}