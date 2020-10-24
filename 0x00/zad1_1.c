#include <stdio.h>

void print_hash_row(){
    for(int i = 0; i < 4; ++i){
        putchar('#');
    }
}
void print_white_row(){
    for(int i = 0; i < 4; ++i){
        putchar(' ');
    }
}
/*typedef void (*pf)(void); //ewentualnie

pf pointer[2] = {
    print_hash_row, print_white_row
};
*/

void print_even_line(int n){
    for(int j = 0; j < 3; ++j){
        for(int i = 0; i < n; ++i){
            //pointer[i % 2](); //ewentualnie
            if((i % 2) == 0){
                print_hash_row();
            }
            else{
                print_white_row();
            }
        }
        putchar('\n');
    }
}
void print_odd_line(int n){
    for(int j = 0; j < 3; ++j){
        for(int i = 0; i < n; ++i){
            //pointer[(i + 1) % 2]();
            if((i % 2) == 0){
                print_white_row();
            }
            else{
                print_hash_row();
            }
        }
        putchar('\n');
    }
}

int main(void){
    int n; 
    printf("Podaj liczbe: ");
    scanf("%d", &n);

    for(int i = 0; i < n; ++i){
        if(i % 2 == 0){
            print_even_line(n);
        }
        else{
            print_odd_line(n);
        }
    }
    return 0;
}

/*
    i = 0; i < 5; ++i
    i == 0 -> i % 2 = 0
    i == 1 -> i % 2 = 1
    i == 2 -> i % 2 = 0
    typedef void (*pf)(void); //ewentualnie

    pf pointer[2] = {
        print_hash_row, print_white_row
    };
*/