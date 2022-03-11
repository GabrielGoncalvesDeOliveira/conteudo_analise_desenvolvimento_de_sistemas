/* 4-) Um material radioativo perde metade de sua massa a cada 50 segundos. A partir
da massa inicial de 4850 g, construa um programa que determine o tempo necessário
para que essa massa se torne menor que 0.5. Mostre a massa inicial, a massa final e o tempo. */

#include <iostream>
#include <conio.h>
using namespace std;

float massa; int tempoNecessarioEmSegundos;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO CALCULADOR DO TEMPO DE MEIA VIDA DE UM MATERIAL RADIOATIVO: \n";
	
	massa = 4850; tempoNecessarioEmSegundos = 0;
	
	cout << "\n\t A massa inicial do composto radioativo é: " << massa << "g.";
	
	while (massa > 0.5) {
		
		massa = massa / 2;
		
		tempoNecessarioEmSegundos += 50;
	}
	cout << "\n\n\t A massa final do material radioativo é: " << massa << "g.";
	
	cout << "\n\n\t O tempo necessário para que a massa do material radioativo "
	<< "se torne menor que 0.5g é de: " << tempoNecessarioEmSegundos << " segundos.";
	
	cout << "\n\n\t Ou (arredondando pra baixo) cerca de: " << tempoNecessarioEmSegundos / 60 << ",5 minutos.";
	
	getch();
}
