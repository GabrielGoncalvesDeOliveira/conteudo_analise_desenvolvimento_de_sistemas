#include <iostream>
#include <conio.h>
using namespace std;
float s=0, n1=37, n2=38, den=1;
main(){
    while ( den <= 37) {
        s = s + n1*n2/den;
        n1 = n1 - 1;
        n2 = n2 - 1;
        den = den + 1;
    }
    cout << "S = " << s;
}
