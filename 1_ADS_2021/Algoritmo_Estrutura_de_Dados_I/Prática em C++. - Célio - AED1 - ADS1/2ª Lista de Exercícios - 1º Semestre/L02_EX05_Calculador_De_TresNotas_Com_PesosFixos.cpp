/* 5-) A nota final de um estudante é calculada a partir de três notas atribuídas
respectivamente: um trabalho de laboratório, uma avaliação semestral e um exame
final. A média das três notas mencionadas obedece aos pesos a seguir:
Trabalho de laboratório = 2
Avaliação semestral = 3
Exame final = 5. Faça um algoritmo que leia as três notas, 
calcule e mostre a média ponderada e o conceito . */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float trabalhoDeLaboratorio, avaliacaoSemestral, exameFinal, media;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DE MÉDIA COM 3 NOTAS E 3 PESOS FIXOS: \n";
	
	cout << "\n\t Digite a nota do Trabalho de Laboratório: ";
	cin >> trabalhoDeLaboratorio;
	
	if (trabalhoDeLaboratorio > 10) {
		trabalhoDeLaboratorio = 0;
	}
	
	cout << "\n\t Digite a nota da Avaliação semestral: ";
	cin >> avaliacaoSemestral;
	
	if (avaliacaoSemestral > 10) {
		avaliacaoSemestral = 0;
	}
	
	cout << "\n\t Digite a nota do Exame final: ";
	cin >> exameFinal;
	
	if (exameFinal > 10) {
		exameFinal = 0;
	}
	
	media = (trabalhoDeLaboratorio * 2 + avaliacaoSemestral * 3 + exameFinal * 5) / 10;	
	
	if (media >= 8 && media <= 10) {
		cout << "\n\t A Média final é: " << media;
		cout << "\n\t Conceito: A \n";
	} else if (media >= 7 && media < 8) {
		cout << "\n\t A Média final é: " << media;
		cout << "\n\t Conceito: B \n";
	} else if (media >= 6 && media < 7) {
		cout << "\n\t A Média final é: " << media;
		cout << "\n\t Conceito: C \n";
	} else if (media >= 5 && media < 6) {
		cout << "\n\t A Média final é: " << media;
		cout << "\n\t Conceito: D \n";
	} else if (media >= 0.1 && media < 5) {
		cout << "\n\t A Média final é: " << media;
		cout << "\n\t Conceito: E \n";
	} else {
		cout << "\n\t Avaliação inválida!";
	} 
	
	getch();
}
