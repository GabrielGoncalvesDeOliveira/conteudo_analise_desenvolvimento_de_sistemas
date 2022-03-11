/* 10-) O Haras Mangalarga pretende trocar todas as ferraduras de seus cavalos. Escreva
um algoritmo, que leia o número de cavalos que o Haras possui. Calcule e mostre a
quantidade de ferraduras necessárias para equipar todos os cavalos do haras. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int quantidadeDeCavalos;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CALCULADOR DA QUANTIDADE DE FERRADURAS NECESSÁRIAS: \n";
	cout << "\n\t Olá senhor Haras Mangalarga!";
	cout << "\n\t Por gentileza, informe a quantidade de cavalos que o sr. possui: ";
	cin >> quantidadeDeCavalos;
	cout << "\n\t Certo, sr. Haras, você precisará de " << quantidadeDeCavalos * 4
	 << " ferraduras para equipar todos os seus cavalos.";
	 
	getch();
}

