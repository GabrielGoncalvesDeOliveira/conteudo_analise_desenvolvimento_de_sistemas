/* Nome: Gabriel Gonçalves de Oliveira - RA: 2111550021 - 1º ADS 

Exercício Bônus - Professor Célio - 11/06/2021 - AED1  

1) Escreva um programa que leia uma sequência de números e armazene em um vetor de 10 posições somente os que são divisíveis por 3 e por 5.
Finalize a leitura quando o vetor estiver totalmente preenchido 

Obersavação: A leitura de qualquer valor diferente de um número inteiro (como caracteres 
ou símbolos tais como '!', '@', '+', '-', '/'...) inicia um "loop infinito",
necessitando que o programa tenha seu encerramento forçado. */

#include <iostream>
#include <conio.h>
using namespace std;

#define T 10 // constante T = tamanho do vetor
int vetor[T], numeroLido, i;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t VETOR LEITOR DE 10 NÚMEROS DIVISÍVEIS POR 3 E POR 5: \n";
	
	cout << "\n\t Obs: Favor digitar SOMENTE números inteiros (é sério). \n";
	
	// Estrutura responsável por ler cada número digitado pelo usuário.
	i = 0;
	
	do {
		cout << "\n\t Por gentileza digite um número: ";
		
		cin >> numeroLido;
		
		// verifica se o número é divisível por 3 e por 5, guardando-o no vetor caso seja.
		if (numeroLido % 3 == 0 && numeroLido % 5 == 0 && numeroLido != 0) {
			
			vetor[i] = numeroLido;
			
			cout << "\n\t Parabéns, número lido :D \n";
			
			i++;
		
		} else {
			
			cout << "\n\t Ops, número recusado. \n";
		}
	} while (i < T);
	
	// Estrutura responsável por imprimir/exibir cada elemento guardado no vetor.
	i = 0;
	
	while (i < T) {
		
		cout << "\n\t O " << i + 1 << "º número divisível por 3 e por 5 digitado foi: " << vetor[i] << " \n";
		
		i++;
	}
	getch();
}

/* ========================================================== *
 * ========================================================== *
 * ========================================================== *
 
2) Escreva um programa que armazene em um vetor os 20 primeiros números primos. Imprima o vetor gerado. 

Observações importantes: o algoritmo funciona "corretamente" para valores de até 9 dígitos (999999999),
sendo que números com uma quantidade acima desta possivelmente encerrarão o algoritmo. A leitura de qualquer 
valor diferente de um número inteiro (como caracteres ou símbolos tais como '!', '@', '+', '-', '/'...) 
inicia um "loop infinito", necessitando que o programa tenha seu encerramento forçado. */

#include <iostream>
#include <conio.h>
using namespace std;

#define C 20 // constante C = comprimento do vetor
int vetor[C], numeroLido, divisor, contadorSeNumeroNaoPrimo, i;

int main() {
	
	setlocale(LC_ALL,"");
	
	cout << "\n\t VETOR LEITOR DOS 20 PRIMEIROS NÚMEROS PRIMOS DIGITADOS: \n";
	
	// Estrutura responsável por ler cada número digitado pelo usuário.
	i = 0; 
	
	do {
		cout << "\n\t Por gentileza digite um número: ";
		
		cin >> numeroLido;
		
		contadorSeNumeroNaoPrimo = 0;
	
		// verifica se o número lido é maior que 1, afinal, números negativos, 0 e 1 não são primos.
		if (numeroLido > 1) {
		
			 divisor = 2;
		
			do {
				// verifica se o número lido é par e difrente de 2, afinal, nenhum número par além do 2 é considerado primo.
				if (numeroLido % divisor == 0 && numeroLido != 2) {
			
					contadorSeNumeroNaoPrimo++;
				}
				divisor++;
			
			/* Essa expressão faz com que as divisões sucessivas para verificar se o número é primo sejam feitas somente
			 a metade das vezes, economizando memória (e processamento) e garantindo que, dentro e fora desse limite,
			 caso o número seja divisível por outro valor, o contador seja incrementado, informando que tal número 
			 não é primo. Caso contrário, o número é primo e é guardado no vetor. */
			} while (divisor <= numeroLido / 2);
		
			// verifica se o contador inicializado anteriormente não recebeu nenhum incremento 
			// (se não houve incremento, o número digitado é um primo).
			if (contadorSeNumeroNaoPrimo == 0) {
		
				vetor[i] = numeroLido;
			
				i++;
			}
		}	
	} while (i < C);
	
	// Estrutura responsável por imprimir/exibir cada elemento guardado no vetor.
	i = 0;
	
	do {
		cout << "\n\t O valor do " << i + 1 << "º número primo do vetor é: " << vetor[i];
		i++;
	
	} while (i < C);	 
	
	getch();
}
 
 


