#include <iostream>
#include <iomanip>
#include <clocale>
#include <string>
#include "Produto.h"
using namespace std;

int main() {
	setlocale(LC_ALL,"");

	cout << "\n\t INÍCIO DO PROGRAMA PRINCIPAL: \n";
	cout << "\n\t =============================================";
	 /*OBS: Ao digitar a descrição do produto, por gentileza, separe as palavras usando '_' (caractere underline)
		pois não consegui adequar o getline() e o fflush(stdin) no editor de código que utilizei*/

	// Instânciação de um objeto do tipo (classe) Produto:
	Produto primeiroProduto;

	// Invocação de seus métodos:
	primeiroProduto.ler();
	primeiroProduto.imprimir();

	// Exemplos de uso dos métodos getters e setters:
	cout << "\n\t Algumas alterações serão feitas com o Produto... \n";

	primeiroProduto.setId(12);
	primeiroProduto.setDescricao("Groselha");
	primeiroProduto.setQuantidade(3.0);
	primeiroProduto.setValor(23.5);

	cout << "\n\t Agora, o novo id do Produto é: " << primeiroProduto.getId() << endl;
	cout << "\n\t Sua nova descrição é: " << primeiroProduto.getDescricao() << endl;
	cout << "\n\t A nova quantidade é: " << primeiroProduto.getQuantidade() << endl;
	cout << "\n\t Por fim, o novo valor é: " << primeiroProduto.getValor() << endl;
	
	cout << "\n\t =============================================";
	getc;
}