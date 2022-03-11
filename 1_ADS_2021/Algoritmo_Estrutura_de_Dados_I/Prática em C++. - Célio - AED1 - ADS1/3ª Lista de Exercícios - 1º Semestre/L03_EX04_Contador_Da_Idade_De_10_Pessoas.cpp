/* 4) Fa�a um algoritmo que leia a idade de 10 pessoas, calcule e mostre: 
a) A quantidade de pessoas com idade maior ou igual a 18 anos; 
b) A m�dia entre todas as idades; 
c) A m�dia das idades entre 10 e 20 anos.  */

#include <conio.h>
#include <iostream>
using namespace std;

int idade, contador = 1, contadorDePessoasMaioresDe18Anos; 
float mediaDeTodasAsIdades = 0, mediaDasIdadesEntre10E20Anos = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CONTADOR DE PESSOAS COM IDADE MAIOR OU IGUAL A 18 ANOS: \n";
	
	while (contador <= 10) {
		
		cout << "\n\t Por gentileza, digite a " << contador << "� idade: ";
		cin >> idade;
		
		if (idade > 130) {
			cout << "\n\t Idade inv�lida! Por gentileza, digite as idades novamente.";
			return 0;
		}
		mediaDeTodasAsIdades += idade;
		
		if (idade >= 18) {
			contadorDePessoasMaioresDe18Anos++; 
		}
		if (idade >= 10 && idade <= 20) {
			mediaDasIdadesEntre10E20Anos += idade;
		}
		contador++;
	}
	if (contadorDePessoasMaioresDe18Anos == 0) {
		cout << "\n\t N�o foram encontradas pessoas com idade maior ou igual a 18 anos �: ";
	
	} else {
		cout << "\n\t A quantidade de pessoas com idade maior ou igual a 18 anos �: "
		<< contadorDePessoasMaioresDe18Anos << ".";
	}
	cout << "\n\n\t A m�dia entre todas as idades �: " << mediaDeTodasAsIdades / 10 << ".";
	
	cout << "\n\n\t A m�dia das idades entre 10 e 20 anos �: " << mediaDasIdadesEntre10E20Anos / 10 << ".";
	
	getch();
}
