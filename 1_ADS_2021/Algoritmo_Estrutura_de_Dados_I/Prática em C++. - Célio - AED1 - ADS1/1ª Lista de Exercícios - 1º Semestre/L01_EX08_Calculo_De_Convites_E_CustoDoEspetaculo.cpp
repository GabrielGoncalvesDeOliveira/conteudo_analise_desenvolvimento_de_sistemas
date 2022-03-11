/* 8-) Faça um algoritmo que leia o custo de um espetáculo teatral e o preço do convite
desse espetáculo. O algoritmo deve calcular e mostrar a quantidade de convites que devem
ser vendidos para que pelo menos o custo do espetáculo seja alcançado. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float custoDoEspetaculo;
int precoDoConvite, quantidadeDeConvites;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\t CALCULADORA DA QUANTIDADE DE CONVITES PARA CUSTEAR UM ESPETÁCULO \n";
	cout << "\n\t Por gentileza, digite o custo do espetáculo: ";
	cin >> custoDoEspetaculo;
	cout << "\n\t Certo, agora digite o preço de cada convite para o espetáculo: ";
	cin >> precoDoConvite;
	
	quantidadeDeConvites = custoDoEspetaculo / precoDoConvite;
	
	cout << "\n\t Será preciso vender " << quantidadeDeConvites << " convites para custear o espetáculo \n\n";
	
	/* Adições para testar a estrutura condicional IF: 
	cout << "\n\t informe a quantidade de ingressos vendidos:" ;
	cin >> quantidadeVendida;
	
	if (quantidadeVendida >= quantidadeDeConvites) {
		cout << "\n\t Custo alcançado";
	} else {
		cout << "\n\t Custo não alcançado";
	} */
	
	getch();
} 
