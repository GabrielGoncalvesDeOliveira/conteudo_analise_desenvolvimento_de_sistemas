/* 9) A empresa Igual Diferente S/A deseja conceder um aumento salarial de 5% para 
todos os seus 20 funcion�rios. Escreva um algoritmo que leia o sal�rio de cada 
funcion�rio, a seguir calcule e mostre o novo sal�rio.  */

#include <conio.h>
#include <iostream>
using namespace std;

float salario;
int contador;

int main () {
	
	setlocale(LC_ALL,"");
	
	contador = 1;
	
	cout << "\n\t CALCULADOR DO AUMENTO DE SAL�RIO DE 20 FUNCION�RIOS: \n";
	
	while (contador <= 20) {
		
		cout << "\n\t Por gentileza, digite o sal�rio do " << contador << "� funcion�rio: R$";
		cin >> salario;
		
		cout << "\n\t O novo sal�rio do " << contador << "� funcion�rio, com aumento de 5� �: R$"
		<< salario * 1.05 << ". \n";
		
		contador++;
	}
	getch();
}
