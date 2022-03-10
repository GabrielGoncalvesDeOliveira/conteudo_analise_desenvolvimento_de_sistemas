#include <iostream>
#include <iomanip>
#include <clocale>
#include "Vara.h"
using namespace std;
// Gabriel Gon�alves de Oliveira - 2111550021 - 2� ADS - L.P. Almir 

int main() {
	setlocale(LC_ALL,"");

	// Instancia��o do 1� advogado
	Advogado primeiroAdvogado(1, "Dr. Edvanio", "Assis", "SP", 38);
	// Instancia��o do 1� processo
	Processo primeiroProcesso(1, "Trabalhista", "28-02-2022", "11:25");
	// Instancia��o da 1� vara
	Vara primeiraVara;
	primeiraVara.leitura();
	cout << "\n\t Abaixo segue a impress�o dos dados da 1� Vara " << endl;
	primeiraVara.impressao();

	cout << "\n\t Abaixo segue a impress�o completa dos dados da 1� Vara " << endl;
	primeiraVara.impressaoCompleta();

	// Instancia��o do 2� advogado
	Advogado segundoAdvogado(2, "Dr. Joaquim", "Assis", "SP", 42);
	// Instancia��o do 2� processo
	Processo segundoProcesso(2, "Criminal", "03-03-2022", "15:10");
	// Instancia��o da 2� vara
	Vara segundaVara(2, segundoProcesso, segundoAdvogado, "Dr. Juiz", 10000.0);

	cout << "\n\t Abaixo segue a impress�o dos dados da 2� Vara " << endl;
	segundaVara.impressao();

	// Instancia��o do 3� advogado
	Advogado terceiroAdvogado(3, "Dr. Ademilson", "Assis", "SP", 48);
	// Instancia��o do 3� processo
	Processo terceiroProcesso(3, "Civil", "04-03-2022", "10:00");
	// Instancia��o da 3� vara
	Vara terceiraVara;
	
	terceiraVara.setId(3);
	terceiraVara.setProcesso(terceiroProcesso);
	terceiraVara.setAdvogado(terceiroAdvogado);
	terceiraVara.setJuiz("Dr. Kleber");
	terceiraVara.setValorCausa(5800.0);

	cout << "\n\t Abaixo segue a impress�o dos dados da 3� Vara " << endl;
	terceiraVara.impressao();
}
