/* Quest�o 4 */

#include <iostream>
#include <conio.h>
using namespace std;

int contador, numero;

int main() {
	
	setlocale(LC_ALL,"");
	
	contador = 1; numero = 20;
	
	while (contador <= numero) {
		
		numero =  numero / 2; // � o mesmo que: numero /= 2;
		
		cout << "\n\n\t O valor do n�mero �: " << numero;
		
		contador++;
	}
	getch();
}
