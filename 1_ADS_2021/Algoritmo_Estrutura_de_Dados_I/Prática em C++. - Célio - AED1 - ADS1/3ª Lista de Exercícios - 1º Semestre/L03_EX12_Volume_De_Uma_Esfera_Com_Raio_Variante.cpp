/* 12) Escreva um algoritmo que calcule o volume de uma esfera em fun��o do raio R.
O raio dever� variar de 1 a 20 cm de 0.5 em 0.5 cm. 
V = (3 * pi * R^3) / 4 */

#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

float volume, raio; 
const float pi = 3.1415926;

int main() {
	
	setlocale(LC_ALL,"");
	
	volume = 0; raio = 1;
	
	cout << "\n\t CALCULADOR DO VOLUME DE UMA ESFERA EM FUN��O DE UM RAIO VARI�VEL: \n";
	
	while (raio <= 20) {
		
		volume = (pi * 3  * pow(raio, 3)) / 4; 
		
		cout << "\n\n\t O volume atual dessa esfera, para o raio = " << raio
		<< " �: " << volume << " cm^3.";
		
		raio += 0.5;	
	}
	getch();
}
