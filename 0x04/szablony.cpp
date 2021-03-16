#include <iostream>

template <typename T>
void double_value(T& value){
    value = value * 2;
}

//tworzenie szablonu funkcji:
//template <typename T, ..., typename Z> //deklarowanie szablonu + typów na których będziemy operować 
//typ_zwracany nazwa funkcji(lista_argumentów){ instrukcje }

using namespace std;

int main(void){
    int v1 = 10;
    short v2 = 5;
    long v3 = 1;
    unsigned v4 = 50;
    char v5 = '1';

    double_value(v1); double_value(v2); double_value(v3); double_value(v4); double_value(v5);

    cout <<  v1 << endl << v2 << endl << v3 << endl << v4 << endl << v5 << endl;
    return 0;
}