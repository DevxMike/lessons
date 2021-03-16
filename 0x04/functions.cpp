#include <iostream>

using namespace std;

//deklaracja funkcji: typ_zwracany nazwa_funkcji(lista_parametrow);
//definicja funkcji: typ_zwracany nazwa_funkcji(lista_parametrow) { instrukcje }

void wczytaj_elementy(int tablica[], int n);
int wypisz_elementy(const int tablica[], int n);

void double_value(double* var){
    *var = *var * 2;
}

int& odejmij(int& ref, int var){
    ref = ref - var;

    return ref;
}

int main(void){
    /*const int n = 5;
    int tablica[n] = {0}; //wszystkie elementy taablicy inicjalizujemy zerami

    wczytaj_elementy(tablica, n);

    int parzyste = wypisz_elementy(tablica, n);

    cout << parzyste << " - ilosc parzystych." << endl;

    double var = 10.0;

    double_value(&var);

    cout << var << endl;*/


    return 0;
}

void wczytaj_elementy(int tablica[], int n){
    for(int i = 0; i < n; ++i){
        cout << "Podaj element: " << endl;
        cin >> tablica[i];
    }
}
int wypisz_elementy(const int tablica[], int n){
    int parzyste = 0;

    for(int i = 0; i < n; ++i){
        cout << tablica[i] << endl;
        
        if(tablica[i] % 2 == 0){
            ++parzyste;
        }
    }

    return parzyste;
}