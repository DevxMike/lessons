#include <stdio.h>

int main(void){
    int ilosc = 0;
    int tmp = 0;
    for(int i = 2; i < 20000; ++i){
        for(int j = 2; j < i; ++j){
            if((i % j) == 0) ++tmp;
        }
        if(tmp == 0){
            ++ilosc;
        }
        tmp = 0;
    }
    printf("%d\n", ilosc);
}