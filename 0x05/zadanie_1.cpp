#include <iostream>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;


float suma(float a, float b);
float roznica(float a, float b);
float iloczyn(float a, float b);
float iloraz(float a, float b);
char pobierz_znak(void);
void blad(int x);
void koniec(void);

float wykonaj_dzialanie(float a, float b, char c){
    float wynik;

	switch (c)
	{
	case '+':
	{
		wynik = suma(a, b);
		break;
	}
	case '-':
	{
		wynik = roznica(a, b);
		break;
	}
	case '*':
	{
		wynik = iloczyn(a, b);
		break;
	}
	case '/':
	{
		if(b != 0.0f){
                wynik = iloraz(a, b);
        }
        else{
            wynik = 0.0f;
            blad(0);
        }
    	break;
	}
	case 'K':
	{
		koniec();
		break;
	}

    }
    return wynik;
}

// ---> dodatkowo zmodyfikować funkcje powyższą tak aby zwracała wynik przez wskaźnik a później tak aby zwracała przez referencje <---
// potestować różne możliwości

int main()
{
    char c = pobierz_znak();

    while(c != 'K'){
        if(c == -1){
            blad(1);

            while((c = pobierz_znak()) == -1){
                blad(1);
                continue;
            }

            if(c == 'K'){
                koniec();
            }
        }

        float a, b, wynik;

        cout << "Podaj a: ";

        cin >> a;

        cout << "Podaj b: ";
        
        cin >> b;

        cout << "Wynik dzialania: " << wykonaj_dzialanie(a, b, c) << endl << endl;

        c = pobierz_znak();
    }	
}

char pobierz_znak(void){
    char c;

    cout << "'+' \t '-' \t '*' \t '/' \t 'K' - Koniec Programu" << endl;
    cout << "\tWybierz: " << endl;
    cin >> c;

    if(c != '+' && c != '-' && c != '*' && c != '/' && c != 'K'){
        return c = -1; //powiadamiamy, że wystąpił błąd
    }

    return c;
}

float suma(float a, float b){
    return a + b;
}
float roznica(float a, float b){
    return a - b;
}
float iloczyn(float a, float b){
    return a * b;
}
float iloraz(float a, float b){
    return a / b;
}

void  blad(int x)
{
	static int ilosc_dzielenia_zero = 0;
	static int ilosc_blednych_znakow = 0;

	if (x == 0)
	{
		cout << "Dzielenie przez zero ZABRONIONE!" << endl;
		cout << "Blad nr " << ++ilosc_dzielenia_zero << endl;
	}

	if (x == 1)
	{
		cout << "bledny znak!" << endl;
		cout << "Blad nr " << ++ilosc_blednych_znakow << endl;
	}
}

void koniec(void)
{
	exit(0);
}