/* Nome: Gabriel Gonçalves de Oliveira, RA: 2111550021 - 1º ADS 

Atividade prática em C++ - Célio Desiró - Algoritmo e Estruturas de Dados 1 - 2021 

8) Escreva um algoritmo que leia duas notas de 10 alunos. Calcule e mostre: 
a) A média aritmética das duas notas de cada aluno; 
b) A mensagem que está na tabela abaixo: 

Média Aritmética ---------- Mensagem
Até 3.0 ------------------- Reprovado
Entre 3.0 e 7.0 ----------- Exame
Acima de 7.0 -------------- Aprovado

c) O total de alunos aprovado; 
d) O total de alunos reprovados; 
e) O total de alunos de exame. */

#include <iostream>
#include <conio.h>
using namespace std;

float primeiraNota, segundaNota, mediaDasNotas;
int totalDeAlunosAprovados = 0, totalDeAlunosReprovados = 0;
int totalDeAlunosDeExame = 0, contador = 1;

int main() {
	
	setlocale(LC_ALL, "");
	
	cout << "\n\t ALGORITMO CALCULADOR E VERIFICADOR DAS MÉDIAS DE 10 ALUNOS: \n";
	
	while (contador <= 10) {
		
		cout << "\n\t Por gentileza, digite a primeira nota do " << contador << "º aluno: ";
		cin >> primeiraNota;
		cout << "\n\t Certo, agora digite a segunda nota do " << contador << "º aluno: ";
		cin >> segundaNota;
		
		if (primeiraNota > 10 || segundaNota > 10) {
			cout << "\n\t Uma ou mais notas estão inválidas, reinicie o programa e digite novamente. \n";
			return 0;
		}
		mediaDasNotas = (primeiraNota + segundaNota) / 2;
		
		cout << "\n\t A média aritmética das notas deste aluno é: " << mediaDasNotas << ". \n";
		
		if (mediaDasNotas < 3) {
			cout << "\n\t Aluno Reprovado. \n";
			totalDeAlunosReprovados++;
		
		} else if (mediaDasNotas >= 3 && mediaDasNotas <= 7) {
			cout << "\n\t Aluno de Exame. \n";
			totalDeAlunosDeExame++;
	
		} else if (mediaDasNotas >= 7 && mediaDasNotas <= 10)  {
			cout << "\n\t Aluno Aprovado! \n";
			totalDeAlunosAprovados++;	
		}
		contador++;
	}
	if (totalDeAlunosAprovados == 0) {
		cout << "\n\n\t Mas que tragédia! Nenhum aluno foi aprovado.";
	
	} else {
		cout << "\n\n\t O total de alunos aprovados é: " <<	totalDeAlunosAprovados << ".";
	}
	if (totalDeAlunosReprovados == 0) {
		cout << "\n\n\t Que boa notícia! Nenhum aluno foi reprovado.";
	
	} else {
		cout << "\n\n\t O total de alunos reprovados é: " << totalDeAlunosReprovados << ".";
	}
	if (totalDeAlunosDeExame == 0) {
		cout << "\n\n\t Bom, nenhum aluno ficou de exame.";

	} else {
		cout << "\n\n\t O total de alunos de exame é: " << totalDeAlunosDeExame << ".";
	}
	getch();
}
