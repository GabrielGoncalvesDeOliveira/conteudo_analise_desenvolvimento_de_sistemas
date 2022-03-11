/* 2-) Supondo que a população de um país A seja da ordem de 90000 habitantes com uma 
taxa anual de crescimento de 3% e que a população de um país B seja aproximadamente 
de 200000 habitantes com taxa anual de 1.5% de crescimento. Construir um algoritmo 
que calcule e mostre o número de anos necessários para que a população do país A 
ultrapasse ou iguale a população do país B, mantidas as taxas de crescimento */

#include <iostream>
#include <conio.h>
using namespace std;

float populacaoDeA, populacaoDeB; int totalDeAnos;

int main() {
	
	setlocale(LC_ALL,"");

	populacaoDeA = 90000; populacaoDeB = 200000; totalDeAnos = 0;
	
	cout << "\n\t ALGORITMO QUE REPETE ATÉ QUE A POPULAÇÃO DE DOIS PAÍSES SEJA A MESMA: ";
	
	do {
		
		populacaoDeA = populacaoDeA * 1.03;
		populacaoDeB = populacaoDeB * 1.015;
		totalDeAnos++;
	
	} while (populacaoDeA < populacaoDeB);
	
	cout << "\n\n\t População final de A: " << populacaoDeA << "."; 
	cout << "\n\n\t População final de B: " << populacaoDeB << "."; 
	
	cout << "\n\n\t A quantidade de anos necessários para que a população do país 'A' "
	<< "ultrapasse a população do país 'B' é: " << totalDeAnos;
	
	getch();	
}
