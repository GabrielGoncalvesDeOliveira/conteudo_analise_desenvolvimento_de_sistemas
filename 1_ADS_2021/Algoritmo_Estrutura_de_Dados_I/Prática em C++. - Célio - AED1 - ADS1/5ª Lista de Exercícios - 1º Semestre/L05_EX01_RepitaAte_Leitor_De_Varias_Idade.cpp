/* 1-) Fa�a um algoritmo que leia v�rias idades de pessoas. Calcule e imprima a idade m�dia 
deste grupo de indiv�duos. A condi��o de parada ser� quando o usu�rio digitar idade 
igual a zero. */

#include <iostream>
#include <conio.h>
using namespace std;

float idade, somaDasIdades; int contador;

int main() {
	
	setlocale(LC_ALL,"");
	
	contador = -1; somaDasIdades = 0;
	
	cout << "\n\t ALGORITMO LEITOR DA IDADE DE V�RIAS PESSOAS, COM CONDI��O DE PARADA: \n";
	
	do {
		cout << "\n\t Por gentileza, digite uma idade: ";
		cin >> idade;
		
		somaDasIdades += idade;
		contador++;          
	
	} while (idade != 0);
	
	if (somaDasIdades > 0) {
		cout << "\n\t A idade m�dia deste grupo de indiv�duos �: "
		<< somaDasIdades / contador;
	}
	getch();
}
