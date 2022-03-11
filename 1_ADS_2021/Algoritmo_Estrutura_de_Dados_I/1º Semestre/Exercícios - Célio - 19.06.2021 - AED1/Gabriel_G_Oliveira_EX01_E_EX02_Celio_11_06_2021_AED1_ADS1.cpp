/* Nome: Gabriel Gon�alves de Oliveira - RA: 2111550021 - 1� ADS 

Exerc�cio B�nus - Professor C�lio - 11/06/2021 - AED1  

1) Escreva um programa que leia uma sequ�ncia de n�meros e armazene em um vetor de 10 posi��es somente os que s�o divis�veis por 3 e por 5.
Finalize a leitura quando o vetor estiver totalmente preenchido 

Obersava��o: A leitura de qualquer valor diferente de um n�mero inteiro (como caracteres 
ou s�mbolos tais como '!', '@', '+', '-', '/'...) inicia um "loop infinito",
necessitando que o programa tenha seu encerramento for�ado. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10 // constante T = tamanho do vetor
int vetor[T], numeroLido, i;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t VETOR LEITOR DE 10 N�MEROS DIVIS�VEIS POR 3 E POR 5: \n";
	
	cout << "\n\t Obs: Favor digitar SOMENTE n�meros inteiros (� s�rio). \n";
	
	// Estrutura respons�vel por ler cada n�mero digitado pelo usu�rio.
	i = 0;
	
	do {
		cout << "\n\t Por gentileza digite um n�mero: ";
		
		cin >> numeroLido;
		
		// verifica se o n�mero � divis�vel por 3 e por 5, guardando-o no vetor caso seja.
		if (numeroLido % 3 == 0 && numeroLido % 5 == 0 && numeroLido != 0) {
			
			vetor[i] = numeroLido;
			
			cout << "\n\t Parab�ns, n�mero lido :D \n";
			
			i++;
		
		} else {
			
			cout << "\n\t Ops, n�mero recusado. \n";
		}
	} while (i < T);
	
	// Estrutura respons�vel por imprimir/exibir cada elemento guardado no vetor.
	i = 0;
	
	while (i < T) {
		
		cout << "\n\t O " << i + 1 << "� n�mero divis�vel por 3 e por 5 digitado foi: " << vetor[i] << " \n";
		
		i++;
	}
	getch();
}

/* ========================================================== *
 * ========================================================== *
 * ========================================================== *
 
2) Escreva um programa que armazene em um vetor os 20 primeiros n�meros primos. Imprima o vetor gerado. 

Observa��es importantes: o algoritmo funciona "corretamente" para valores de at� 9 d�gitos (999999999),
sendo que n�meros com uma quantidade acima desta possivelmente encerrar�o o algoritmo. A leitura de qualquer 
valor diferente de um n�mero inteiro (como caracteres ou s�mbolos tais como '!', '@', '+', '-', '/'...) 
inicia um "loop infinito", necessitando que o programa tenha seu encerramento for�ado. */

#include <iostream>
#include <conio.h>
using namespace std;

#define C 20 // constante C = comprimento do vetor
int vetor[C], numeroLido, divisor, contadorSeNumeroNaoPrimo, i;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t VETOR LEITOR DOS 20 PRIMEIROS N�MEROS PRIMOS DIGITADOS: \n";
	
	// Estrutura respons�vel por ler cada n�mero digitado pelo usu�rio.
	i = 0; 
	
	do {
		cout << "\n\t Por gentileza digite um n�mero: ";
		
		cin >> numeroLido;
		
		contadorSeNumeroNaoPrimo = 0;
	
		// verifica se o n�mero lido � maior que 1, afinal, n�meros negativos, 0 e 1 n�o s�o primos.
		if (numeroLido > 1) {
		
			 divisor = 2;
		
			do {
				// verifica se o n�mero lido � par e difrente de 2, afinal, nenhum n�mero par al�m do 2 � considerado primo.
				if (numeroLido % divisor == 0 && numeroLido != 2) {
			
					contadorSeNumeroNaoPrimo++;
				}
				divisor++;
			
			/* Essa express�o faz com que as divis�es sucessivas para verificar se o n�mero � primo sejam feitas somente
			 a metade das vezes, economizando mem�ria (e processamento) e garantindo que, dentro e fora desse limite,
			 caso o n�mero seja divis�vel por outro valor, o contador seja incrementado, informando que tal n�mero 
			 n�o � primo. Caso contr�rio, o n�mero � primo e � guardado no vetor. */
			} while (divisor <= numeroLido / 2);
		
			// verifica se o contador inicializado anteriormente n�o recebeu nenhum incremento 
			// (se n�o houve incremento, o n�mero digitado � um primo).
			if (contadorSeNumeroNaoPrimo == 0) {
		
				vetor[i] = numeroLido;
			
				i++;
			}
		}	
	} while (i < C);
	
	// Estrutura respons�vel por imprimir/exibir cada elemento guardado no vetor.
	i = 0;
	
	do {
		cout << "\n\t O valor do " << i + 1 << "� n�mero primo do vetor �: " << vetor[i];
		i++;
	
	} while (i < C);	 
	
	getch();
}
 
 


