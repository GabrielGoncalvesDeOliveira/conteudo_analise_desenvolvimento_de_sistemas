#include <iostream>
#include <iomanip>
#include <clocale>
#include "Aluno.h"
using namespace std;

int main() {
	setlocale(LC_ALL,"");

	Aluno primeiroAluno; // instanciação do primeiroAluno do tipo Aluno
	primeiroAluno.ler();
	primeiroAluno.imprimir();
	primeiroAluno.situacao();
}