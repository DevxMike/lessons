#include <iostream>

using namespace std;

int main(void){
    int tablica[10]{ 10, 21, 34, 4, 51, 64, 71, 85, 91, 110 }; //jeśli chcesz odnaleźć jakiś element w tablicy
    // można zastosować następujące postępowanie:
    // sortowanie tablicy a następnie przeszukiwanie jej

    int porzadany_el;

    cin >> porzadany_el;
    
    for(int i = 0; i < 10; ++i){
        if(tablica[i] == porzadany_el){
            cout << "Element " << porzadany_el << " znajduje sie pod indeksem " << i << endl;
        }
    }
}