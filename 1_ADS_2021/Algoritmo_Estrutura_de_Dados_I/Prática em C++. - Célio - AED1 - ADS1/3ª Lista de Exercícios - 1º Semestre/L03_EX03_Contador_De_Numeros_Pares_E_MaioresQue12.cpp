/* 3-) Fa�a um algoritmo que leia 20 n�meros inteiros e a seguir:
a-) Calcule e mostre a quantidade de elementos �mpares;
b-) Calcule e mostre a soma entre os elementos pares e maiores que 12. */

#include <iostream>
#include <conio.h>
using namespace std;

int numero, contador = 1, quantidadeDeParesMaioresQue12 = 0, quantidadeDeImpares = 0;
int somaDosParesMaioresQue12 = 0;
// #define limite = 20 

int main() {
	
	setlocale(LC_ALL,"");

	cout << "\n\t ALGORITMO CONTADOR DE N�MEROS PARES E MAIORES OU IGUAIS A 12: \n";
	
	while (contador <= 20) /* limite */ { 
		
		cout << "\n\t Por gentileza, digite o " << contador << "� n�mero: ";
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
		cout << "\n\t N�o foram digitados n�meros �mpares.";
	}
	
	cout << "\n\n\t A quantidade de n�meros �mpares �: " << quantidadeDeImpares;
	
	cout << "\n\n\t A soma dos n�meros pares maiores ou iguais a 12 �: " << somaDosParesMaioresQue12;
	
	cout << "\n\n\t Por fim, a quantidade de n�meros pares e maiores ou iguais a 12 �: "
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
	 * Observa��o: Tipo de dado do resto e do quociente: int
	 */
}

