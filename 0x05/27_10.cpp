#include <iostream>
#include <string>

using namespace std;

//struct nazwa_struktury{
//typ_prosty lub złożony nazwa_zmiennej_1;
//typ_prosty lub złożony nazwa_zmiennej_2;
//.
//.
//.
//typ_prosty lub złożony nazwa_zmiennej_n;
//};

struct samochod{
    string marka;
    string kolor;
    unsigned przebieg;
    unsigned ilosc_paliwa;
    unsigned maksymalna_predkosc;
};

struct salon_samochodowy{
    samochod egzemplarze[10];
    string miasto;
};

void wypisz_strukture_ref(const samochod &s){ //referencja, ponieważ nie tracimy czasu na kopiowanie zawartości struktury
//i pamięci, const, ponieważ funkcja ma tylko coś wypisać a nie modyfikować źródło informacji
    //operator '.' - operator dostępu
    //s.maksymalna_predkosc;
    
    cout << "Marka samochodu: " << s.marka << endl;
    cout << "Kolor: " << s.kolor << endl;
    cout << "Przebieg calkowity: " << endl;
    cout << "Ilosc paliwa w zbiorniku: " << s.ilosc_paliwa << endl;
    cout << "Maksymalna predkosc: " << s.maksymalna_predkosc << endl;
}

void wypisz_strukture_pt(const samochod *s){
    //operator '->' - operator dostępu
    //s->maksymalna_predkosc;

    cout << "Marka samochodu: " << s->marka << endl;
    cout << "Kolor: " << s->kolor << endl;
    cout << "Przebieg calkowity: " << endl;
    cout << "Ilosc paliwa w zbiorniku: " << s->ilosc_paliwa << endl;
    cout << "Maksymalna predkosc: " << s->maksymalna_predkosc << endl;
}

void wypisz_string(const string& s){
    cout << s << endl;
}

void funkcja(void){
    cout << "Funkcja bez parametrow\n";
}

void funkcja(int a){
    cout << "Funkcja int o tej samej nazwie z a = " << a << endl;
}

void funkcja(int a, int b){
    cout << "Funkcja o tej samej nazwie z a = " << a << ", b = " << b << endl;
}

void funkcja(float a){
    cout << "Funkcja float o tej samej nazwie z a = " << a << endl;
}

void funkcja(double a){
    cout << "Funkcja double o tej samej nazwie z a = " << a << endl;
}

void f_domyslne(int a = 5, float b = 0.5f, const string& c = "string"); //parametry domyślne tj. wartości
//wykorzystywane są wtedy I TYLKO WTEDY kiedy inne nie zostały podane przy wywołaniu funkcji

int main(void){
    //samochod audi; - deklaracja
    //samochod audi = { "Audi", "Czarny", 0, 60, 240 }; - definicja
    //samochod audi{ "Audi", "Czarny", 0, 60, 240 }; - definicja
    
    samochod audi;

    //operator '?:'

    //zmienna = wyrażenie1 ? wyrażenie2 : wyrażenie3;
    //jeśli wyrażenie1 jest prawdziwe to zwracane jest wyrażenie2
    // w przeciwnym wypadku zwracane jest wyrażenie3
    int zmienna = (2 + 2) == 5? 2 : 0; //można wykorzystać do określenia wartości zmiennej

    cout << zmienna << endl;

    cout << (zmienna > 0? "zmienna jest wieksza niz zero" : "zmienna nie jest wieksza niz zero") << endl;

    wypisz_string(zmienna > 0? "zmienna jest wieksza niz zero" : "zmienna nie jest wieksza niz zero");//można podać jako parametr funkcji

    funkcja(); //polimorfizm poprzez tworzenie wielu definicji
    funkcja(5); //uważać na niejednoznacznośc
    funkcja(5, 2);
    funkcja(5.0);

    //stała typu float: 10.5f
    //stała typu double: 10.5

    f_domyslne(); //polimorfizm za pomocą parametrów domyślnych
    //f_domyslne("hello"); //to nie będzie działać, ponieważ nie możemy podać napisu (3 parametr) bez podania poprzednich
    //jeśli chcemy podać parametry to musimy podawać je od pierwszego
    f_domyslne(1); //wywołanie z int a = 1 a pozostałe domyślne
    f_domyslne(1, 2.1f); //wywołanie z int a = 1, float b = 2.1f i napis domyślny
    f_domyslne(1, 2.1f, "Hello world\n"); //wywołanie z int a = 1, float b = 2.1f i napisem "Hello world\n"
    //stosować wtedy kiedy to konieczne
    return 0;
}

void f_domyslne(int a, float b, const string& c){ //przy wywołaniu TEJ akurat funkcji można podać 0, 1, 2 lub 3 parametry
    cout << a << ", " << b << ", " << c << endl; 
}
