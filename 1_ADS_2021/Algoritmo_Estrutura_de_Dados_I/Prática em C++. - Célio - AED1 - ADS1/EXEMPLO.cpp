#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float n1, n2, soma;  //inteiro

int main() 
{   
	setlocale(LC_ALL, "");
	//n1 = 40;  //ATRIBUIÇÃO DO VALOR 40 À VARIÁVEL N1
	//n2 = 20;
	cout << "\n\t EXEMPLO: CÓDIGO SOMADOR DE DOIS NÚMEROS: \n";
	cout << "\n\t Digite o primeiro numero: ";  //IMPRIMA "......";
	cin >> n1;        //   LEIA n1;
	cout << "\n\t Digite o segundo numero: ";
	cin >> n2;
	soma = n1 + n2;
	cout << "\n\t Soma: " << soma;  //  Imprima "Soma: ", soma;
}


