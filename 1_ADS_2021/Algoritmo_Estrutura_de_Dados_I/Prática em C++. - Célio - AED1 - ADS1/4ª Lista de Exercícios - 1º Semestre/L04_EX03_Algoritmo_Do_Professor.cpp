#include <iostream>
#include <conio.h>
using namespace std;
float s=0, num=480, den=10, cont=1;
int main(){
    while (cont <= 30){
        s = s + num / den;
        num=num-5;
        den=den+1;
        s = s - num / den;
        num=num-5;
        den=den+1;
        cont = cont + 2;
    }
    cout << " S : " << s;
}
