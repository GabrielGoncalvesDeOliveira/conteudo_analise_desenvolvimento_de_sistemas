#include <iostream>
#include <iomanip>
#include <clocale>
#include "TipoProcesso.h"
using namespace std;

int main() {
	setlocale(LC_ALL,"");

	TipoProcesso primeiroTipoProcesso;
	primeiroTipoProcesso.leitura();
	cout << "\n\t Abaixo segue a impressão dos dados do 1º Processo \n";
	primeiroTipoProcesso.impressao();

	TipoProcesso segundoTipoProcesso(2, "Trabalhista");
	cout << "\n\t Abaixo segue a impressão dos dados do 2º Processo \n";
	segundoTipoProcesso.impressao();

	TipoProcesso terceiroTipoProcesso;
	terceiroTipoProcesso.setId(3);
	terceiroTipoProcesso.setDescricao("Civil");

	cout << "\n\t Abaixo segue a impressão dos dados do 3º Processo \n";
	terceiroTipoProcesso.impressao();

	getc;
}