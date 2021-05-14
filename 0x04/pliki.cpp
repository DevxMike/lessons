#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void){
    ifstream fin; //analogia do cin, wczytywanie z pliku (wejście pliku, cin -> console input, fin -> file input)
    ofstream fout; //analogia do cout -||-

    fout.open("test.txt", ios::out | ios::app); //otwarty plik
    if(fout.good()){
        //for(int i = 0; i < 5; ++i)
            //fout << "Udalo sie otworzyc plik.\n";
    }
    else{
        cout << "Nie udalo sie otworzyc pliku.\n";
    }

    fout.close();
    
    fin.open("test.txt", ios::in);
    if(fin.good()){
        string temp_string;

        cout << "Udalo sie otworzyc plik.\n";
        while(!fin.eof()){
            getline(fin, temp_string);
            cout << temp_string << endl;
        }
    }
    else{
        cout << "Nie udalo sie otworzyc pliku.\n";
    }

    fin.close();
}