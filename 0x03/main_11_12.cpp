#include <iostream>

using namespace std;

int main(void){
    int tablica[8]{ 1, 2, 5, 6, 1, 7, 9, 1 };
    int min, max;
    int wielkosc_temp = 0;
    int index;
    min = max = tablica[0];

    for(int i = 1; i < 8; ++i){
        if(tablica[i] < min) { min = tablica[i]; }
        if(tablica[i] > max) { max = tablica[i]; }
    }
    for(int i = min; i <= max; ++i) { ++wielkosc_temp; }
    
    cout << "min: " << min << ", max: " << max << ", wielkosc: " << wielkosc_temp << endl;

    int* temp = new int[wielkosc_temp]; //przydzielanie pamieci dla tablicy o liczbie elementow rownej wielkosc_temp
    for(int i = 0; i < wielkosc_temp; ++i){
        temp[i] = 0;
    }

    for(int i = 0; i < 8; ++i){
        index = tablica[i] - min;
        ++temp[index];
    }
    for(int i = 0; i < wielkosc_temp; ++i){ //ilosc wystapien
        cout << temp[i] << ", ";
    }
    cout << endl;
    max = temp[0];
    for(int i = 1; i < wielkosc_temp; ++i){
        if(temp[i] > max) { max = temp[i]; }
    }
    cout << "Max: " << max << endl;
    index = 0;
    while(max != temp[index]){
        ++index;
    }
    cout << "Najczestsza: " << index + min << endl;
    delete[] temp;
    return 0;
}

/*
#include <iostream>

using namespace std;

int main(void){
    int tablica[8]{ 1, 2, 5, 6, 1, 7, 9, 1 };
    int min, max;
    int wielkosc_temp = 0;
    int index;
    min = max = tablica[0];

    for(int i = 1; i < 8; ++i){
        if(tablica[i] < min) { min = tablica[i]; }
        if(tablica[i] > max) { max = tablica[i]; }
    }
    for(int i = min; i <= max; ++i) { ++wielkosc_temp; }
    
    cout << "min: " << min << ", max: " << max << ", wielkosc: " << wielkosc_temp << endl;

    int* temp = new int[wielkosc_temp]; //przydzielanie pamieci dla tablicy o liczbie elementow rownej wielkosc_temp
    for(int i = 0; i < wielkosc_temp; ++i){
        temp[i] = 0;
    }

    for(int i = 0; i < 8; ++i){
        index = tablica[i] - min;
        ++temp[index];
    }

    index = 0;
    for(int i = 0; i < wielkosc_temp; ++i){
        for(int j = 0; j < temp[i]; ++j){
            tablica[index++] = i + min;
        }
    }
    for(int i = 0; i < wielkosc_temp; ++i){
        cout << temp[i] << ", ";
    }
    cout << endl;
    for(int i = 0; i < 8; ++i){
        cout << tablica[i] << ", ";
    }
    cout << endl;
    delete[] temp;
    return 0;
}
*/

//int* wskaznik = nullptr;

    //wskaznik = &min;
    //*wskaznik = 1;

    //cout << "wskaznik -> " << (void*) wskaznik << endl << "adres wskaznika -> " << (void*) &wskaznik << endl;   
    //int* pointer = nullptr;

    //pointer = new int;
    //*pointer = 5;
    //cout << *pointer << " <- " << reinterpret_cast<void*>(pointer)<< endl;
    //delete pointer;