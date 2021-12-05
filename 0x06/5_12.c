#include <stdio.h>

#define rozmiar_stosu 5


int main(){
    //<typ_na_który_chcemy_wskazywać> * <nazwa_wskaźnika>;
    int dane[rozmiar_stosu] = { 0 };
    const unsigned int rozmiar = rozmiar_stosu;
    unsigned int ilosc_elementow = 0;

    while(1){
        if(ilosc_elementow != rozmiar){ //czy stos nie jest pełny?
            printf("Podaj kolejny element stosu: ");
            int tmp;
            scanf("%d", &tmp);
            dane[ ilosc_elementow ] = tmp;
            ilosc_elementow++;
        }
        else{
            printf("Stos jest juz pelny\n");
            break;
        }
    }

    while(1){
        if(ilosc_elementow > 0){ //czy stos nie jest pusty
            printf("Sciagam %u element ze stosu: ", ilosc_elementow);
            int tmp = dane[ ilosc_elementow -1 ];
            printf("element %u: %d\n", ilosc_elementow, tmp);
            ilosc_elementow--;
        }
        else{
            printf("Stos jest juz pusty");
            break;
        }
    }

    return 0;
}