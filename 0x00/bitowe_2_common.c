#include "bitowe_2_common.h"
#include <stdio.h>
#define MAX_BYTES 10000

static byte bytes_arr[MAX_BYTES];
static byte transformed[MAX_BYTES / 8], transformed_input[MAX_BYTES / 8];
static int series;

int bytes = 0;

void clear_buff(void){ //clear input (stdin) 
    char c;
    while((c = getchar()) != EOF  && c != '\n'){
        continue;
    }
}
void transform_bytes(void){
    series = (bytes % 8)? (bytes / 8) + 1 : bytes / 8;

    int p = 8, s = 0;
    for(int i = 0; i < bytes; ++i){
        int tmp = 0;
        if(--p < 0){
            p = 7;
            ++s;
        }
        for(int j = 7; j >= 0; --j){
            if(bytes_arr[i] & (1 << j)){
                ++tmp; //get quantity
            }
        }
        if(tmp % 2){
            transformed[s] |= (1 << p);
        }
    }
}
void get_n_bytes(void){ //get n bytes and transform them into series of bits
    for(int i = 0; i < bytes; ++i){
        bytes_arr[i] = getchar();
    }
    clear_buff();
    transform_bytes();
}
void get_transformed(void){

}
void compare_print_result(void){ //compare result to the input
    for(int i = 0; i < series; ++i){
        if(transformed[i] != transformed_input[i]){
            printf("Tablice transformacji sa niezgodne.\n");
            return;
        }
    }
    printf("Podana tablica jest poprawna.\n");
}
void print_byte_bin(byte b, int n){ //writing single byte
    if(n > 0){
        putchar(
            (b & (1 << (n - 1)))? '1' : '0'
        );
        print_byte_bin(b, n - 1);
    }
}
void print_result(void){ //writing all the bytes
    for(int i = 0; i < series; ++i){
        print_byte_bin(transformed[i], 8);
        putchar('\n');
    }
}