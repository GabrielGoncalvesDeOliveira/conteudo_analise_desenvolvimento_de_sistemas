/* Maria recebeu a not�cia de que este m�s seu sal�rio sofrer� um aumento, 
mas ela ainda n�o sabe o valor do aumento. Especula-se que pode ser 5%, 8% ou 10%. 
Escreva um algoritmo que leia o sal�rio de Maria e mostre os seus tr�s poss�veis sal�rios. */

#include <iostream>
#include <conio.h>
using namespace std;

float salario;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO CALCULADOR DAS POSSIBILIDADES DE AUMENTO DE SAL�RIO DA MARIA: \n";
	
	cout << "\n\t Maria, por gentileza digite seu sal�rio: ";
	cin >> salario;
	
	cout << "\n\t Maria, caso o aumento seja de 5%, seu novo sal�rio ser�: " 
	<< salario * 1.05; // ou salario + salario * 5 / 100;
	
	cout << "\n\n\t Agora, caso o aumento seja de 8%, seu novo sal�rio ser�: " << salario * 1.08;
	
	cout << "\n\n\t Por fim, caso o aumento seja de 10%, seu novo sal�rio ser�: " << salario * 1.10;
	
	getch();
}
