/* Corre��o dos algoritmos passados de tarefa no dia 11/06/2021. AED1

1-) Escreva um programa que leia uma sequ�ncia de n�meros e armazene em um vetor de 10 posi��es
somente os que s�o divis�veis por 3 e por 5. 
Finalize a leitua quando o vetor estiver totalmente preenchido. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10
int v[T], num, i = 0;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t VETOR LEITOR DE N�MEROS DIVIS�VEIS POR 3 E POR 5: \n";
	
	while (i < T) {
		
		cout << "\n\t Por gentileza digite um n�mero: ";
		
		/* A leitura poderia ser feita direto no vetor. Caso o n�mero n�o satisfa�a a verifica��o, 
		 ele seria sobreposto na pr�xima repeti��o. ex: cin >> v[i]; */
		cin >> num;
		
		if (num % 3 == 0 && num % 5 == 0 && num != 0) {
			
			v[i] = num;
			i++;
		
		} else {
			cout << "\n\t Ora bolas, o n�mero " << num << " n�o � divis�vel nem por 3 e nem por 5. \n";
		}
	}
	i = 0;
		
	cout << "\n\t Lista dos n�meros divis�veis por 3 e por 5 que foram digitados: \n";
	
	while (i < T) {
		
		cout << "\n\t O " << i + 1 << "� elemento guardado no vetor foi o: " << v[i] << "\n";
		i++;
	}
	getch();
}
