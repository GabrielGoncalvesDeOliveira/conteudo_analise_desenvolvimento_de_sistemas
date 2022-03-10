#include <iostream>
#include <iomanip>
#include <clocale>
#include "Data.h"
using namespace std;

int main() {
	setlocale(LC_ALL,"");

	Data primeiraData;

	primeiraData.leitura();
	cout << "\n\t Abaixo segue a impressão da 1ª Data " << endl;
	primeiraData.impressao();

	Data segundaData(20, 2, 2022);

	cout << "\n\t Abaixo segue a impressão da 2ª Data " << endl;
	segundaData.impressao();

	Data terceiraData;

	terceiraData.setDia(1);
	terceiraData.setMes(3);
	terceiraData.setAno(2022);

	cout << "\n\t Abaixo segue a impressão da 3ª Data " << endl;
	terceiraData.impressao();

	getc;
}