/* Nome: Gabriel Gon�alves de Oliveira, RA: 2111550021 - 1� ADS 

Atividade pr�tica em C++ - C�lio Desir� - Algoritmo e Estruturas de Dados 1 - 2021 

11) Fa�a um algoritmo que imprima o valor do somat�rio: S de y=1 at� y=200, passo 1 a 1 = 1 / y. */

#include <iostream>
#include <conio.h> 
using namespace std;

float somatorio = 0, valorDaExpressao = 0;
float valorDeY = 1;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO CALCULADOR DO SOMAT�RIO DE 1/Y, VARIANDO DE 1 AT� 200 VEZES: \n";
	
	while (valorDeY <= 200) {
		
		valorDaExpressao = 1 / valorDeY;
		
		somatorio += valorDaExpressao;
		
		valorDeY++;
		
		cout << "\n\t O valor de Y (denominador) �: " << valorDeY << "." << "  O resultado do somat�rio �: " << somatorio << ".";
	}
	cout << "\n\n\t O valor final do somat�rio �: " << somatorio << ".";
	
	getch();
	
	/* Observa��es: Ol� professor! Este somat�rio inicia a vari�vel Y com o valor 1
	* e vai at� o valor 201, fazendo ao todo 200 itera��es.
	* Caso queira exibir somente o resultado final do somat�rio, pe�o que comente
	* a linha correspondente � exibi��o do valor de Y e do valor do somat�rio,
	* dentro da estrutura de repeti��o While. */ 
}
