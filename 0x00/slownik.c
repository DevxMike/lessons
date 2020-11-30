#include <stdio.h>
#include <stdbool.h>

#define N 500

struct para{
    int klucz;
    char *wartosc;
};

struct slownik {
    struct para tbl[N];
    unsigned ile_par;
};

typedef bool (*wskaznik)(int);

bool znajdz_pozycje(struct slownik *s, int klucz, unsigned *pozycja);
char* znajdz(struct slownik *s, int klucz);
bool wstaw(struct slownik *s, int klucz, char *wartosc);
void wypisz(const struct slownik *s);
void usun_z_pozycji(struct slownik *s, unsigned pozycja);
void usun(struct slownik *s, int klucz);
void usun_pred(struct slownik *s, bool (*predykat)(int));

bool pred(int k){
    return k < 10;
}
void inicjuj_slownik(struct slownik *s){
    s->ile_par = 0;
}

int main(void){
    wskaznik pt = pred;

    struct slownik s; //słownik
    struct para p[5] = { //przykładowe wartości
        {1, "student1"},
        {5, "student5"},
        {10, "student10"},
        {15, "student15"},
        {25, "student25"},
    };
    struct para p2[5] = { //przykładowe wartości
        {0, "student1"},
        {2, "student5"},
        {3, "student10"},
        {4, "student15"},
        {6, "student25"},
    };
    inicjuj_slownik(&s); //init słownika
    
    for(unsigned i = 0; i < 5; ++i){
        wstaw(&s, p[i].klucz, p[i].wartosc); //wstawienie 5 przykładowych par
    }

    wypisz(&s);

    usun_z_pozycji(&s, 3);
    wypisz(&s);

    for(unsigned i = 0; i < 5; ++i){
        wstaw(&s, p2[i].klucz, p2[i].wartosc); //wstawienie 5 przykładowych par
    }    
    wypisz(&s);

    usun_pred(&s, pt);
    wypisz(&s);

    return 0;
}
bool znajdz_pozycje(struct slownik *s, int klucz, unsigned *pozycja){
    //struct para* pt = &s->tbl[0]; pierwsze wyrazenie for
    //pt < &s->tbl[s->ile_par] wyrazenie2
    //++pt wyrazenie3
    //if(pt->klucz == klucz) ...
    for(unsigned i = 0; i < s->ile_par; ++i){
        if(s->tbl[i].klucz == klucz){
            if(pozycja != NULL){
                *pozycja = i;
            }
            return true;
        }
    }
    return false;
}
char* znajdz(struct slownik *s, int klucz){
    unsigned tmp = 0;
    if(znajdz_pozycje(s, klucz, &tmp)){
        return s->tbl[tmp].wartosc;
    }
    else{
        return NULL;
    }
}
bool wstaw(struct slownik *s, int klucz, char *wartosc){
    if(!znajdz_pozycje(s, klucz, NULL) && s->ile_par < N){
        s->tbl[s->ile_par].klucz = klucz;
        s->tbl[s->ile_par].wartosc = wartosc;
        ++s->ile_par;
        /*
            wstaw(0x18, 1, "cos_tam") | s empty
            s->tbl[0].klucz = 1;
            s->tbl[0].wartosc = 0xFF00;
            ++s->ile_par -> s->ile_par += 1 -> == 1

            wstaw(0x18, 2, "student") | ile_par == 1
            s->tbl[1].klucz = 2;
            s->tbl[1].wartosc = 0xFF1A;
            ++s->ile_par -> s->ile_par += 1 -> == 2
        */
        return true;
    }
    else{
        return false;
    }
}
void wypisz(const struct slownik *s){
    for(unsigned i = 0; i < s->ile_par; ++i){
        printf("%u. Klucz: %d, wartosc: %s\n", i + 1, s->tbl[i].klucz, s->tbl[i].wartosc);
    }
    putchar('\n');
}
void usun_z_pozycji(struct slownik* s, unsigned pozycja){
    if(pozycja < s->ile_par){
        while(pozycja < s->ile_par - 1){
            s->tbl[pozycja] = s->tbl[pozycja + 1];
            ++pozycja;
        }
        --s->ile_par;
    }
}
void usun_pred(struct slownik *s, bool (*predykat)(int klucz)){
    unsigned i, ile = 0;
    for(i = 0; i < s->ile_par; ++i){
        if(predykat(s->tbl[i].klucz)){
            ++ile;
        }
    }
    while(ile){
        for(i = 0; i < s->ile_par; ++i){
            if(predykat(s->tbl[i].klucz)){
                usun_z_pozycji(s, i);
                if((--ile) == 0){
                    return;
                }
            }
        }
    }
}
void usun(struct slownik *s, int klucz){
    unsigned poz = 0;
    if(znajdz_pozycje(s, klucz, &poz)){
        usun_z_pozycji(s, poz);
    }
}