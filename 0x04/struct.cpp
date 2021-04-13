#include <iostream>
#include <string>

//typedef int calkowity; //konwencja z C
//using calkowity = int; //konwencja C++

using namespace std;

int main(void){
    string a, b;
    cin >> a >> b;
    cout << "a: " << a << "b: " << b << "\nSTOP";
    int number;
    cin >> number;
    if(!cin.good()){ //sprawdzenie czy wszystko w porządku z wejściem 
        cout << "Stream zablokowany\n";
    }
    cin.clear(); //usunięcie błędów
    
    while(cin.get() != '\n'){ //czyszczenie wejścia ze znaków, cin.get() -> zwraca jeden ZNAK z wejścia
        continue;
    }

    cin >> number; 
    cout << endl << number << endl; //po wpisaniu numeru i zatwierdzeniu, W KOLEJCE pozostaje znak '\n'

    while(cin.get() != '\n'){ //czyszczenie wejścia ze znaków
        continue;
    }


    getline(cin, a);
    cout << "finally: " << a << endl;
    return 0;
}