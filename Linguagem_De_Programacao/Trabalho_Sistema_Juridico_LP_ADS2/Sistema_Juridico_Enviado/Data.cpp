#include <iostream>
#include <iomanip>
#include <clocale>
#include "Data.h"
using namespace std;
// Gabriel Gon�alves de Oliveira - 2111550021 - 2� ADS - L.P. Almir 

int main() {
	setlocale(LC_ALL,"");

	Data primeiraData;

	primeiraData.leitura();
	cout << "\n\t Abaixo segue a impress�o da 1� Data " << endl;
	primeiraData.impressao();

	Data segundaData(20, 2, 2022);

	cout << "\n\t Abaixo segue a impress�o da 2� Data " << endl;
	segundaData.impressao();

	Data terceiraData;

	terceiraData.setDia(1);
	terceiraData.setMes(3);
	terceiraData.setAno(2022);

	cout << "\n\t Abaixo segue a impress�o da 3� Data " << endl;
	terceiraData.impressao();

	getc;
}
