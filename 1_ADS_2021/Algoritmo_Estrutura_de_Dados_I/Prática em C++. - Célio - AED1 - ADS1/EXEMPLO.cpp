#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float n1, n2, soma;  //inteiro

int main() 
{   
	setlocale(LC_ALL, "");
	//n1 = 40;  //ATRIBUI��O DO VALOR 40 � VARI�VEL N1
	//n2 = 20;
	cout << "\n\t EXEMPLO: C�DIGO SOMADOR DE DOIS N�MEROS: \n";
	cout << "\n\t Digite o primeiro numero: ";  //IMPRIMA "......";
	cin >> n1;        //   LEIA n1;
	cout << "\n\t Digite o segundo numero: ";
	cin >> n2;
	soma = n1 + n2;
	cout << "\n\t Soma: " << soma;  //  Imprima "Soma: ", soma;
}


