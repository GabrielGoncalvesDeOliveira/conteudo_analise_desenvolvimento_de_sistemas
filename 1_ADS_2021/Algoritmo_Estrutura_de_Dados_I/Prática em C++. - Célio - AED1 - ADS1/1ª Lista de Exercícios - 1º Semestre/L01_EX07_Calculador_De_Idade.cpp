/* 7-) Fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual,
calcule e mostre: a idade dessa pessoa; e quantos anos essa pessoa ter� em 2030.  */ 

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int anoDeNascimento, anoAtual;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADOR DA IDADE DE UMA PESSOA: \n";
	cout << "\n\t Por gentileza, digite seu ano de nascimento: ";
	cin >> anoDeNascimento; 
	cout << "\n\t Agora digite o ano atual: ";
	cin >> anoAtual;
	cout << "\n\t A sua idade atual, em anos, � ou ser�: " << anoAtual - anoDeNascimento;
	cout << "\n\t Por fim, a sua idade, em anos, em 2030 ser�: " << 2030 - anoDeNascimento;
	cout << "\n\t Por fim, a sua idade, em anos, em 2100 ser�: " << 2100 - anoDeNascimento;
	
	getch();
}
