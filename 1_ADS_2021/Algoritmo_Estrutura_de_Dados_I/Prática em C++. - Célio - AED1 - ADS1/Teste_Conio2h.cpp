#include <iostream>
#include <conio2.h>
using namespace std;

int main() {
	
	textbackground(GREEN); // Define a cor de fundo
	
	clrscr(); // Limpa a tela com a cor de fundo atual
	
	gotoxy(10, 10); // posiciona o cursor na tela. A 1ª posição é a coluna e a 2ª é a linha
	
	for (int i = 0; i < 16; i++) {
		
		textcolor(i);
		gotoxy(10,i);
		cout << "Este telefone..." << i;
	}
	
	textcolor(RED); // BLACK, BLUE, MAGENTA, GREEN, CYAN, YELLOW, WHITE, RED, LIGHTBLUE, LIGHTRED, etc
	
	cout << "\n\t VERMELHO.";
	
	getch();
}
