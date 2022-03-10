#include <iostream>
#include <iomanip>
#include <clocale>
#include "TipoProcesso.h"
using namespace std;
// Gabriel Gonçalves de Oliveira - 2111550021 - 2º ADS - L.P. Almir 

int main() {
	setlocale(LC_ALL,"");

	TipoProcesso primeiroTipoProcesso;
	primeiroTipoProcesso.leitura();
	cout << "\n\t Abaixo segue a impressão dos dados do 1º Processo " << endl;;
	primeiroTipoProcesso.impressao();

	TipoProcesso segundoTipoProcesso(2, "Trabalhista");
	cout << "\n\t Abaixo segue a impressão dos dados do 2º Processo " << endl;;
	segundoTipoProcesso.impressao();

	TipoProcesso terceiroTipoProcesso;
	terceiroTipoProcesso.setId(3);
	terceiroTipoProcesso.setDescricao("Civil");

	cout << "\n\t Abaixo segue a impressão dos dados do 3º Processo " << endl;;
	terceiroTipoProcesso.impressao();

	getc;
}
