/* Exerc�cio - Fun��es - 19/08/2021 - AED1

1-) Crie um algoritmo, modularizado em fun��es, que fa�a a leitura dos elementos de um vetor de 5 elementos
do tipo inteiro e, a seguir, calcule: a m�dia entre eles; a quantidade de positivos; a quantidade de negativos;
e a quantidade de nulos; */

#include <iostream>
#include <conio.h>
using namespace std;

#define t 5

int vetor[t], i; // vari�veis globais ou p�blicas

// fun��o que efetua a leitura dos elementos do vetor
void lerElementosDoVetor() {
	
	cout << "\n\t LEITURA DOS ELEMENTOS DO VETOR: \n";
	
	for (i = 0; i < t; i++) {
		
		cout << "\n\t por gentileza digite o " << i + 1 << "� elemento: ";
		cin >> vetor[i];
	}
}

// fun��o que efetua o C�lculo da m�dia entre os elementos do vetor
void calcularMediaEntreOsElementos() {
	
	cout << "\n\t C�LCULO DA M�DIA ENTRE OS ELEMENTOS: \n";
	
	int soma = 0; 
	
	for (i = 0; i < t; i++) {
		
		soma += vetor[i];
	}
	cout << "\n\t A m�dia entre os elementos digitados no vetor �: " << soma / t << "\n";
}


// fun��o que conta a quantidade de elementos positivos digitados
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
		cout << "\n\t A quantidade de elementos positivos digitados �: " << contador << "\n";
	}
}

// fun��o que conta a quantidade de elementos negativos digitados
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
		cout << "\n\t A quantidade de elementos negativos digitados �: " << contador << "\n";
	}
}

// fun��o que conta a quantidade de elementos nulos digitados
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
		cout << "\n\t A quantidade de elementos nulos digitados �: " << contador << "\n";
	}
}

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CHAMANDO ALGUMAS FUN��ES: \n";
	
	lerElementosDoVetor();
	
	calcularMediaEntreOsElementos();
	
	contadorDaQuantidadeDeElementosPositivos();
	
	contadorDaQuantidadeDeElementosNegativos();
	
	contadorDaQuantidadeDeElementosNulos();
	
	getch();
}
