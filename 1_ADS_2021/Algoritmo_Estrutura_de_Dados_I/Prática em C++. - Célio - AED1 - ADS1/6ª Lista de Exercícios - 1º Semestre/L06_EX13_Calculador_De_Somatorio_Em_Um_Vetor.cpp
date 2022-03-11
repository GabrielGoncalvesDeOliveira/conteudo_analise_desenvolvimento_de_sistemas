/* 13) Dado um vetor B com 30 valores reais, fazer um algoritmo que calcule o seguinte 
somatório: 
S = (b0 – b29 )^3 + (b1 – b28 )^3 + (b2 – b27)^3 + ... + (b14 – b15)^3 */

#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

#define T 30

float somatorio, vetorB[T];
int i; 

// Função geradora de números aleatórios para preencher o vetor (vetorB[])
int gerador(){
	
    i=0;
    
	srand (time(NULL));
    
	while (i<T){
    	
        vetorB[i] = rand() % 20 + 1;  //gera números aleatórios entre 1 e 20
        i++;
    }
    i=0;
    
    while(i<T){
    	
        cout << "\n \t" << vetorB[i];
        i++;
    } 
} 

// Função principal
int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO CALCULADOR DE SOMATÓRIO COM ELEMENTOS DE UM VETOR \n";

	/* i = 0;
	
	do {
		cout << "\n\t Por gentileza digite o " << i + 1 << "º número: ";
		cin >> vetorB[i];
		i++;
	
	} while (i < T); */
	
	gerador();
	i = 0;
	somatorio = 0;
	
	do {
		
		somatorio += pow(vetorB[i] - vetorB[T - i - 1], 3);
		
		cout << "\n\t O valor do elemento b" << i << ": " << vetorB[i] << "\n";
		
		cout << "\n\t O valor do elemento b" << T - i - 1 << " : " << vetorB[T - i - 1] << "\n";
		
		i++;
		
	} while (i < T / 2);
	
	cout << "\n\t O valor final do somatório é: " << somatorio;
	
	getch();
}


