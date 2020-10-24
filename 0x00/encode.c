#include <stdio.h>
#include <string.h> //strlen()

int main(void){
    char word[65] = {0};
    unsigned char channel[7][64] = {0};
    int n, c_len;
    int byte = 0, k = 7;

    printf("Podaj slowo o dlugosci z zakresu 1 - 64 znaki: ");
    scanf("%s", word);
    n = strlen(word);
    c_len = n + (8 - n % 8); //długość pojedyńczego kanału
                            //8 - n % 8

                            //int i = 4;
                            //int x = (i == 4)? 10 : 0; -> x = 10;
                            //int x = (i < 4)? 10 : 0; -> x = 0;
                            //operator warunkowy ?:
                            //00001111 & (1 << 0) = 00001111 & 00000001 = 00000001 -> true
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