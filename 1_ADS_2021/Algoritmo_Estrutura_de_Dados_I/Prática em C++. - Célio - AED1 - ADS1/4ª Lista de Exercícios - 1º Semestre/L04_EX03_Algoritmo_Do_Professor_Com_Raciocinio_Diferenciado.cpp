#include <iostream>
#include <conio.h>
using namespace std;
float s=0, num=480, den=10, cont=1, sinal=1;
int main(){
    while (cont <= 30){
        s = s + sinal * num / den;
        num=num-5;
        den=den+1;
        sinal = sinal * -1; // -1 * -1
        cont = cont + 1;
	}
    cout << " S : " << s;
}
