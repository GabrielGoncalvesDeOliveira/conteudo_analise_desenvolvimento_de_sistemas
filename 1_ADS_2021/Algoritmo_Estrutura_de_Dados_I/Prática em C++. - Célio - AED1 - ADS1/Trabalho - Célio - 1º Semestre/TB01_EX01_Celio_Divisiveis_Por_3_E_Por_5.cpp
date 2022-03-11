/* Correção dos algoritmos passados de tarefa no dia 11/06/2021. AED1

1-) Escreva um programa que leia uma sequência de números e armazene em um vetor de 10 posições
somente os que são divisíveis por 3 e por 5. 
Finalize a leitua quando o vetor estiver totalmente preenchido. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10
int v[T], num, i = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t VETOR LEITOR DE NÚMEROS DIVISÍVEIS POR 3 E POR 5: \n";
	
	while (i < T) {
		
		cout << "\n\t Por gentileza digite um número: ";
		
		/* A leitura poderia ser feita direto no vetor. Caso o número não satisfaça a verificação, 
		 ele seria sobreposto na próxima repetição. ex: cin >> v[i]; */
		cin >> num;
		
		if (num % 3 == 0 && num % 5 == 0 && num != 0) {
			
			v[i] = num;
			i++;
		
		} else {
			cout << "\n\t Ora bolas, o número " << num << " não é divisível nem por 3 e nem por 5. \n";
		}
	}
	i = 0;
		
	cout << "\n\t Lista dos números divisíveis por 3 e por 5 que foram digitados: \n";
	
	while (i < T) {
		
		cout << "\n\t O " << i + 1 << "º elemento guardado no vetor foi o: " << v[i] << "\n";
		i++;
	}
	getch();
}
