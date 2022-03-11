/* Questão 1 */

#include <iostream>
#include <conio.h>
using namespace std;

int i, n;

int main () {
	
	setlocale(LC_ALL,"");
	
	i = 1; n = 0; 
	
	while (i <= 10) {
		
		n = n + 3;
		
		cout << "\n\n\t O valor é:" << n;
		
		i = i + 2;
	}
	getch();
}
