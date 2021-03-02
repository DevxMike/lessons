#include <iostream>

using std::cout;
using std::endl;
using std::cin;

void double_array_values(int array[], int n){
    for(int i = 0; i < n; ++i){
        array[i] *= 2;
        //i[array] *= 2; //array[i] -> *(array + i), i[array] -> *(i + array)  
    }
}

void print_int_array(const int array[], int n){
    for(int i = 0; i < n; ++i){
        cout << "array[" << i <<"] = " << array[i] << endl;
    }
    cout << endl;
}

int main(void){
    int variable = 10;

    cout << variable << " znajduje sie pod adresem: " 
        << &variable << endl; //&variable - uzyskanie adresu zmiennej variable

    //int* pointer = nullptr; inicjalizacja jeślii brak zmiennej której adres chcemy przechowywać
    //int* pointer = &variable; //inicjalizacja adresem zmiennej
    int* pointer = nullptr;

    pointer = &variable;
    
    cout << *pointer << " znajduje sie pod adresem " 
        << pointer << " a adres wskaznika to " << &pointer << endl;

    *pointer = 200;

    cout << variable 
        << " zawartosc variable po operacji *pointer = 200" << endl;

    const int n = 10;
    int array[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    print_int_array(array, n);
    double_array_values(array, n);
    print_int_array(array, n);

    pointer = array;

    pointer = pointer + 2;
    pointer -= 1; // pointer = pointer - 1; --pointer;

    pointer = array;

    while(pointer < array + n){
        cout << *pointer++ << endl;
    }
}