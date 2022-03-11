/* Maria recebeu a notícia de que este mês seu salário sofrerá um aumento, 
mas ela ainda não sabe o valor do aumento. Especula-se que pode ser 5%, 8% ou 10%. 
Escreva um algoritmo que leia o salário de Maria e mostre os seus três possíveis salários. */

#include <iostream>
#include <conio.h>
using namespace std;

float salario;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO CALCULADOR DAS POSSIBILIDADES DE AUMENTO DE SALÁRIO DA MARIA: \n";
	
	cout << "\n\t Maria, por gentileza digite seu salário: ";
	cin >> salario;
	
	cout << "\n\t Maria, caso o aumento seja de 5%, seu novo salário será: " 
	<< salario * 1.05; // ou salario + salario * 5 / 100;
	
	cout << "\n\n\t Agora, caso o aumento seja de 8%, seu novo salário será: " << salario * 1.08;
	
	cout << "\n\n\t Por fim, caso o aumento seja de 10%, seu novo salário será: " << salario * 1.10;
	
	getch();
}
