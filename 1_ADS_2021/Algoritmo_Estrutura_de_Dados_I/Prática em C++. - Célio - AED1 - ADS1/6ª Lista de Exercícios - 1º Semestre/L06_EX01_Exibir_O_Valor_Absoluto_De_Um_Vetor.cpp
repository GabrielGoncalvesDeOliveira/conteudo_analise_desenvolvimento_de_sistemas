/* 1) Construa um algoritmo que leia um vetor V de 10 elementos e mostre o valor 
absoluto deste vetor. Dica: para cada valor negativo, multiplique-o por -1 para trocar 
seu sinal, transformando-o em positivo. Exemplos: |-2| = 2 |4| = 4  */

#include <iostream>
#include <conio.h>
using namespace std;

int vetorV[10], contador = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t ALGORITMO QUE EXIBE O VALOR ABSOLUTO DE UM VETOR: \n";
	
	while (contador < 10) {
		
		cout << "\n\t Digite o número da posição W["<< 
		contador <<"] : ";
		cin >> vetorV[contador];
		
		if (vetorV[contador] < 0) {
			vetorV[contador] *= -1;
		}	
		cout << "\n\t O valor absoluto do vetor nessa posição é: " << vetorV[contador] << ". \n";
			
		contador++;
	}
	getch();
	
	/* Se usar uma variável normal, o valor dela será
	* sobrescrito a cada repetição e, consequentemente, 
	* perdido. Porém, ao se usar vetores, cada valor
	* repetido continua sendo armazenado no vetor (no
	* caso, em alguma posição (endereço/índice). 
	*
	* Também pode-se fazer uma estrutura enquanto para
	* a entrada de dados, um para o processamento e
	* o outro para a exibição / saída de dados. */
}
