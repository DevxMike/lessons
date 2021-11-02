#include <iostream>
#include <string>

using namespace std;

/*class Samochod{
  //najprostsza klasa  
};*/
class Samochod{
    private:
    unsigned przebieg;
    unsigned ilosc_paliwa;
    string model;

    public:
    Samochod(string model, unsigned przebieg = 0, unsigned ilosc_paliwa = 0);
    Samochod(const Samochod& s);
    ~Samochod(){}
    unsigned podaj_przebieg() const; //jesli po parametrach występuje const
    //to świadczy o tym, że metoda nie ma prawa w żaden sposób
    //zmodyfikować właściwości obiektu
    unsigned podaj_ile_paliwa() const;
    string podaj_model() const;
    void przejedz_trase(unsigned dlugosc_trasy){
        cout << "Przejechano trase o dlugosci " << dlugosc_trasy << "km." << endl;
        this->przebieg += dlugosc_trasy;
    }
    unsigned& zmien_ilosc_paliwa(void);
};

Samochod::Samochod(string model, unsigned przebieg, unsigned ilosc_paliwa){
    //aby odwołać się do pola wewnątrz klasy należy użyć jeszcze
    //wskaźnika 'this'
    this->przebieg = przebieg;
    this->ilosc_paliwa = ilosc_paliwa;
    this->model = model;
}
//inny sposób zapisu konstruktora
Samochod::Samochod(const Samochod& s): 
    przebieg(s.przebieg), ilosc_paliwa(s.ilosc_paliwa), model(s.model){

} 

//aby zdefiniować metody, należy użyć następującej konstrukcji
//typ_zwracany_metody NAZWA_KLASY::nazwa_metody(parametry){instrukcje}

unsigned Samochod::podaj_przebieg() const{
    return this->przebieg;
}

unsigned Samochod::podaj_ile_paliwa() const{
    return this->ilosc_paliwa;
}

string Samochod::podaj_model() const{
    return model;
}

unsigned& Samochod::zmien_ilosc_paliwa(){
    return ilosc_paliwa;
}

int main(void){
    //dynamiczne alokowanie pamięci:
    //typ * nazwa = new typ;
    //należy pamiętać, aby po wykorzystaniu zmiennej usunąć tę zaalokowaną pamięć
    //dokonuje się tego operatorem delete
    //składnia: delete nazwa;

    int* zmienna = new int;

    *zmienna = 5;

    cout << "Zmienna: " << *zmienna << endl;
    cout << "Adres: " << zmienna << endl;

    delete zmienna;

    Samochod* jakikolwiek = new Samochod("no name");

    cout << jakikolwiek->podaj_model() << endl;
    //jeśli pamięć pprzydzielona jakiemukolwiek identyfikatorowi
    //została zwolniona operatorem delete to można do niej
    //ponownie przypisać nową pamięć operatorem new

    zmienna = new int;
    cout << "Podaj liczbę: ";
    cin >> *zmienna;

    cout << "Zmienna: " << *zmienna << endl;
    cout << "Adres: " << zmienna << endl;

    *jakikolwiek = (*zmienna % 2? Samochod("Audi 80") : Samochod("volvo xc90"));

    cout << jakikolwiek->podaj_model() << endl;

    cout << jakikolwiek->podaj_ile_paliwa() << endl;
    
    jakikolwiek->zmien_ilosc_paliwa() = 10;

    cout << jakikolwiek->podaj_ile_paliwa() << endl;

    Samochod referencja = Samochod(*jakikolwiek);
    cout << referencja.podaj_ile_paliwa() << endl;
    cout << referencja.podaj_model() << endl;


    delete jakikolwiek;

    return 0;
}