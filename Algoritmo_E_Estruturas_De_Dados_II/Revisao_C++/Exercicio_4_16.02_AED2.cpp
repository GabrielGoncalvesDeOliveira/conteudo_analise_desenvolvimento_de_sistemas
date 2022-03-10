#include <iomanip>
#include <iostream>
#include <clocale>
using namespace std;

int verificarMenor(int a, int b);

int main() {
	setlocale(LC_ALL, "");

	int primeiroNum, segundoNum;

	cout << "\n\t\t Informe o 1º número: ";
	cin >> primeiroNum;
	cout << "\n\t\t Informe o 2º número: ";
	cin >> segundoNum;

	cout << "\n\n\t O menor número digitado foi o: " << verificarMenor(primeiroNum, segundoNum);
	cout << "\n====================================================";
	getc;
}

int verificarMenor(int a, int b) {
	return a < b ? a : b;
}