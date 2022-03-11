/* Elabore um algoritmo que leia 10 números reais, calcule e mostre:
a) A soma entre os números maiores que 30;
b) A média entre os números lidos.  */
#include <iostream>
#include <conio.h>
using namespace std;
#define N 10
float num, soma30=0, soma=0, media;
int cont=1;
int main(){
    while (cont <= N)
    {
        cout << "Digite o "<<cont<< "o. numero: ";
        cin >> num;
        if ( num > 30 )
           soma30 += num;  //soma30 = soma30 + num;
        soma += num;  //soma = soma + num; soma -= num //subtraindo num de soma
                      //  soma *= 2;   multiplica soma por 2
                      //  soma /= 3;   divide soma por 3
        cont++;   
    }
    media = soma / N;
    cout << "\nSoma dos numeros > 30: " << soma30;
    cout << "\nMedia dos numeros lidos: "<< media;
}
