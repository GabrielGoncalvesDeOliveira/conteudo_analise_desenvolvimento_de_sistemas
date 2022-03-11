// Algoritmo Calculador de Equa��o de segundo grau

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float valorA, valorB, valorC, delta, primeiraRaiz, segundaRaiz;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO CALCULADOR DE EQUA��O DE SEGUNDO GRAU: \n";
	
	cout << "\n\t =============================================== \n";
	
	cout << "\n\t Por gentileza, digite o valor de A (X^2): ";
	cin >> valorA;
	
	if (valorA == 0) {
		
		cout << "\n\t Valor de A inv�lido, tente novamente inserindo outro valor.";
	
	} else {
		
		cout << "\n\t Certo, agora digite o valor de B (x): ";
		cin >> valorB;
	
		cout << "\n\t Agora, digite o valor do C: ";
		cin >> valorC;
		
		delta = pow(valorB, 2) - 4 * valorA * valorC;
		
		cout << "\n\t O valor do delta dessa equa��o de 2� grau �: " << delta << "\n";
		
		if (delta > 0) {
			cout << "\n\t Por ser positivo, existem duas ra�zes reais diferentes para esta equa��o. \n";
			
			primeiraRaiz = (- valorB - sqrt(delta)) / (2 * valorA);
			
			segundaRaiz = (- valorB + sqrt(delta)) / (2 * valorA);
			
			cout << "\n\t Por fim, o valor da primeira ra�z � " << primeiraRaiz
			<< " e o valor da segunda ra�z � " << segundaRaiz;
		
		} else if (delta == 0) {
			cout << "\n\t Por ser igual a zero, existem duas ra�zes reais iguais para esta equa��o. \n";
			
			cout << "\n\t Por fim, o valor de ambas as ra�zes �: " << (- valorB) / (2 * valorA) ;
		
		} else {
			cout << "\n\t Por ser negativo, n�o existem ra�zes reais para esta equa��o.";
		}  
		
		getch();
	}
}
