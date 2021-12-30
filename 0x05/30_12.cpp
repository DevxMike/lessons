#include <iostream>
#include <string>

//1 określenie, co do naszej lambdy może wejść przez wartość lub przez referencje

class ksiazka{
private:
    std::string tytul, autor;
    unsigned ilosc_stron;

public:
    ksiazka() = delete;
    ksiazka(const std::string& _tytul, const std::string& _autor, unsigned _ilosc_stron):
        tytul{ _tytul }, autor{ _autor }, ilosc_stron{ _ilosc_stron } { }
    const std::string& podaj_autora()const { return autor; }
    const std::string& podaj_tytul()const { return tytul; }
    unsigned podaj_ilosc_stron()const { return ilosc_stron; }
    /*bool operator>(unsigned x){
        return ilosc_stron > x;
    }
    bool operator>=(unsigned x){
        return ilosc_stron >= x;
    }*/
    operator unsigned(){
        return ilosc_stron;
    }
};

std::ostream& operator<<(std::ostream& os, const ksiazka& k){
    os << "ksiazka o tytule \"" << k.podaj_tytul()
     << "\", napisana przez " << k.podaj_autora() << " liczy sobie " 
     << k.podaj_ilosc_stron() << " stron." << std::endl;

    return os;
}

int main(void){
    int zmienna = 12;
    auto nazwa_lambdy = [/*ad 1*/](/*parametry*/){
        //kod
    };

    auto wypisz_zmienna = [zmienna](int i)mutable{
        zmienna++;
        std::cout << zmienna << ", i = " << i << std::endl;
    };

    wypisz_zmienna(1);
    std::cout << zmienna << std::endl;

    auto modyfikuj_i_wypisz_zmienna = [&](int i){
        zmienna++;
        std::cout << zmienna << ", i = " << i << std::endl;
    };

    modyfikuj_i_wypisz_zmienna(2);
    std::cout << zmienna << std::endl;

    ksiazka k("ksiazka", "autor", 600);

    std::cout << k;

    if(k >= 600){
        std::cout << "Ksiazka ma wiecej lub 600 stron!\n";
    }
    else{
        std::cout << "Ksiazka ma mniej niz 600 stron!\n";
    }

    std::cout << bool(zmienna) << std::endl;

    return 0;
}