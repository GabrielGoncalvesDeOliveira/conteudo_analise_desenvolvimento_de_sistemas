/* 2-) Supondo que a popula��o de um pa�s A seja da ordem de 90000 habitantes com uma 
taxa anual de crescimento de 3% e que a popula��o de um pa�s B seja aproximadamente 
de 200000 habitantes com taxa anual de 1.5% de crescimento. Construir um algoritmo 
que calcule e mostre o n�mero de anos necess�rios para que a popula��o do pa�s A 
ultrapasse ou iguale a popula��o do pa�s B, mantidas as taxas de crescimento */

#include <iostream>
#include <conio.h>
using namespace std;

float populacaoDeA, populacaoDeB; int totalDeAnos;

int main() {
	
	setlocale(LC_ALL,"");

	populacaoDeA = 90000; populacaoDeB = 200000; totalDeAnos = 0;
	
	cout << "\n\t ALGORITMO QUE REPETE AT� QUE A POPULA��O DE DOIS PA�SES SEJA A MESMA: ";
	
	do {
		
		populacaoDeA = populacaoDeA * 1.03;
		populacaoDeB = populacaoDeB * 1.015;
		totalDeAnos++;
	
	} while (populacaoDeA < populacaoDeB);
	
	cout << "\n\n\t Popula��o final de A: " << populacaoDeA << "."; 
	cout << "\n\n\t Popula��o final de B: " << populacaoDeB << "."; 
	
	cout << "\n\n\t A quantidade de anos necess�rios para que a popula��o do pa�s 'A' "
	<< "ultrapasse a popula��o do pa�s 'B' �: " << totalDeAnos;
	
	getch();	
}
