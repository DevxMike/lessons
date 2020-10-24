#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h> //isalpha()

int str_hex_to_int(const char* buff, int halves, int ret_val){
    if(halves > 0){
        ret_val *= 16;
        if(isalpha(*buff)){
            switch(*buff){
                case 'A':
                    ret_val += 10;
                break;
                case 'B':
                    ret_val += 11;
                break;
                case 'C':
                    ret_val += 12;
                break;
                case 'D':
                    ret_val += 13;
                break;
                case 'E':
                    ret_val += 14;
                break;
                case 'F':
                    ret_val += 15;
                break;
            }
        }
        else{
            ret_val += (*buff - '0');
        } 
        return str_hex_to_int(++buff, halves - 1, ret_val);
    }
    return ret_val;
}


int main(void){
    char cmd[20];
    char word[65] = {0};
    int byte = 0, k = 7;
    char tmp[64 * 7 + 1];
    unsigned char channels[7][64] = {0};
    int n, c_len, channel = 0;
    char* str_pt;
    printf("Podaj polecenie: ");
    scanf("%s", cmd);
    getchar();
    if(strcmp(cmd, "encode") == 0){
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
                channels[j][byte] |= (word[i] & (1 << j))? 1 << k : 0;
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
                printf("%02X", (unsigned)channels[i][j]);
            }
        }
        putchar('\n');
        }
    else if(strcmp(cmd, "decode") == 0){
        scanf("%s", tmp);
        str_pt = tmp;
        n = strlen(tmp);
        c_len = n / 7;
        //stdin -> F088...
        while(*str_pt != '\0'){ //konwersja string na bajty
            for(int i = 0; i < c_len / 2; ++i){
                channels[channel][i] = str_hex_to_int(str_pt, 2, 0);
                str_pt += 2;
            }
            channel++;
        }

        for(int i = 0; i < 64; ++i){
            for(int j = 0; j < 7; ++j){
                word[i] |= (channels[j][byte] & (1 << k))? 1 << j : 0;
            }
            if(k > 0){
                --k;
            }
            else{
                k = 7;
                ++byte;
            }
        }
        printf("%s\n", word);
    }
    return 0;
}