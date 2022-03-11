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
		
		cout << "\n\t Digite o n�mero da posi��o W["<< 
		contador <<"] : ";
		cin >> vetorV[contador];
		
		if (vetorV[contador] < 0) {
			vetorV[contador] *= -1;
		}	
		cout << "\n\t O valor absoluto do vetor nessa posi��o �: " << vetorV[contador] << ". \n";
			
		contador++;
	}
	getch();
	
	/* Se usar uma vari�vel normal, o valor dela ser�
	* sobrescrito a cada repeti��o e, consequentemente, 
	* perdido. Por�m, ao se usar vetores, cada valor
	* repetido continua sendo armazenado no vetor (no
	* caso, em alguma posi��o (endere�o/�ndice). 
	*
	* Tamb�m pode-se fazer uma estrutura enquanto para
	* a entrada de dados, um para o processamento e
	* o outro para a exibi��o / sa�da de dados. */
}
