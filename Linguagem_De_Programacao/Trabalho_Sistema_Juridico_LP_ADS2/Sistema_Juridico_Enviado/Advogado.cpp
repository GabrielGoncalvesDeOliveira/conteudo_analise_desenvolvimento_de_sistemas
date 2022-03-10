#include <iostream>
#include <iomanip>
#include <clocale>
#include "Advogado.h"
using namespace std;
// Gabriel Gonçalves de Oliveira - 2111550021 - 2º ADS - L.P. Almir 

int main() {
	setlocale(LC_ALL,"");

	Advogado primeiroAdvogado;

	primeiroAdvogado.leitura();
	cout << "\n\t Abaixo segue a impressão dos dados do 1º Advogado " << endl;
	primeiroAdvogado.impressao();

	Advogado segundoAdvogado(3, "A lenda do jurídico", "Assis", "SP", 25);

	cout << "\n\t Abaixo segue a impressão dos dados do 2º Advogado " << endl;
	segundoAdvogado.impressao();

	Advogado terceiroAdvogado;

	terceiroAdvogado.setId(5);
	terceiroAdvogado.setNome("Um Advogado de qualidade");
	terceiroAdvogado.setCidade("Assis");
	terceiroAdvogado.setEstado("SP");
	terceiroAdvogado.setIdade(40);

	cout << "\n\t Abaixo segue a impressão dos dados do 3º Advogado " << endl;
	terceiroAdvogado.impressao();

	getc;
}
