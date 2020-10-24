#include <stdio.h>

int main(void){
    char c;
    int i = 0, j = 0;
    printf("Podaj wyrazy oddzielone spacja:\n");

    while(c = getchar()){
        if(c == '#'){
            while(((c = getchar()) != ' ') && (c != '\n')){
                j *= 10;
                j += c - '0'; //0 1 2 ... 9
                    //0 -> 70, 1 -> 71
                    //'1' -> 1, '1' - '0' = 1, '1' - '0' = 71 - 70 = 1 
            }
            if(i != j){
                printf("BLAD\n");
                break;
            }
            i = j = 0;
        }
        putchar(c);
        if(c == '\n') break;
        if(c != ' ') ++i;
    }
    return 0;
}