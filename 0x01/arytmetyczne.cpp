#include <iostream>

using namespace std;

int main(void){
    int a = 5, b = 2;
    cout << a % b << endl; //reszta z dzielenia a przez b
    cout << a << endl;
    cout << "++a = " << ++a << endl; //a = a + 1;
    cout << "a++ = " << a++ << endl; //a = a + 1;
    cout << a << endl;
    cout << "--a = " << --a << endl; //a = a - 1;
    cout << "a-- = " << a-- << endl; //a = a - 1;
    cout << a << endl;
    int wynik = a++ + b; //a++ + b = (stare a)5 + 2; a = a + 1;
    cout << wynik << endl;
    a = 5;
    wynik = ++a + b;
    cout << wynik << endl;
    return 0;
}