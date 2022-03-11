#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define T 10
int v1[T], i;
int main(){
    i=0;
    srand (time(NULL));
    while (i<T){
        v1[i]=rand() % 20 + 1;  //gera números aleatórios entre 1 e 20
        i++;
    }
  i=0;
    while(i<T){
        cout<<"\n \t"<<v1[i];
        i++;
    }
}
