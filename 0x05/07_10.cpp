#include <iostream>

using namespace std;

//deklaracja
//<typ> nazwa_funkcji(<typ_arg_1> arg_1, ..., <typ_arg_n> arg_n);

void powiedz_czesc(void); //deklaracja

//ZADANIE DO SAMODZIELNEGO WYKONANIA

float wykonaj_dzialanie(float a, float b, char c){
    //zależnie od znaku c { +, -, /, * }
    //na operandach a i b należy wykonać działanie arytmetyczne
    //jeśli znak nie należy do zbioru { +, -, /, * } to wypisac komunikat o bledzie
    //sprawdzic czy nie ma dzielenia przez 0
    //należy stworzyć oddzielne funkcje do odejmowania dzielenia mnożenia i dodawania
    //i wykorzystać je w tej dużej funkcji
    //utworzyć oddzielną funkcję, która będzie wypisywała komunikat o błędzie,
    //funkcja ma przyjąć jako parametr kod błędu (dzielenie przez zero to kod 0, błędny znak to kod 1)
    //utworzyć w tej funkcji dwie zmienne statyczne, które przy wypisywaniu komunikatu o błędzie będą również informowały 
    // o ilości popełnionych wcześniej błędów
    //np. "dzielenie przez zero jest niedozwolone, ten blad popelniono juz X raz" - X liczba całkowita 
}

// dodatkowo zmodyfikować funkcje powyższą tak aby zwracała wynik przez wskaźnik a później tak aby zwracała przez referencje
// można również zmodyfikować w ten sam sposób funkcje odpowiedzialne za operacje arytmetyczne
// potestować różne możliwości

//ZADANIE DO SAMODZIELNEGO WYKONANIA

void sumuj_zwroc_poprzez_wskaznik(float a, float b, float *wynik){
    *wynik = a + b;
}

void sumuj_zwroc_poprzez_referencje(float a, float b, float &wynik){
    wynik = a + b;
}

int main(void){
    int tasma = 1;
    int * wskaznik_do_tasmy_1; //deklaracja wskaźnika
    int * wskaznik_do_tasmy_2 = &tasma; //definicja wskaźnika (utworzenie i inicjalizacja)
    //<typ> * nazwa_wskaźnika; //deklaracja
    //<typ> * nazwa_wskaźnika = &zmienna; //definicja

    powiedz_czesc();

    cout << "wartosc zmiennej: " << tasma << ", adres tej zmiennej: " << &tasma << endl;
    cout << "wartosc przechowywana przez wskaźnik: " << wskaznik_do_tasmy_2 << ", wartosc spod adresu ktory przechowuje wskaznik: " << *wskaznik_do_tasmy_2 << endl;

    *wskaznik_do_tasmy_2 = 20;

    cout << "wartosc zmiennej: " << tasma << ", adres tej zmiennej: " << &tasma << endl;
    cout << "wartosc przechowywana przez wskaźnik: " << wskaznik_do_tasmy_2 << ", wartosc spod adresu ktory przechowuje wskaznik: " << *wskaznik_do_tasmy_2 << endl;

    cout << "adres wskaznika: " << &wskaznik_do_tasmy_2 << endl;


    powiedz_czesc();
    //wskaźnik to zmienna, która przechowuje adres

    int zmienna = 20;
    //int &referencja_do_zmiennej; //deklaracja jest niedozwolona
    int &referencja_do_zmiennej = zmienna; //przy tworzeniu referencji musi nastąpić inicjalizacja

    cout << endl << "wartosc zmiennej: " << zmienna << ", adres tej zmiennej: " << &zmienna << endl;
    cout << "wartosc zmiennej: " << referencja_do_zmiennej << ", adres tej zmiennej: " << &referencja_do_zmiennej << endl;

    powiedz_czesc();

    float wynik = 5.0f;

    cout << "wynik: " << wynik << endl;
    
    sumuj_zwroc_poprzez_wskaznik(5.0f, 10.0f, &wynik);

    cout << "wynik: " << wynik << endl;

    sumuj_zwroc_poprzez_referencje(10.0f, 200.12333f, wynik);

    cout << "wynik: " << wynik << endl;
}

//definicja
//<typ> nazwa_funkcji(<typ_arg_1> arg_1, ..., <typ_arg_n> arg_n){
    //instrukcje
//}

void powiedz_czesc(void){ //definicja
    static int ilosc; //zmienna zostala zainicjalizowana wartoscia 0
                      //w trakcie działania programu adres tej zmiennej będzie zawsze taki sam

    cout << endl;
    cout << "Czesc, co slychac, jak sie masz?";
    cout << endl;
    cout << "Funkcja zostala wywolana " << ++ilosc << " razy" << endl;
    cout << "adres zmiennej 'ilosc'" << &ilosc << endl;
}