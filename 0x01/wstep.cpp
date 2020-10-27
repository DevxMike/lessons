#include <iostream>

using namespace std;

void hello(); //deklaracja
int odejmowanie(int a, int b); //deklaracja

int suma(int a, int b){
    int wynik = a + b;
    return wynik;
}

int main(void){
    int wynik = suma(2, 3); //wynik = 5
    hello();
    cout << "Suma z main():" << wynik << endl;
    return 0;
}

void hello(){ //definicja
    cout << suma(1, 3) << endl;
    cout << odejmowanie(1, 3) << endl;
}
//console out
int odejmowanie(int a, int b){
    return(a - b);
}