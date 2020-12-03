/*#include <iostream>
using namespace std;

int main(void){
    int n1, n2;
    int ciag1[10]{0}, ciag2[10]{0};
    cin >> n1;
    for(int i = 0; i < n1; ++i){
        cin >> ciag1[i];
    }
    cin >> n2;
    for(int i = 0; i < n2; ++i){
        cin >> ciag2[i];
    }
    int iter1 = 0, iter2 = 0;
    while(iter2 < n2 && iter1 < n1){
        if(ciag1[iter1] == ciag2[iter2++]){
            ++iter1; 
        }
    }
    if(iter1 == n1){
        cout << "TAK";
    }
    else{
        cout << "NIE";
    }
    cout << endl;
    return 0;
}*/

/*
#include <iostream>

using namespace std;

int main(void){
    int ciag[20000]{0};
    int liczba;
    int i = 0;

    while(cin){
        cin >> liczba;
        if(liczba == -1) {
            break;
        }
        else{
            ciag[i++] = liczba;
        }
    }

    for(i = i - 1; i >= 0; --i){
        cout << ciag[i] << " ";
    }
    cout << endl;
    return 0;
}
*/


/*
#include <iostream>

using namespace std;
typedef unsigned long long ull;

ull silnia(int liczba){
    if(liczba == 0){
        return 1;
    }
    else{
        return liczba * silnia(liczba - 1);
    }
}

int main(void){
    int liczba; //unsigned long long liczba; 
    cin >> liczba;
    cout << silnia(liczba);
    return 0;
}
*/

/*
#include <iostream>

using namespace std;

int main(void){
    int liczba;
    cin >> liczba;

    for(int i = 2; i < liczba; ++i){
        if(liczba % i == 0){ //jeśli większe niż 0 to wtedy jest reszta z dzielenia czyli jest więcej niż dwa dzielniki
            cout << "zlozona" << endl;
            return 0;
        }
    }

    cout << "pierwsza" << endl;
    return 0;
}*/


/*Kolejne liczby niepodzielne przez 2 i przez 3 
#include <iostream>

using namespace std;

int main(void){
    int k, n;
    cin >> k >> n;
    
    while(n > 0){
        if((k % 2 != 0) && (k % 3 != 0)){
            cout << k++;       
            if(--n){
            cout << " ";
            }
        } 
        else{
            ++k;
        }
    }
    return 0;
}


//auto wynik = wyrazenie1? wyrazenie2 : wyrazenie3;
*/