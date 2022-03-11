/* 2) Escreva um algoritmo que leia um vetor de 10 elementos, do tipo caractere, e mostre: 
a. A quantidade de vogais; 
b. Em quais posi��es est�o armazenadas a letra M; 
c. A quantidade de vezes que aparece a letra P; 
d. Em quais posi��es existe espa�o em branco. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10

char vetor[T];
int i, quantidadeDeVogais, quantidadeDeLetrasP;

int main() {

	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO REALIZADOR DE PROCESSAMENTOS EM UM VETOR DO TIPO CARACTERE: \n";
	
	for (i = 0; i < T; i++) {
		
		cout << "\n\t Por gentileza digite o " << i + 1 << "� elemento: ";
		cin >> vetor[i];
	}
	
	quantidadeDeVogais = 0;
	
	for (i = 0; i < T; i++) {
		
		vetor[i] = toupper(vetor[i]);
		
		if (vetor[i] == 'A' || vetor[i] == 'E' || vetor[i] == 'I' || vetor[i] == 'O' || vetor[i] == 'U') {
				
			quantidadeDeVogais++;
		}
		
		if (vetor[i] == 'M') {
			
			cout << "\n\t Foi armazenada uma letra 'M' na " << i + 1 << "� posi��o do vetor. \n";
		}
		
		if (vetor[i] == 'P') {
			
			quantidadeDeLetrasP++;
		}
		
		if (vetor[i] == ' ') {
			
			cout << "\n\t Foi armazenado um espa�o em branco na " << i + 1 << "� posi��o do vetor. \n";
		}
	}
	
	cout << "\n\t Ao todo foram digitadas " << quantidadeDeVogais << " vogais nesse vetor. \n";
	
	cout << "\n\t Ao todo foram digitadas " << quantidadeDeLetrasP << " letras 'P' nesse vetor.";
	
	getch();
}
