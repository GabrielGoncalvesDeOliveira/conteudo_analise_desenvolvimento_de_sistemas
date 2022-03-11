/* 5-) A nota final de um estudante � calculada a partir de tr�s notas atribu�das
respectivamente: um trabalho de laborat�rio, uma avalia��o semestral e um exame
final. A m�dia das tr�s notas mencionadas obedece aos pesos a seguir:
Trabalho de laborat�rio = 2
Avalia��o semestral = 3
Exame final = 5. Fa�a um algoritmo que leia as tr�s notas, 
calcule e mostre a m�dia ponderada e o conceito . */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float trabalhoDeLaboratorio, avaliacaoSemestral, exameFinal, media;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DE M�DIA COM 3 NOTAS E 3 PESOS FIXOS: \n";
	
	cout << "\n\t Digite a nota do Trabalho de Laborat�rio: ";
	cin >> trabalhoDeLaboratorio;
	
	if (trabalhoDeLaboratorio > 10) {
		trabalhoDeLaboratorio = 0;
	}
	
	cout << "\n\t Digite a nota da Avalia��o semestral: ";
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
		cout << "\n\t A M�dia final �: " << media;
		cout << "\n\t Conceito: A \n";
	} else if (media >= 7 && media < 8) {
		cout << "\n\t A M�dia final �: " << media;
		cout << "\n\t Conceito: B \n";
	} else if (media >= 6 && media < 7) {
		cout << "\n\t A M�dia final �: " << media;
		cout << "\n\t Conceito: C \n";
	} else if (media >= 5 && media < 6) {
		cout << "\n\t A M�dia final �: " << media;
		cout << "\n\t Conceito: D \n";
	} else if (media >= 0.1 && media < 5) {
		cout << "\n\t A M�dia final �: " << media;
		cout << "\n\t Conceito: E \n";
	} else {
		cout << "\n\t Avalia��o inv�lida!";
	} 
	
	getch();
}
