/* Questão 4 */

#include <iostream>
#include <conio.h>
using namespace std;

int contador, numero;

int main() {
	
	setlocale(LC_ALL,"");
	
	contador = 1; numero = 20;
	
	while (contador <= numero) {
		
		numero =  numero / 2; // é o mesmo que: numero /= 2;
		
		cout << "\n\n\t O valor do número é: " << numero;
		
		contador++;
	}
	getch();
}
