/* Nome: Gabriel Gonçalves de Oliveira, RA: 2111550021 - 1º ADS 

Atividade prática em C++ - Célio Desiró - Algoritmo e Estruturas de Dados 1 - 2021

6) Escreva um algoritmo que leia a idade e o peso de 50 pessoas. Calcule e mostre: 
a) A quantidade de pessoas com mais de 50 kg; 
b) A média das idades das pessoas; 
c) A quantidade de pessoas maiores que 18 anos e com peso superior a 55 kg; 
d) A quantidade de pessoas com idade par. */

#include <iostream>
#include <conio.h>
using namespace std;

float peso, mediaDasIdades = 0;
int quantidadeDePessoasComMaisDe50kg = 0;
int quantidadeDePessoasComMaisDe18AnosE55Kg = 0;
int quantidadeDePessoasComIdadePar = 0;
int contador = 1, idade;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO CONTADOR DA IDADE E DO PESO DE 50 PESSOAS: \n";
	
	while (contador <= 50) {
		
		cout << "\n\t Por gentileza, digite a " << contador << "ª idade (em anos): ";
		cin >> idade;
		cout << "\n\t Certo, agora digite o " << contador << "º peso (em kg): ";
		cin >> peso;
		
		mediaDasIdades += idade;
		
		if (peso > 50) {
			quantidadeDePessoasComMaisDe50kg++;
		}
		if (idade > 18 && peso > 55) {
			quantidadeDePessoasComMaisDe18AnosE55Kg++;
		}
		if (idade % 2 == 0) {
			quantidadeDePessoasComIdadePar++;
		}
		contador++; 
	}
	if (quantidadeDePessoasComMaisDe50kg == 0) {
		cout << "\n\t Não foram encontradas pessoas com pesos maiores do que 50 kg.";
	
	} else {
		cout << "\n\t A quantidade de pessoas com mais de 50 kg é: "
		<< quantidadeDePessoasComMaisDe50kg << ".";
	}
	cout << "\n\n\t A média das idades das pessoas é: " << mediaDasIdades / 50 << ".";
	
	if (quantidadeDePessoasComMaisDe18AnosE55Kg == 0) {
		cout << "\n\n\t Não foram encontradas pessoas com mais de 18 anos e pesos maiores do que 55 kg."; 
		
	} else {
		cout << "\n\n\t A quantidade de pessoas com mais de 18 anos e pesos maiores de 55 kg é: "
		<< quantidadeDePessoasComMaisDe18AnosE55Kg << ".";
	}
	if (quantidadeDePessoasComIdadePar == 0) {
		cout << "\n\n\t Não foram encontradas pessoas com idade par.";
		
	} else {
		cout << "\n\n\t A quantidade de pessoas com idade par é: " 
		<< quantidadeDePessoasComIdadePar << ".";
	}
	getch();
}
