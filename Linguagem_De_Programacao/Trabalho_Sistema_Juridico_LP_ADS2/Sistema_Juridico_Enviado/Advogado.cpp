#include <iostream>
#include <iomanip>
#include <clocale>
#include "Advogado.h"
using namespace std;
// Gabriel Gon�alves de Oliveira - 2111550021 - 2� ADS - L.P. Almir 

int main() {
	setlocale(LC_ALL,"");

	Advogado primeiroAdvogado;

	primeiroAdvogado.leitura();
	cout << "\n\t Abaixo segue a impress�o dos dados do 1� Advogado " << endl;
	primeiroAdvogado.impressao();

	Advogado segundoAdvogado(3, "A lenda do jur�dico", "Assis", "SP", 25);

	cout << "\n\t Abaixo segue a impress�o dos dados do 2� Advogado " << endl;
	segundoAdvogado.impressao();

	Advogado terceiroAdvogado;

	terceiroAdvogado.setId(5);
	terceiroAdvogado.setNome("Um Advogado de qualidade");
	terceiroAdvogado.setCidade("Assis");
	terceiroAdvogado.setEstado("SP");
	terceiroAdvogado.setIdade(40);

	cout << "\n\t Abaixo segue a impress�o dos dados do 3� Advogado " << endl;
	terceiroAdvogado.impressao();

	getc;
}
