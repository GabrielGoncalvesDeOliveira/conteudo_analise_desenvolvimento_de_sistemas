/* 4. Escreva um algoritmo que leia tr�s notas de um aluno, calcule e mostre a m�dia
aritm�tica e a mensagem que segue na tabela abaixo:
0.0 (inclusive) at� 3.0 - Reprovado
3.0 (inclusive) at� 7.0 - Exame
7.0 (inclusive) at� 10.0 (inclusive) - Aprovado */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

float primeiraNota, segundaNota, terceiraNota, media;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DE M�DIA ARITM�TICA \n";
	
	cout << "\n\t Digite a primeira nota: "; cin >> primeiraNota;
	
	if (primeiraNota > 10) {
		cout << "\n\t Nota inv�lida, tente novamente.";
	}
	
	cout << "\n\t Digite a segunda nota: "; cin >> segundaNota;
	
	if (segundaNota > 10) {
		cout << "\n\t Nota inv�lida, tente novamente.";
	}
	
	cout << "\n\t Digite a terceira nota: "; cin >> terceiraNota;
	
	if (terceiraNota > 10) {
		cout << "\n\t Nota inv�lida, tente novamente.";
	}
	
	media = (primeiraNota + segundaNota + terceiraNota) / 3;
	
	cout << "\n\t A m�dia do aluno �: " << media << " \n";
	
	if (media <= 10.0 && media >= 8.0) {
		cout << "\n\t Aluno Aprovado!";
	}	else if (media < 7.0 && media >= 3.0) {
			cout << "\n\t Aluno de Exame!";	
	}	else if (media < 3.0 && media >= 0.0) {
			cout << "\n\t Aluno Reprovado!";
	}	else {
			cout << "Registro inv�lido, tente novamente.";
	}
	
	getch();
}
