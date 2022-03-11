/* 3-) Faça um algoritmo que leia 20 números inteiros e a seguir:
a-) Calcule e mostre a quantidade de elementos ímpares;
b-) Calcule e mostre a soma entre os elementos pares e maiores que 12. */

#include <iostream>
#include <conio.h>
using namespace std;

int numero, contador = 1, quantidadeDeParesMaioresQue12 = 0, quantidadeDeImpares = 0;
int somaDosParesMaioresQue12 = 0;
// #define limite = 20 

int main() {
	
	setlocale(LC_ALL,"");

	cout << "\n\t ALGORITMO CONTADOR DE NÚMEROS PARES E MAIORES OU IGUAIS A 12: \n";
	
	while (contador <= 20) /* limite */ { 
		
		cout << "\n\t Por gentileza, digite o " << contador << "º número: ";
		cin >> numero;
		
		if (numero % 2 != 0) {
			quantidadeDeImpares++;
		
		} else if (numero >= 12) {
			quantidadeDeParesMaioresQue12++;
			somaDosParesMaioresQue12 += numero;
		}
		contador++;
	}
	if (quantidadeDeImpares == 0) {
		cout << "\n\t Não foram digitados números ímpares.";
	}
	
	cout << "\n\n\t A quantidade de números ímpares é: " << quantidadeDeImpares;
	
	cout << "\n\n\t A soma dos números pares maiores ou iguais a 12 é: " << somaDosParesMaioresQue12;
	
	cout << "\n\n\t Por fim, a quantidade de números pares e maiores ou iguais a 12 é: "
	<< quantidadeDeParesMaioresQue12;
	
	getch();	
	
	/* ou: 
	 * 
	 * cout << "...";
	 * cin >> numero; 
	 *
	 * quociente = numero / 2;
	 * resto = numero - quociente * 2;
	 *
	 * if (resto == 0) {
	 * 	  ...
	 * } else if (numero >= 12) {
	 *    ...
	 *} 
	 * Observação: Tipo de dado do resto e do quociente: int
	 */
}

