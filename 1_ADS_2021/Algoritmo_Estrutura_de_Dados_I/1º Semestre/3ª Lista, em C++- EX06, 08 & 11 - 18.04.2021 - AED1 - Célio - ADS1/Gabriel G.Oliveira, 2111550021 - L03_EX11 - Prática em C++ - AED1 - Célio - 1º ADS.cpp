/* Nome: Gabriel Gonçalves de Oliveira, RA: 2111550021 - 1º ADS 

Atividade prática em C++ - Célio Desiró - Algoritmo e Estruturas de Dados 1 - 2021 

11) Faça um algoritmo que imprima o valor do somatório: S de y=1 até y=200, passo 1 a 1 = 1 / y. */

#include <iostream>
#include <conio.h> 
using namespace std;

float somatorio = 0, valorDaExpressao = 0;
float valorDeY = 1;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO CALCULADOR DO SOMATÓRIO DE 1/Y, VARIANDO DE 1 ATÉ 200 VEZES: \n";
	
	while (valorDeY <= 200) {
		
		valorDaExpressao = 1 / valorDeY;
		
		somatorio += valorDaExpressao;
		
		valorDeY++;
		
		cout << "\n\t O valor de Y (denominador) é: " << valorDeY << "." << "  O resultado do somatório é: " << somatorio << ".";
	}
	cout << "\n\n\t O valor final do somatório é: " << somatorio << ".";
	
	getch();
	
	/* Observações: Olá professor! Este somatório inicia a variável Y com o valor 1
	* e vai até o valor 201, fazendo ao todo 200 iterações.
	* Caso queira exibir somente o resultado final do somatório, peço que comente
	* a linha correspondente à exibição do valor de Y e do valor do somatório,
	* dentro da estrutura de repetição While. */ 
}
