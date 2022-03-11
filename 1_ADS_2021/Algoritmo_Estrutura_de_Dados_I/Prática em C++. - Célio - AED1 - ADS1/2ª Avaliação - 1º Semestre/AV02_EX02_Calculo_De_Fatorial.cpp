/* Questão 2 */

#include <iostream>
#include <conio.h>
using namespace std;

int n, fat;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t Digite o valor de 'n': ";
	cin >> n;
	
	fat = 1;
	
	while (n > 1) {
		
		fat = fat * n;
		
		cout << "\n\t repetições de 'n': " << n;
		
		n = n - 1;
	}
	cout << "\n\n\t O valor é: " << fat;
	
	getch();
}
