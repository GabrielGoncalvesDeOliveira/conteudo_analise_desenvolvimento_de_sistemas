/* 4) Faça um algoritmo que leia a idade de 10 pessoas, calcule e mostre: 
a) A quantidade de pessoas com idade maior ou igual a 18 anos; 
b) A média entre todas as idades; 
c) A média das idades entre 10 e 20 anos.  */

#include <conio.h>
#include <iostream>
using namespace std;

int idade, contador = 1, contadorDePessoasMaioresDe18Anos; 
float mediaDeTodasAsIdades = 0, mediaDasIdadesEntre10E20Anos = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t CONTADOR DE PESSOAS COM IDADE MAIOR OU IGUAL A 18 ANOS: \n";
	
	while (contador <= 10) {
		
		cout << "\n\t Por gentileza, digite a " << contador << "ª idade: ";
		cin >> idade;
		
		if (idade > 130) {
			cout << "\n\t Idade inválida! Por gentileza, digite as idades novamente.";
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
		cout << "\n\t Não foram encontradas pessoas com idade maior ou igual a 18 anos é: ";
	
	} else {
		cout << "\n\t A quantidade de pessoas com idade maior ou igual a 18 anos é: "
		<< contadorDePessoasMaioresDe18Anos << ".";
	}
	cout << "\n\n\t A média entre todas as idades é: " << mediaDeTodasAsIdades / 10 << ".";
	
	cout << "\n\n\t A média das idades entre 10 e 20 anos é: " << mediaDasIdadesEntre10E20Anos / 10 << ".";
	
	getch();
}
