/* 4) Construa um algoritmo que calcule e imprima o seguinte somat�rio: 
 S = 2^1/50 + 2^2/49 + 2^3/48 + 2^4/47 + ... + 2^50/1 */ 
 
#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
using namespace std;

float somatorio, expoente, denominador;

int main() {
	
	setlocale(LC_ALL,"");
	
	somatorio = 0; expoente = 1; denominador = 50;
	
	cout << "\n\t CALCULADOR DE SOMAT�RIO COM EXPOENTE CRESCENTE, INDO DE 1 A 50: \n";
	
	while (expoente <= 50) {
		
		somatorio += pow(2, expoente) / denominador;
		
		cout << "\n\n\t O valor do Somat�rio, para o expoente " << expoente << " �: "
		<< fixed << setprecision(2) << somatorio << ".";
		
		expoente++;
		denominador--;
	}
	cout << "\n\n\t O valor final do Somat�rio �: " 
	<< fixed << setprecision(2) << somatorio << ".";
	
	getch();

	/* fixed = Usado para n�o mostrar o resultado final em nota��o cient�fica,
	 * quando este � muito grande ou muito pequeno.
	 * 
	 * scientific = Usado para mostrar o resultado final em nota��o cient�fica
	 * quando este � muito grande ou muito pequeno.
	 *
	 * setprecision(2) = usado para exibir somente duas casas decimais.
	 * Para utiliz�-la, � necess�rio incluir a biblioteca iomanip. */
}
