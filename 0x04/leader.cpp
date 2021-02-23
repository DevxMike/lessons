#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void find_leader(int array[], int size){
    int leader = array[0];
    int frequency = 1;
    int quantity = 0;


    for(int i = 1; i < size; ++i){
        //if(!frequency) ... alternatywnie
        if(frequency == 0){ //krok 4
            leader = array[i];
            frequency = 1;
        }
        else{ //krok 5
            //frequency += (array[i] == leader)? 1 : -1; //alternatywnie
            if(array[i] == leader){
                ++frequency;
            }
            else{
                --frequency;
            }
        }
    }
    if(frequency == 0){
        cout << "Brak lidera!" << endl;
        return; //powrót do funkcji wywołującej
    }
    for(int i = 0; i < size; ++i){
        if(array[i] == leader){ //ilość wystąpień
            ++quantity;
        }
    }
    if((size/2) < quantity){
        cout << "Liderem jest " << leader << endl;
    }
    else{
        cout << "Brak lidera!" << endl;
    }
}

int main(void){
    int array[100];
    int size;

    cout << "Podaj wielkosc tablicy (max 100): ";
    cin >> size;

    for(int i = 0; i < size; ++i){
        cout << "Podaj element " << i + 1 << ": ";
        cin >> array[i];
    }

    find_leader(array, size);

    return 0;
}

/*
    int x = 5, y = 10;
    int zmienna = (x > 5)? x : y;
    jeśli x większe od 5 przypisz zmiennej zmienna wartość x
*/