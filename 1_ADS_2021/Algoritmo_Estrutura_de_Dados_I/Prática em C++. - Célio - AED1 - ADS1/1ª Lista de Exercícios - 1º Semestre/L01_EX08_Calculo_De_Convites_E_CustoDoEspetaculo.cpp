/* 8-) Fa�a um algoritmo que leia o custo de um espet�culo teatral e o pre�o do convite
desse espet�culo. O algoritmo deve calcular e mostrar a quantidade de convites que devem
ser vendidos para que pelo menos o custo do espet�culo seja alcan�ado. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float custoDoEspetaculo;
int precoDoConvite, quantidadeDeConvites;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\t CALCULADORA DA QUANTIDADE DE CONVITES PARA CUSTEAR UM ESPET�CULO \n";
	cout << "\n\t Por gentileza, digite o custo do espet�culo: ";
	cin >> custoDoEspetaculo;
	cout << "\n\t Certo, agora digite o pre�o de cada convite para o espet�culo: ";
	cin >> precoDoConvite;
	
	quantidadeDeConvites = custoDoEspetaculo / precoDoConvite;
	
	cout << "\n\t Ser� preciso vender " << quantidadeDeConvites << " convites para custear o espet�culo \n\n";
	
	/* Adi��es para testar a estrutura condicional IF: 
	cout << "\n\t informe a quantidade de ingressos vendidos:" ;
	cin >> quantidadeVendida;
	
	if (quantidadeVendida >= quantidadeDeConvites) {
		cout << "\n\t Custo alcan�ado";
	} else {
		cout << "\n\t Custo n�o alcan�ado";
	} */
	
	getch();
} 
