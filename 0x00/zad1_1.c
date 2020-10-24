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
typedef void (*pf)(void);
pf pointer[2] = {
    print_hash_row, print_white_row
};
void print_even_line(int n){
    for(int j = 0; j < 3; ++j){
        for(int i = 0; i < n; ++i){
            pointer[i % 2]();
            
        }
        putchar('\n');
    }
}
void print_odd_line(int n){
    for(int j = 0; j < 3; ++j){
        for(int i = 0; i < n; ++i){
            pointer[(i + 1) % 2]();
            
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