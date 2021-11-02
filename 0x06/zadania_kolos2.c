#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 100

int main(void){
    int parzyste[N], nieparzyste[N], nowa_tablica[2 * N];
    int i = 0, j = 0; 

    srand(time(NULL));
    
    while(i < N && j < N){
        int temp = rand() % 100;

        if(i < N && temp % 2){
            nieparzyste[i] = temp;
            ++i;
        }
        if(j < N && !(temp % 2)){
            parzyste[j] = temp;
            ++j;
        }
    }

    for(int i = 0, j = 0, k = 0; i < 2 * N; ++i){
        if(i % 2){
            nowa_tablica[i] = nieparzyste[j];
            ++j;
        }
        else{
            nowa_tablica[i] = parzyste[k];
            ++k;
        }
    }

    for(int i = 0; i < 2*N; ++i){
        printf("%d ", nowa_tablica[i]);
    }

    return 0;
}

/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(void){
    int random_integers[N] = { 0 };
    int arg1, arg2, min_diff;

    srand(time(NULL));

    for(int i = 0; i < N; ++i){
        random_integers[i] = 1 + (rand() % 999);
    }

    for(int i = 0; i < N; ++i){
        printf("%d ", random_integers[i]);
    }

    arg1 = random_integers[0];
    arg2 = random_integers[1];
    min_diff = abs(arg1 - arg2);

    for(int i = 0; i < N - 1; ++i){    
        for(int j = i + 1; j < N; ++j){
            if(abs(random_integers[i] - random_integers[j]) < min_diff){
                arg1 = random_integers[i]; arg2 = random_integers[j];
                min_diff = abs(arg1 - arg2);
            }
        }
    }

    putchar('\n');

    printf("Min diff: %d, between: %d n %d\n", 
        min_diff, arg1, arg2);

    return 0;
}*/


/*

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 12

int main(void){
    int random_integers[N] = { 0 };

    srand(time(NULL));

    for(int i = 0; i < N; ++i){
        random_integers[i] = 1 + (rand() % 999);
    }

    for(int i = 0; i < N; ++i){
        printf("%d ", random_integers[i]);
    }

    putchar('\n');

    for(int i = 0; i < N; ++i){
        for(int n = 1; n <= N - 1; ++n){
            int temp;

            if(random_integers[n-1] > random_integers[n]){
                temp = random_integers[n - 1];
                random_integers[n - 1] = random_integers[n];
                random_integers[n] = temp;
            }
        }
    }

    for(int i = 0; i < N; ++i){
        printf("%d ", random_integers[i]);
    }

    putchar('\n');

    return 0;
}*/


/*#include <stdio.h>

int main(void){
    int kwota, ilosc_nominalow[9] = { 0 }; //ilości danych nominałów
    const int nominaly[9] = { 500, 200, 100, 50, 20, 10, 5, 2, 1 }; 

    printf("Podaj ilosc pieniedzy: ");
    scanf("%d", &kwota);

    for(int i = 0; i < 9; ++i){
        if(kwota == 0){
            break;
        }

        if(kwota / nominaly[i] > 0){
            ilosc_nominalow[i] = kwota / nominaly[i];
            kwota = kwota - (ilosc_nominalow[i] * nominaly[i]);
        }
    }

    for(int i = 0; i < 9; ++i){
        if(ilosc_nominalow[i] != 0){
            printf("%d x %d\n", ilosc_nominalow[i], nominaly[i]);
        }
    }

    return 0;
}*/



/*#include <stdio.h>

int main(void){
    int liczba;
    int ilosc_modyfikacji = 0;
    int max_modyfikacji = 0, max_liczba = 1;

    //printf("Podaj liczbe: ");
    //scanf("%d", &liczba);


    for(int i = 1; i <= 1000; ++i){
        liczba = i;

        while(1){
            if(liczba == 1){
                break;
            }
            else if((liczba % 2) == 1){
                liczba *= 3;
                ++liczba;
                ++ilosc_modyfikacji;
            }
            else if((liczba % 2) == 0){
                liczba /= 2;
                ++ilosc_modyfikacji;
            }
        }

        if(ilosc_modyfikacji > max_modyfikacji){
            max_modyfikacji = ilosc_modyfikacji;
            max_liczba = i;
        }
    }

    printf("liczba z max mod: %d\nilosc modyfikacji: %d\n", max_liczba, max_modyfikacji);

    return 0;
}*/