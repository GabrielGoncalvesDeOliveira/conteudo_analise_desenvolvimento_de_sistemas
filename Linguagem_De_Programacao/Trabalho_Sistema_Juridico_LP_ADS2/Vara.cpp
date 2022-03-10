#include <iostream>
#include <iomanip>
#include <clocale>
#include "Vara.h"
using namespace std;

int main() {
	setlocale(LC_ALL,"");

	// Instanciação do 1º advogado
	Advogado primeiroAdvogado(1, "Dr. Edvanio", "Assis", "SP", 38);
	// Instanciação do 1º processo
	Processo primeiroProcesso(1, "Trabalhista", "28-02-2022", "11:25");
	// Instanciação da 1ª vara
	Vara primeiraVara;
	primeiraVara.leitura();
	cout << "\n\t Abaixo segue a impressão dos dados da 1º Vara \n";
	primeiraVara.impressao();

	cout << "\n\t Abaixo segue a impressão completa dos dados da 1º Vara \n";
	primeiraVara.impressaoCompleta();

	// Instanciação do 2º advogado
	Advogado segundoAdvogado(2, "Dr. Joaquim", "Assis", "SP", 42);
	// Instanciação do 2º processo
	Processo segundoProcesso(2, "criminal", "03-03-2022", "15:10");
	// Instanciação da 2ª vara
	Vara segundaVara(2, segundoProcesso, segundoAdvogado, "Dr. Juiz", 10000.0);

	cout << "\n\t Abaixo segue a impressão dos dados da 2º Vara \n";
	segundaVara.impressao();

	// Instanciação do 3º advogado
	Advogado terceiroAdvogado(3, "Dr. Ademilson", "Assis", "SP", 48);
	// Instanciação do 3º processo
	Processo terceiroProcesso(3, "Civil", "04-03-2022", "10:00");
	// Instanciação da 3ª vara
	Vara terceiraVara;
	
	terceiraVara.setId(3);
	terceiraVara.setProcesso(terceiroProcesso);
	terceiraVara.setAdvogado(terceiroAdvogado);
	terceiraVara.setJuiz("Dr. Kleber");
	terceiraVara.setValorCausa(5800.0);

	cout << "\n\t Abaixo segue a impressão dos dados da 3º Vara \n";
	terceiraVara.impressao();
}