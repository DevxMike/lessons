#include <stdio.h>

int ile(int n){
    int ilosc = 0;
    int tmp = 0;
    for(int i = 2; i <= n; ++i){
        for(int j = 2; j < i; ++j){
            if((i % j) == 0) ++tmp;
        }
        if(tmp == 0){
            ++ilosc;
        }
        tmp = 0;
    }
    return ilosc;
}

void wypelnij_pierwsze(int* buffor, int wartosc){
    int tmp = 0;
    int iter = 0;
    for(int i = 2; i <= wartosc; ++i){
        for(int j = 2; j < i; ++j){
            if((i % j) == 0) ++tmp;
        }
        if(tmp == 0){
            buffor[iter++] = i;
        }
        tmp = 0;
    }
}

int main(void){
    int n;
    int pierwsze[2262] = {0};
    int ile_liczb;
    int ile_rozwiazan = 0;
    printf("Podaj liczbe z przedzialu <0, 20000): ");
    scanf("%d", &n);
    ile_liczb = ile(n);
    wypelnij_pierwsze(pierwsze, n);
    
    //for(int i = 0; i < ile_liczb; ++i){
    //   printf("pierwsze[%d] = %d\n", i, pierwsze[i]);
    //}
    //printf("%d\n\n", ile_liczb);
    int temp_sum = 0;
    for(int i = 0; i < ile_liczb; ++i){
        for(int j = 0; j < ile_liczb; ++j){
            for(int k = 0; k < ile_liczb; ++k){

                
            }
        }
    }
    printf("%d\n", ile_rozwiazan);
    return 0;
}