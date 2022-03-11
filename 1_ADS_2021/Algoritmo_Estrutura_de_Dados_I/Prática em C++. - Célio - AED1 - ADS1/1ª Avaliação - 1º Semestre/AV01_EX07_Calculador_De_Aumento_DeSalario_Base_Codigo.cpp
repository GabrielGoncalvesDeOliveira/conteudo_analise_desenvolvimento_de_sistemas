/* Avaliação de Algoritmo - Exercício Bônus:
Escreva um algoritmo que leia o código do cargo de um funcionário e o seu salário.
A tabela abaixo apresenta os cargos e os respectivos aumentos salariais a serem aplicados.
Calcule e mostre o novo salário do funcionário.

Código -- Cargo ----- Percentual
1 ---	Escriturário -- 5%
2 ---	Secretário ----	7.5%
3 ---	Caixa ---------	8.3%
4 ---	Gerente -------	1% */ 

#include <iostream>
#include <conio.h>
using namespace std;

int codigo;
float salario; 

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADOR DO AUMENTO DE SALÁRIO DE UM FUNCIONÁRIO COM BASE EM SEU CÓDIGO: \n";
	
	cout << "\n\t Olá funcionário(a)! Por gentileza, digite seu código: ";
	cin >> codigo;
	
	if (codigo > 4) {
		cout << "\n\t Código inválido, feche o programa e tente novamente.";
		return 0;
	}
	cout << "\n\t Certo, agora digite o seu salário: ";
	cin >> salario;
	
	if (salario < 500 || salario > 15000) {
		cout << "\n\t Salário inválido, feche o programa e tente novamente.";
		return 0;
	}
	switch (codigo) {
		
		case 1: {
			cout << "\n\t Por ser Escriturário(a) e com o aumento previsto, o seu novo salário será: R$ "
			<< salario * 1.05 << ".";
			break;
		}
		case 2: {
			cout << "\n\t Por ser Secretário(a) e com o aumento previsto, o seu novo salário será: R$ "
			<< salario * 1.075 << ".";
			break;
		}	
		case 3: {
			cout << "\n\t Por ser Caixa e com o aumento previsto, o seu novo salário será: R$ "
			<< salario * 1.083 << ".";
			break;
		}
		case 4: {
			cout << "\n\t Por ser Gerente e com o aumento previsto, o seu novo salário será: R$ " 
			<< salario * 1.01 << ".";
			break;
		}
	}	
	getch();
}
