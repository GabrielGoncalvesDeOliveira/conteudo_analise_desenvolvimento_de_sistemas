/* Exercício - Funções - 19/08/2021 - AED1

1-) Crie um algoritmo, modularizado em funções, que faça a leitura dos elementos de um vetor de 5 elementos
do tipo inteiro e, a seguir, calcule: a média entre eles; a quantidade de positivos; a quantidade de negativos;
e a quantidade de nulos; */

#include <iostream>
#include <conio.h>
using namespace std;

#define t 5

int vetor[t], i; // variáveis globais ou públicas

// função que efetua a leitura dos elementos do vetor
void lerElementosDoVetor() {
	
	cout << "\n\t LEITURA DOS ELEMENTOS DO VETOR: \n";
	
	for (i = 0; i < t; i++) {
		
		cout << "\n\t por gentileza digite o " << i + 1 << "º elemento: ";
		cin >> vetor[i];
	}
}

// função que efetua o Cálculo da média entre os elementos do vetor
void calcularMediaEntreOsElementos() {
	
	cout << "\n\t CÁLCULO DA MÉDIA ENTRE OS ELEMENTOS: \n";
	
	int soma = 0; 
	
	for (i = 0; i < t; i++) {
		
		soma += vetor[i];
	}
	cout << "\n\t A média entre os elementos digitados no vetor é: " << soma / t << "\n";
}


// função que conta a quantidade de elementos positivos digitados
void contadorDaQuantidadeDeElementosPositivos() {
	
	cout << "\n\t CONTADOR DA QUANTIDADE DE ELEMENTOS POSITIVOS: \n";
	
	int contador = 0;
	
	for (i = 0; i < t; i++) {
		
		if (vetor[i] > 0) {
			
			contador++;
		}
	}
	if (contador == 0) {
		
		cout << "\n\t Nenhum elemento positivo foi digitado." << "\n";
	
	} else if (contador == 1) {
		cout << "\n\t Somente um elemento positivo foi digitado. \n";
		
	} else {
		cout << "\n\t A quantidade de elementos positivos digitados é: " << contador << "\n";
	}
}

// função que conta a quantidade de elementos negativos digitados
void contadorDaQuantidadeDeElementosNegativos() {
	
	cout << "\n\t CONTADOR DA QUANTIDADE DE ELEMENTOS NEGATIVOS: \n";
	
	int contador = 0;
	
	for (i = 0; i < t; i++) {
		
		if (vetor[i] < 0) {
			
			contador++;
		}
	}
	if (contador == 0) {
		
		cout << "\n\t Nenhum elemento negativo foi digitado." << "\n";
	
	} else if (contador == 1) {
		cout << "\n\t Somente um elemento negativo foi digitado. \n";
		
	} else {
		cout << "\n\t A quantidade de elementos negativos digitados é: " << contador << "\n";
	}
}

// função que conta a quantidade de elementos nulos digitados
void contadorDaQuantidadeDeElementosNulos() {
	
	cout << "\n\t CONTADOR DA QUANTIDADE DE ELEMENTOS NULOS: \n";
	
	int contador = 0;
	
	for (i = 0; i < t; i++) {
		
		if (vetor[i] == 0) {
			
			contador++;
		}
	}
	if (contador == 0) {
		
		cout << "\n\t Nenhum elemento nulo foi digitado.";
	
	} else if (contador == 1) {
		cout << "\n\t Somente um elemento nulo foi digitado. \n";
		
	} else {
		cout << "\n\t A quantidade de elementos nulos digitados é: " << contador << "\n";
	}
}

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CHAMANDO ALGUMAS FUNÇÕES: \n";
	
	lerElementosDoVetor();
	
	calcularMediaEntreOsElementos();
	
	contadorDaQuantidadeDeElementosPositivos();
	
	contadorDaQuantidadeDeElementosNegativos();
	
	contadorDaQuantidadeDeElementosNulos();
	
	getch();
}
