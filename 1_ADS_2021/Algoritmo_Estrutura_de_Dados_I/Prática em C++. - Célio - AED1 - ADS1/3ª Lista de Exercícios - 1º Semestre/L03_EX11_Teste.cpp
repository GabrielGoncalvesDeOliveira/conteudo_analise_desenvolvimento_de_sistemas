/* 11) Faça um algoritmo que imprima o valor do somatório 
S= 200 1 1/y */

#include <conio.h>
#include <iostream>
using namespace std;

float y; float s;

int main() {
	
	y = 1;
	s = 0;
	
	while (y <= 200) {
		
		s = (s + 1) / y;
		y = y + 1;
	}
	
	cout << "A soma e: " << s;
	
	return 0;
}
