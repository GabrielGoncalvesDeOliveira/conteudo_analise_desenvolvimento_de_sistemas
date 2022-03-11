/* 5) Uma empresa guarda em seus registros o volume de venda por ela executado nos �ltimos 12 
meses. O �ndice do vetor representa o m�s. Pede-se: 

a) Em qual m�s a empresa obteve o pior desempenho? E qual foi a quantidade vendida? 

b) Existe um outro vetor que armazena a quantidade vendida por cada um dos 5 vendedores 
da empresa, no mesmo ano. Verifique se o volume vendido pela empresa � igual ao 
volume vendido pelos vendedores. Em caso afirmativo mostre: �FECHAMENTO 
ENCERRADO COM SUCESSO�, caso contr�rio: �TOTAL EMPRESA N�O 
CONFERE COM TOTAL VENDEDORES�; */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 12
#define S 5

int vendasPorMes[T], vendasPorVendedor[S], totalDeVendasMensais, totalVendidoPelosVendedores, i;
int piorMes, quantidadeVendida;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO COMPARADOR DO DESEMPENHO DAS VENDAS MENSAIS DE UMA EMPRESA: \n";
	
	// leitura das vendas feitas em cada m�s
	for (i = 0; i < T; i++) {
		
		cout << "\n\t Por gentileza digite o total vendido no " << i + 1 << "� m�s: ";
		cin >> vendasPorMes[i];
	}
	
	piorMes = 0; quantidadeVendida = vendasPorMes[0];
	
	for (i = 0; i < T; i++) {
	
		// verifica qual foi o m�s que obteve menos vendas e a sua quantidade vendida	
		if (vendasPorMes[i] < quantidadeVendida) {
			
			piorMes = i;
			quantidadeVendida = vendasPorMes[i];
		}
		
		// acrescenta o valor vendido no m�s em quest�o ao total vendido no ano todo
		totalDeVendasMensais += vendasPorMes[i];
	}
	
	cout << "\n\t A empresa obteve o pior desempenho no " << piorMes + 1 << "� m�s, e ao todo foram feitas " << quantidadeVendida << " vendas. \n";
	
	// Leitura da quantidade vendida por cada vendedor
	for (i = 0; i < S; i++) {
		
		cout << "\n\t Por gentileza digite o total vendido pelo " << i + 1 << "� vendedor: ";
		cin >> vendasPorVendedor[i];
	}
	
	// acrescenta o valor vendido pelo funcion�rio em quest�o ao total vendido por todos os funcion�rios
	for (i = 0; i < S; i++) {
		
		totalVendidoPelosVendedores += vendasPorVendedor[i];
	}
	
	cout << "\n\t Neste ano foram feitas ao todo " << totalDeVendasMensais << " vendas. \n";
	
	cout << "\n\t Neste ano, os vendedores juntos fizeram ao todo " << totalVendidoPelosVendedores << " vendas. \n";
	
	// verifica se o total vendido em todo o ano corresponde ao total vendido por todos os vendedores
	if (totalDeVendasMensais != totalVendidoPelosVendedores) {
		
		cout << "\n\t TOTAL VENDIDO PELA EMPRESA N�O CONFERE COM O TOTAL VENDIDO PELOS VENDEDORES. ";
	
	} else {
		cout << "\n\t FECHAMENTO ENCERRADO COM SUCESSO. ";
	}
	
	getch();
}
