#include <iostream>
#include <climits>

using namespace std;

struct punkt{
    int x;
    int y;
    int z;
};

struct kwadrat{
    int pole;
    int bok;
    punkt wierzcholki[4];
};

int main(void){
    char a = 5;
    short b;
    int c;
    long int d; //ewentualnie long d;
    long long int e; 


    float f;
    double g;
    long double h; //domyślnie ze znakiem

    unsigned char ua;
    unsigned short ub;
    unsigned int uc;
    unsigned long int ud; //ewentualnie unsigned long d;
    unsigned long long int ue; //bez znaku 

    bool logic; //lub logic = true;


    cout << "Typy ze znakiem:\n";
    cout << "char_max: " << CHAR_MAX << ", char_min: " << CHAR_MIN << endl;
    cout << "short_max: " << SHRT_MAX << ", short_min: " << SHRT_MIN << endl;
    cout << "int_max: " << INT_MAX << ", int_min: " << INT_MIN << endl;
    
    cout << "Typy bez znaku:\n";
    cout << "char_max: " << UCHAR_MAX << ", char_min: " << 0 << endl;
    cout << "short_max: " << USHRT_MAX << ", short_min: " << 0 << endl;
    cout << "int_max: " << UINT_MAX << ", int_min: " << 0 << endl;

    logic = (a > 5); //logic = false;
    cout << "a > 5? " << logic << endl;
    logic = 5; //logic = true;
    cout << logic << endl;
    logic = 0;
    cout << logic << endl;


    /*
    logic = true; //odpowiednik 1
    logic = false; //odpowiednik 0
    */

    //tablice <typ> nazwa_tablicy[<ilosc_elementow>] = {elementy};
    int kawa1[5] = {1, 2, 3, 4, 5};
    int kawa2[5] = {1, 2, 3, 4}; //ostatni 0
    int kawa3[5] = {0};//wszystkie elementy mają wartość 0
    int kawa4[] = {1, 2, 3, 4}; //kompilator sam oblicza wielkość tablicy, w tym wypadku 4

    /*
    int kawa[5] = {1, 2, 3, 4, 5};
        1 element -> kawa[0]
        2 element -> kawa[1]
        3 element -> kawa[2]
        4 element -> kawa[3]
        5 element -> kawa[4]
    */

    /*
    int kawa[4] = {1, 3, 4, 5};
        1 element -> kawa[0]
        2 element -> kawa[1]
        3 element -> kawa[2]
        4 element -> kawa[3]
        5 element -> kawa[4] //zachowanie niezdefiniowane
    */

    enum miesiace{
        sty,
        lu,
        mar = 10,
        kwi
    };
    cout << "Styczen: " << sty 
    << ", Luty:" << lu << ", Marzec: "
    << mar << ", Kwiecien: " << kwi << endl;

    //lwartości - left values lvalue
    //rwartości - right values rvalue

    int lval = 5; 
    int& ref = lval; //referencja lwartościowa

    cout << "lval = " << lval;
    cout << endl << "ref = " << ref << endl;

    ref = 10;
    cout << "lval = " << lval;
    cout << endl << "ref = " << ref << endl;

    punkt p;

    p.x = 0;
    p.y = 0;
    p.z = 0;

    kwadrat k1;

    k1.bok = 4;
    k1.pole = k1.bok * k1.bok;
    k1.wierzcholki[0].x = 0;
    k1.wierzcholki[0].y = 0;

    k1.wierzcholki[1].x = 0;
    k1.wierzcholki[1].y = 0;

    k1.wierzcholki[2].x = 0;
    k1.wierzcholki[2].y = 0;

    k1.wierzcholki[3].x = 0;
    k1.wierzcholki[3].y = 0;
    return 0;
}