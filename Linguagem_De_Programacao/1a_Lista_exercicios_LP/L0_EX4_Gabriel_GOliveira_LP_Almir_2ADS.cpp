/* Nome: Gabriel Gonçalves de Oliveira - RA: 2111550021 - 2º ADS - 2022

Quarto exercício (13º da lista):

	Para atingir-se o índice olímpico, são realizados vários torneios de corridas de 100
metros. Leia o nome e o tempo de um atleta e apresente sua pontuação, segundo a
tabela abaixo:
T < 10 seg - 100 ptos
T >= 10 e T <=13 seg - 70 ptos
T > 13 Seg - 40 ptos*/

#include <iomanip>
#include <iostream>
#include <clocale>
#include <string>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	string nome; 
	float tempo;

	cout << "\n ====================================================================== \n";
	cout << "\n\t Por gentileza atleta, digite seu nome: ";
	cin >> nome;

	cout << "\n\t Agora, digite seu tempo em segundos (exemplo: 10.3): ";
	cin >> tempo;

	if (tempo < 10.0) {
		cout << "\n\t Dado seu tempo informado " << nome << ", sua pontuação é de 100 pontos. Parabéns!";
	
	} else if (tempo >= 10.0 && tempo <= 13.0) {
		cout << "\n\t Dado seu tempo informado " << nome << ", sua pontuação é de 70 pontos.";
	
	} else {
		cout << "\n\t Dado seu tempo informado " << nome << ", sua pontuação é de 40 pontos.";
	}
	cout << "\n\n ====================================================================== \n";
	getc;
}