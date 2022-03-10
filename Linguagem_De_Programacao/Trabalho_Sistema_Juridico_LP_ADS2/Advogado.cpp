#include <iostream>
#include <iomanip>
#include <clocale>
#include "Advogado.h"
using namespace std;

int main() {
	setlocale(LC_ALL,"");

	Advogado primeiroAdvogado;

	primeiroAdvogado.leitura();
	cout << "\n\t Abaixo segue a impressão dos dados do 1º Advogado \n";
	primeiroAdvogado.impressao();

	Advogado segundoAdvogado(3, "A lenda do Jurídico", "Assis", "SP", 25);

	cout << "\n\t Abaixo segue a impressão dos dados do 2º Advogado \n";
	segundoAdvogado.impressao();

	Advogado terceiroAdvogado;

	terceiroAdvogado.setId(5);
	terceiroAdvogado.setNome("Um Advogado de qualidade");
	terceiroAdvogado.setCidade("Assis");
	terceiroAdvogado.setEstado("SP");
	terceiroAdvogado.setIdade(40);

	cout << "\n\t Abaixo segue a impressão dos dados do 3º Advogado \n";
	terceiroAdvogado.impressao();

	getc;
}