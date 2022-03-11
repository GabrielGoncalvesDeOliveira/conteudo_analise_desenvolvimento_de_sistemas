/* 1-) Faça um algoritmo que leia várias idades de pessoas. Calcule e imprima a idade média 
deste grupo de indivíduos. A condição de parada será quando o usuário digitar idade 
igual a zero. */

#include <iostream>
#include <conio.h>
using namespace std;

float idade, somaDasIdades; int contador;

int main() {
	
	setlocale(LC_ALL,"");
	
	contador = -1; somaDasIdades = 0;
	
	cout << "\n\t ALGORITMO LEITOR DA IDADE DE VÁRIAS PESSOAS, COM CONDIÇÃO DE PARADA: \n";
	
	do {
		cout << "\n\t Por gentileza, digite uma idade: ";
		cin >> idade;
		
		somaDasIdades += idade;
		contador++;          
	
	} while (idade != 0);
	
	if (somaDasIdades > 0) {
		cout << "\n\t A idade média deste grupo de indivíduos é: "
		<< somaDasIdades / contador;
	}
	getch();
}
