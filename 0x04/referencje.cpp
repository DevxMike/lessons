#include <iostream>

using std::cout;
using std::endl;

void double_int_value(int& value){
    value = value * 2;
}

int fun(int& value){
    int var = 2;
    int& ref = var;
    return ref;
}

int main(void){
    int var = 10;
    int& ref = var; //utworzenie referencji do zmiennej var, utworzenie referencji możliwe tylko poprzez definicję, deklaracja zabroniona

    cout << "var = " << var << ", adres var: " << &var << endl;
    cout << "ref = " << ref << ", adres ref: " << &ref << endl;

    ref = 20;

    cout << "var = " << var << ", adres var: " << &var << endl;
    cout << "ref = " << ref << ", adres ref: " << &ref << endl;

    double_int_value(var);

    cout << "var = " << var << ", adres var: " << &var << endl;
    cout << "ref = " << ref << ", adres ref: " << &ref << endl;

    int&& r_ref = 2;

    cout << "r_ref = " << r_ref << ", adres r_ref: " << &r_ref << endl;

    int&& returned = fun(ref);
    
    cout << "returned = " << returned << ", adres returned: " << &returned << endl;

    return 0;
}