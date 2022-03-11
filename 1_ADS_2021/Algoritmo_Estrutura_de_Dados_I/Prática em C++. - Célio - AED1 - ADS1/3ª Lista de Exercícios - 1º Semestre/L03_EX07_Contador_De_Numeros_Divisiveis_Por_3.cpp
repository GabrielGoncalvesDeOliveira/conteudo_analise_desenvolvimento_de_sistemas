/* 7) Faça um algoritmo que leia 10 números inteiros e a seguir: 
a) Calcule e mostre a quantidade de elementos divisíveis por 3; 
b) Calcule e mostre a quantidade de elementos ímpares e maiores que 11. */

#include <conio.h>
#include <iostream>
using namespace std;

int contador, numero, quociente, resto, contDeDivisiveisPor3, contDeImparesMaioresQue11;

int main() {
	
	contador = 1;
	contDeDivisiveisPor3 = 0;
	contDeImparesMaioresQue11 = 0;
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO CONTADOR DE NÚMEROS DIVISÍVEIS POR 3 E DE ÍMPARES MAIORES QUE 11: \n";
	
	while (contador <= 10) {
		
		cout << "\n\t Digite o " << contador << "º número: ";
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
		cout << "\n\t Não foram digitados números divisíveis por 3."; 
	
	} else {
		cout << "\n\t A quantidade de números divísiveis por 3 é: "
		<< contDeDivisiveisPor3 << ".";
	}
	if (contDeImparesMaioresQue11 == 0) {
		cout << "\n\n\t Não foram digitados números ímpares e maiores que 11.";
	
	} else {
		
		cout << "\n\n\t A quantidade de números ímpares e maiores que 11 é: " 
		<< contDeImparesMaioresQue11 << ".";
	}
	getch();	
	
	/* Observação: Para o cálculo do resto da divisão recomenda-se usar 
	o operador % (módulo ou porcentagem), fazendo a verificação do mesmo
	no próprio campo da expressão da estrutura condicional. */
}
