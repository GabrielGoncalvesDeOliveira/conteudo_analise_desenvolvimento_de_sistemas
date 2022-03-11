// Algoritmo Calculador de Equação de segundo grau

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float valorA, valorB, valorC, delta, primeiraRaiz, segundaRaiz;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO CALCULADOR DE EQUAÇÃO DE SEGUNDO GRAU: \n";
	
	cout << "\n\t =============================================== \n";
	
	cout << "\n\t Por gentileza, digite o valor de A (X^2): ";
	cin >> valorA;
	
	if (valorA == 0) {
		
		cout << "\n\t Valor de A inválido, tente novamente inserindo outro valor.";
	
	} else {
		
		cout << "\n\t Certo, agora digite o valor de B (x): ";
		cin >> valorB;
	
		cout << "\n\t Agora, digite o valor do C: ";
		cin >> valorC;
		
		delta = pow(valorB, 2) - 4 * valorA * valorC;
		
		cout << "\n\t O valor do delta dessa equação de 2º grau é: " << delta << "\n";
		
		if (delta > 0) {
			cout << "\n\t Por ser positivo, existem duas raízes reais diferentes para esta equação. \n";
			
			primeiraRaiz = (- valorB - sqrt(delta)) / (2 * valorA);
			
			segundaRaiz = (- valorB + sqrt(delta)) / (2 * valorA);
			
			cout << "\n\t Por fim, o valor da primeira raíz é " << primeiraRaiz
			<< " e o valor da segunda raíz é " << segundaRaiz;
		
		} else if (delta == 0) {
			cout << "\n\t Por ser igual a zero, existem duas raízes reais iguais para esta equação. \n";
			
			cout << "\n\t Por fim, o valor de ambas as raízes é: " << (- valorB) / (2 * valorA) ;
		
		} else {
			cout << "\n\t Por ser negativo, não existem raízes reais para esta equação.";
		}  
		
		getch();
	}
}
