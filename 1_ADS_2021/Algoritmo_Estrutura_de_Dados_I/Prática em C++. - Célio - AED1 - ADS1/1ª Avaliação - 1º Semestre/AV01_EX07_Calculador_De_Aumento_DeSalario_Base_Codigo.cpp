/* Avalia��o de Algoritmo - Exerc�cio B�nus:
Escreva um algoritmo que leia o c�digo do cargo de um funcion�rio e o seu sal�rio.
A tabela abaixo apresenta os cargos e os respectivos aumentos salariais a serem aplicados.
Calcule e mostre o novo sal�rio do funcion�rio.

C�digo -- Cargo ----- Percentual
1 ---	Escritur�rio -- 5%
2 ---	Secret�rio ----	7.5%
3 ---	Caixa ---------	8.3%
4 ---	Gerente -------	1% */ 

#include <iostream>
#include <conio.h>
using namespace std;

int codigo;
float salario; 

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t CALCULADOR DO AUMENTO DE SAL�RIO DE UM FUNCION�RIO COM BASE EM SEU C�DIGO: \n";
	
	cout << "\n\t Ol� funcion�rio(a)! Por gentileza, digite seu c�digo: ";
	cin >> codigo;
	
	if (codigo > 4) {
		cout << "\n\t C�digo inv�lido, feche o programa e tente novamente.";
		return 0;
	}
	cout << "\n\t Certo, agora digite o seu sal�rio: ";
	cin >> salario;
	
	if (salario < 500 || salario > 15000) {
		cout << "\n\t Sal�rio inv�lido, feche o programa e tente novamente.";
		return 0;
	}
	switch (codigo) {
		
		case 1: {
			cout << "\n\t Por ser Escritur�rio(a) e com o aumento previsto, o seu novo sal�rio ser�: R$ "
			<< salario * 1.05 << ".";
			break;
		}
		case 2: {
			cout << "\n\t Por ser Secret�rio(a) e com o aumento previsto, o seu novo sal�rio ser�: R$ "
			<< salario * 1.075 << ".";
			break;
		}	
		case 3: {
			cout << "\n\t Por ser Caixa e com o aumento previsto, o seu novo sal�rio ser�: R$ "
			<< salario * 1.083 << ".";
			break;
		}
		case 4: {
			cout << "\n\t Por ser Gerente e com o aumento previsto, o seu novo sal�rio ser�: R$ " 
			<< salario * 1.01 << ".";
			break;
		}
	}	
	getch();
}
