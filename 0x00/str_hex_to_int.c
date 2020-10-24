#include <stdio.h>
#include <ctype.h>


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
    int i = 0xFF;
    int j = 065;
    int k = 0b00001111;
    printf("%X\n", str_hex_to_int("FF", 2, 0));
    printf("%o\n", str_hex_to_int("FF", 2, 0));
    printf("%d\n", str_hex_to_int("FF", 2, 0));
}