#include <iostream>
#include <conio.h>
using namespace std;
float numerador=480, denominador=10, s=0, cont=1;
main(){
    while ( denominador <= 39 ) {
        s += numerador / denominador;
        //numerador = numerador - 5;
        numerador -= 5;
        denominador += 1; // = denominador + 1;
        //cont++;
    }
    cout << " S = " << s;
}
