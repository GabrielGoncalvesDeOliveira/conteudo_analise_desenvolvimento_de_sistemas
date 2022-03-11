/* 5-) Construa um algoritmo que leia 3 notas e seus respectivos pesos, calcule e mostre 
a média ponderada dessas notas */

#include <iostream>
#include <conio.h>
#include <locale.h>

using namespace std;

float nota1, nota2, nota3, peso1, peso2, peso3, media;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\t CALCULADORA DE MÉDIA PONDERADA COM 3 NOTAS E 3 PESOS: \n";
	cout << "\n\t Digite a 1ª nota: ";  cin >> nota1;
	cout << "\n\t Digite o 1º peso: ";  cin >> peso1;
	cout << "\n\t Digite a 2ª nota: ";  cin >> nota2;
	cout << "\n\t Digite o 2º peso: ";  cin >> peso2;
	cout << "\n\t Digite a 3ª nota: ";  cin >> nota3;
	cout << "\n\t Digite o 3º peso: ";  cin >> peso3;
	
	media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);
	
	cout << "\n\t A Média ponderada é: " << media;
	
	getch();
}
