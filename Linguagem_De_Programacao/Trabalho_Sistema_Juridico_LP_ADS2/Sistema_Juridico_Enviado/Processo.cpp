#include <iostream>
#include <iomanip>
#include <clocale>
#include "Processo.h"
using namespace std;
// Gabriel Gon�alves de Oliveira - 2111550021 - 2� ADS - L.P. Almir 

int main() {
	setlocale(LC_ALL,"");

	Processo primeiroProcesso;

	primeiroProcesso.leitura();
	cout << "\n\t Abaixo segue a impress�o dos dados do 1� Processo " << endl;
	primeiroProcesso.impressao();

	Processo segundoProcesso(22, "Processo criminal", "28-02-2022", "11:10");

	cout << "\n\t Abaixo segue a impress�o dos dados do 2� Processo " << endl;
	segundoProcesso.impressao();

	Processo terceiroProcesso;

	terceiroProcesso.setId(25);
	terceiroProcesso.setDescricao("Processo trabalhista");
	terceiroProcesso.setDataEntrada("02-03-2022");
	terceiroProcesso.setHoraEntrada("16:15");

	cout << "\n\t Abaixo segue a impress�o dos dados do 3� Processo " << endl;
	terceiroProcesso.impressao();

	getc;
}
