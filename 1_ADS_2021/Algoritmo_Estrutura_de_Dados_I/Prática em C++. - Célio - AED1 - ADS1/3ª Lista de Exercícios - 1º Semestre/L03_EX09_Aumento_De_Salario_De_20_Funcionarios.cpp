/* 9) A empresa Igual Diferente S/A deseja conceder um aumento salarial de 5% para 
todos os seus 20 funcionários. Escreva um algoritmo que leia o salário de cada 
funcionário, a seguir calcule e mostre o novo salário.  */

#include <conio.h>
#include <iostream>
using namespace std;

float salario;
int contador;

int main () {
	
	setlocale(LC_ALL,"");
	
	contador = 1;
	
	cout << "\n\t CALCULADOR DO AUMENTO DE SALÁRIO DE 20 FUNCIONÁRIOS: \n";
	
	while (contador <= 20) {
		
		cout << "\n\t Por gentileza, digite o salário do " << contador << "º funcionário: R$";
		cin >> salario;
		
		cout << "\n\t O novo salário do " << contador << "º funcionário, com aumento de 5º é: R$"
		<< salario * 1.05 << ". \n";
		
		contador++;
	}
	getch();
}
