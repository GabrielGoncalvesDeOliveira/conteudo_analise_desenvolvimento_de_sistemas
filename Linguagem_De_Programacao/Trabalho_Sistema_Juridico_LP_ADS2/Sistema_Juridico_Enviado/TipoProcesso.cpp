#include <iostream>
#include <iomanip>
#include <clocale>
#include "TipoProcesso.h"
using namespace std;
// Gabriel Gon�alves de Oliveira - 2111550021 - 2� ADS - L.P. Almir 

int main() {
	setlocale(LC_ALL,"");

	TipoProcesso primeiroTipoProcesso;
	primeiroTipoProcesso.leitura();
	cout << "\n\t Abaixo segue a impress�o dos dados do 1� Processo " << endl;;
	primeiroTipoProcesso.impressao();

	TipoProcesso segundoTipoProcesso(2, "Trabalhista");
	cout << "\n\t Abaixo segue a impress�o dos dados do 2� Processo " << endl;;
	segundoTipoProcesso.impressao();

	TipoProcesso terceiroTipoProcesso;
	terceiroTipoProcesso.setId(3);
	terceiroTipoProcesso.setDescricao("Civil");

	cout << "\n\t Abaixo segue a impress�o dos dados do 3� Processo " << endl;;
	terceiroTipoProcesso.impressao();

	getc;
}
