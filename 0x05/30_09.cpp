#include <iostream>
#include <climits>
//dodatkowe potrzebne biblioteki

using std::cout;
using std::endl;
using std::cin;

//<typ_zwracany_przez_funkcję> nazwa_funkcji(<typ_argumentu1> nazwa_arg1,..., <typ_argumentu_n> nazwa_arg_n)

float sum(float a, float b); //deklaracja
int cos_tam(){
    return 1;
}
char cos_tam_2(){
    return 'A';
}
//itd 

void print_hello(){
    cout << "Hello" << endl;
}

//deklaracja - informacja dla kompilatora, że funkcja zostanie zdefiniowana
//definicja - ciało funkcji

int main(){
    cout << "int max: " <<  INT32_MAX << endl;
    cout << "int min: " << INT32_MIN << endl;
    cout << "long max: " << LONG_MAX << endl;
    cout << "long min: " << LONG_MIN << endl;
    cout << "long long max: " << LLONG_MAX << endl;
    cout << "long long min: " << LLONG_MIN << endl;
    cout << "unsigned max: " << UINT32_MAX << endl;
    cout << "unsigned long max: " << ULONG_MAX << endl;
    cout << "unsigned long long max: " << ULONG_LONG_MAX << endl;
    
    /*
    if(wyrażenie){ 
        //instrukcje
    }
    else{
        //instrukcje
    }

    if(wyrażenie1){
        //instrukcje
    }
    else if(wyrażenie2){
        //instrukcje
    }
    else{
        //instrukcje
    }
    */

    /*
    switch(zmienna){ //zakładamy, że zmienna jest typu char
        case 'A':
        //instrukcje; wykona się tylko case 'A', bo jest break
        break;

        case 'B':
        //instrukcje;

        case 'C':
        //instrukcje //po napotkaniu 'B' wykona się 'B' i 'C', bo break jest dopiero w 'C'
        break;
        
        default:
        //instrukcje wykonywane gdy nie ma żadnego dopasowania
        break;
    }
    */

    /*
    nazwy zmiennych to identyfikatory, które KONIECZNIE zaczynają się od litery, mogą zawierać cyfry
    UWAGA, znak '_' jest traktowany jako litera
    */

    /*
    zmienne należy nazywać tak, aby ich nazwa mówiła nam praktycznie wszystko o ich przeznaczeniu,
    należy wypracować sobie jedną konwencję nazywania zmiennych (camelCase, snake_case), dodatkowo
    trzymać się wyłącznie jednego języka (np. angielski)
    */

    /*
    for(wyrażenie1; wyrażenie2; wyrażenie3){
        //ciało pętli, instrukcje
    }
    */

    /*
    while(wyrażenie){
        //instrukcje
    }
    */

    /*
    do{
        //instrukcje
    }while(wyrażenie);
    */

    int zmienna;
    char znak;

    cin >> zmienna; 
    cin.get(); //pozbywamy się znaku '\n' z buforu (on pozostaje po wciśnięciu ENTER)
    znak = cin.get();

    /*
    alternatywnie 
    cin >> znak;
    */

    cout << "zmienna: " << zmienna << endl;
    cout << "kod znaku: " << int(znak) << endl;

    return 0;
}

float sum(float a, float b){ //definicja funkcji
    return a + b; 
}