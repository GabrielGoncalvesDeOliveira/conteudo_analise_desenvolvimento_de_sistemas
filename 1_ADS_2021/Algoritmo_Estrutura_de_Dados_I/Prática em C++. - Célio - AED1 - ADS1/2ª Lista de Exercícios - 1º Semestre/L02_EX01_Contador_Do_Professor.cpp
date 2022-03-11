/* 1-) Faça um algoritmo que leia o sexo e a idade de 3 pessoas. Calcule e mostre a
quantidade de mulheres com idade maior que 20 anos. Se o algoritmo não encontrar
nenhuma mulher com idade superior a 20 anos, mostrar a seguinte mensagem: “Não
foram encontradas mulheres > de 20 anos”. */

#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

char sexo;
int idade, contF = 0;

int main() {

	setlocale(LC_ALL, "");
	
	cout << "\n\t CONTADOR DE MULHERES COM IDADE SUPERIOR A 20 ANOS \n";
	
	cout << "\n\t Digite o sexo da primeira pessoa [M/F]: ";
	cin >> sexo;
	cout << "\n\t Digite a idade da primeira pessoa: ";
	cin >> idade;
	
	// sexo = toupper(sexo);
	
	if(sexo == 'F' && idade > 20 || sexo == 'f' && idade > 20) {
		contF++;
	}
	
	cout << "\n\t Digite o sexo da segunda pessoa [M/F]: ";
	cin >> sexo;
	cout << "\n\t Digite a idade da segunda pessoa: ";
	cin >> idade;
	
	// sexo = toupper(sexo);
	
	if(sexo == 'F' && idade > 20 || sexo == 'f' && idade > 20) {
		contF++;
	}
	
	cout << "\n\t Digite o sexo da terceira pessoa [M/F]: ";
	cin >> sexo;
	cout << "\n\t Digite a idade da terceira pessoa: ";
	cin >> idade;
	
	// sexo = toupper(sexo); converte o caractere de minúsculo para maiúsculo
	// sexo = tolower(sexo); converte o caractere de maiúsculo para minúsculo
	
	if(sexo == 'F' && idade > 20 || sexo == 'f' && idade > 20) {
		contF++;
	}
	
	if(contF == 0) {
		cout << "\n\t Não foram encontradas mulheres com idade maior que 20 anos.";
	} else {
		cout << "\n\t Foram encontrada(s) " << contF << " mulher(es) com idade maior que 20 anos.";
	}
	
	getch();
	// getche(); faz o mesmo que o getch(), mas exibe o caractere pressionado pelo usuário
}
