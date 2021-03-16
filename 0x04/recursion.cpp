#include <iostream>

unsigned silnia(unsigned n){
    if(n == 0){
        return 1;
    }

    return n * silnia(n - 1);
}//n! = n * n-1 * ... * 2 * 1

using namespace std;

int main(void){
    cout << silnia(5) << endl;
    
    return 0;
}


//budowa funkcji rekurencyjnej:

/*
typ_zwracany nazwa_funkcji(int example){
    //KONIECZNIE WARUNEK WYJŚCIA Z REKURENCJI
    if(example == 0){
        return 0;
    }
    //wywołąnie rekurencyjne
    return example + nazwa_funkcji(example - 1);
} -> an + an-1 + an - 2 +...+ a3 + a2 + a1

cout << nazwa_funkcji(5);
*/