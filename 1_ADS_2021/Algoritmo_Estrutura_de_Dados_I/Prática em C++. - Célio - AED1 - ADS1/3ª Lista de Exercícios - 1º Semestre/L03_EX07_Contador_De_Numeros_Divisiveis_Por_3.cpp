/* 7) Fa�a um algoritmo que leia 10 n�meros inteiros e a seguir: 
a) Calcule e mostre a quantidade de elementos divis�veis por 3; 
b) Calcule e mostre a quantidade de elementos �mpares e maiores que 11. */

#include <conio.h>
#include <iostream>
using namespace std;

int contador, numero, quociente, resto, contDeDivisiveisPor3, contDeImparesMaioresQue11;

int main() {
	
	contador = 1;
	contDeDivisiveisPor3 = 0;
	contDeImparesMaioresQue11 = 0;
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO CONTADOR DE N�MEROS DIVIS�VEIS POR 3 E DE �MPARES MAIORES QUE 11: \n";
	
	while (contador <= 10) {
		
		cout << "\n\t Digite o " << contador << "� n�mero: ";
		cin >> numero;
			
		quociente = numero / 3;
		resto = numero - quociente * 3;
		
		if (resto == 0) {
			contDeDivisiveisPor3++;
		}
		quociente = numero / 2;
		resto = numero - quociente * 2;
		
		if (resto != 0 && numero > 11) {
			contDeImparesMaioresQue11++;
		}
		contador++;
	}
	if (contDeDivisiveisPor3 == 0) {
		cout << "\n\t N�o foram digitados n�meros divis�veis por 3."; 
	
	} else {
		cout << "\n\t A quantidade de n�meros div�siveis por 3 �: "
		<< contDeDivisiveisPor3 << ".";
	}
	if (contDeImparesMaioresQue11 == 0) {
		cout << "\n\n\t N�o foram digitados n�meros �mpares e maiores que 11.";
	
	} else {
		
		cout << "\n\n\t A quantidade de n�meros �mpares e maiores que 11 �: " 
		<< contDeImparesMaioresQue11 << ".";
	}
	getch();	
	
	/* Observa��o: Para o c�lculo do resto da divis�o recomenda-se usar 
	o operador % (m�dulo ou porcentagem), fazendo a verifica��o do mesmo
	no pr�prio campo da express�o da estrutura condicional. */
}
