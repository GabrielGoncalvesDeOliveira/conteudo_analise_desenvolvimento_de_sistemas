#include <iostream>
#include <iomanip>
#include <clocale>
using namespace std;

class Aluno {
	public: // Atributos
		int ra;
		string nome;
		string disciplina;
		float nota;

	public: // Métodos
		void ler() {
			cout << "\n\t LER DADOS DOS ALUNOS \n";
			cout << "\n\t Informe o RA: ";
			cin >> ra;
			//fflush(stdin);
			
			cout << "\n\t Informe o nome: ";
			//getline(cin, nome);
			cin >> nome;
			//fflush(stdin);
			
			cout << "\n\t Informe a disciplina: ";
			//getline(cin, disciplina);
			cin >> disciplina;
			//fflush(stdin);
			
			cout << "\n\t Informe a nota: ";
			cin >> nota;
			//fflush(stdin);
		}

		void imprimir() {
			cout << "\n\t IMPRIMIR ALUNO \n";
			cout << "\n\t RA: " << ra << endl;
			cout << "\n\t Nome: " << nome << endl;
			cout << "\n\t disciplina: " << disciplina << endl;
			cout << "\n\t Nota: " << nota << endl;
		}

		void situacao() {
			string situacao;
			situacao = nota > 7 && nota <= 10 ? "APROVADO" : nota >= 4 ? "EXAME" : "REPROVADO";
			cout << "\n\t A Situação do aluno " << nome << " é: " << situacao << endl;
		}
};