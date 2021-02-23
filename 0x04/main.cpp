#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


//int generate_random(int lower, int upper);

void find_leader(int array[], int size){

}


//void say_hello(int liczba = 5, bool warunek = true);

int main(void){
    int my_random;
    srand(time(NULL));
    //my random
    /*if((my_random = generate_random(0, 23)) > 10){
        cout << "My random > " << 10 << endl;
    }
    else{
        cout << "My random <= " << 10 << endl;
    }
    cout << my_random << endl;*/

    /*int array[100]; //max 100 
    int size = 0; 

    cout << "Podaj wielkosc tablicy (max 100): ";
    cin >> size;

    for(int i = 0; i < size; ++i){
        cout << "Podaj element " << i + 1 << ": ";
        cin >> array[i];
    }
    */

    return 0;
}
/*
int generate_random(int lower, int upper){
    int temporary = (rand() % (upper + 1)) + lower;
    return temporary;
}
*/

/*void say_hello(int liczba, bool warunek){
    cout << "Hello!" << endl;

    if(warunek){
        cout << "Liczba: " << liczba << endl;
    }
    else{
        cout << warunek << " == false" << endl;
    }
}
*/