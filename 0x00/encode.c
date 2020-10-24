#include <stdio.h>
#include <string.h>
#define print_exp(x) printf(#x "%d", x)
int main(void){
    char word[65] = {0};
    unsigned char channel[7][64] = {0};
    int n, c_len;
    int byte = 0, k = 7;

    printf("Podaj slowo o dlugosci z zakresu 1 - 64 znaki: ");
    scanf("%s", word);
    n = strlen(word);
    c_len = n + (8 - n % 8); //długość pojedyńczego kanału

    for(int i = 0; i < c_len; ++i){
        for(int j = 0; j < 7; ++j){
            channel[j][byte] |= (word[i] & (1 << j))? 1 << k : 0;
        }
        if(k > 0){
            --k;
        }
        else{
            k = 7;
            ++byte;
        }
    }
    
    for(int i = 0; i < 7; ++i){
        for(int j = 0; j < (c_len * 8) / 64; ++j){
            printf("%02X", (unsigned)channel[i][j]);
        }
    }
    putchar('\n');
    return 0;
}