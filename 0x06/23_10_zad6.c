#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
    srand(0); //inicjalizacja generatora liczb losowych

    for(int i = 0; i < 10; ++i){
        printf("Przykladowa losowa: %d\n", 1 + (rand() % 1000));
        //rand() % 7 liczby z przedziału od 0 do 6
        //rand() % 7 + 1, liczby z przedziałi 1 do 7 
    }
}