#include <stdio.h>

int main(){
    /*
        for(wyrażenie1; wyrażenie2; wyrażenie3){
            //blok instrukcji
        }//ciało typowej pętli for
    */
    /*
        1. najpierw wykonywane jest wyrażenie 1
        2. następnie sprawdzane jest wyrażenie 2 (prawda czy fałsz)
        3. wykonywane są instrukcje zapisane w bloku
        4. wykonywane jest wyrażenie 3
        5. powrót do kroku 2
    */

    for(int i = 0; i < 4; ++i){
        for(int j = 0; j < 4; ++j){
            if(i == 0 || i == 3){
                printf("0");
                continue; //instrukcja ta pomija resztę
                //instrukcji zawartych w pętli
            }
            printf("%c", (j == 0 || j == 3)? '0' : ' ');//%c to typ char
            //operator pytajnik, '?:'
            //operator zwraca nam wyrażenie zależnie
            //od wyrażenia warunkowego
            //wyrażenie1? wyrażenie2 : wyrażenie3;
            //jeśli wyrażenie1 jest prawdziwe 
            //to cała konstrukcja zwraca nam wyrażenie2
            //jeśli wyrażenie1 jest fałszywe to 
            //konstrukcja zwraca nam wyrażenie3
        } 
        printf("\n");  
    }

    int tablica[5];

    printf("Podaj 5 elementow\n");

    for(int i = 0; i < 5; ++i){
        printf("podaj element %d: ", i + 1);
        scanf("%d\n", &tablica[i]);
    }

    /*sposób nr 1
    for(int i = 0; i < 4; ++i){ //pętla będzie działać dla i należącego do zbioru
    //i = { 0, 1, 2, 3 } nie mylić z tablicą
        if(i == 0 || i == 3){
            printf("0000\n"); //jeśli pierwsza lub ostatnia linijka
        }
        else if(i == 1 || i == 2){
            printf("0  0\n"); //jeśli druga lub trzecia linijka
        }    
    }
    */
}