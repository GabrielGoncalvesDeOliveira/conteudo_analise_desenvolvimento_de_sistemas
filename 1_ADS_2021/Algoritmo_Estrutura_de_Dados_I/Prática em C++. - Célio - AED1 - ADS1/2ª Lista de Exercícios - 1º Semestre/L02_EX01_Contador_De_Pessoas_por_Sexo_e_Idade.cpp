/* 1-) Faça um algoritmo que leia o sexo e a idade de 3 pessoas. Calcule e mostre a
quantidade de mulheres com idade maior que 20 anos. Se o algoritmo não encontrar
nenhuma mulher com idade superior a 20 anos, mostrar a seguinte mensagem: “Não
foram encontradas mulheres > de 20 anos”. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

int idade1, idade2, idade3, contador;
string sexo1, sexo2, sexo3;

int main() {
	
	setlocale(LC_ALL,"");
	
	contador = 0;
	
	cout << "\n\t CONTADOR DE PESSOAS QUE SE ENQUADRAM NA VERIFICAÇÃO: \n";
	cout << "\n\t Digite a idade da 1ª pessoa: "; cin >> idade1;
	cout << "\n\t Digite o sexo da 1ª pessoa [M / F]: "; cin >> sexo1;
	cout << "\n\t Digite a idade da 2ª pessoa: "; cin >> idade2;
	cout << "\n\t Digite o sexo da 2ª pessoa [M / F]: "; cin >> sexo2;
	cout << "\n\t Digite a idade da 3ª pessoa: "; cin >> idade3;
	cout << "\n\t Digite o sexo da 3ª pessoa [M / F]: "; cin >> sexo3; 

	if (idade1 > 20 && sexo1 == "F" || idade1 > 20 && sexo1 == "f") {
		contador++;
	}
	if (idade2 > 20 && sexo2 == "F" || idade2 > 20 && sexo2 == "f") {
		contador++;
	}
	if (idade3 > 20 && sexo3 == "F" || idade3 > 20 && sexo3 == "f") {
		contador++;
	}
	if (contador == 0) {
		cout << "\n\t Não foram encontradas mulheres com idade acima de 20 anos.";
	} else { 
		cout << "\n\t O total de Mulheres com idade acima de 20 anos é: " << contador;
	}
		
	getch();
}
