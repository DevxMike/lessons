#include <stdio.h>

int main(void){
    char c;
    int i = 0;
    
    printf("Podaj wyrazy oddzielone spacja:\n");

    while(c = getchar()){
        if((c != ' ') && (c != '\n')){
            putchar(c); 
            ++i;
        }
        else if (c == ' '){
            printf("#%d ", i);
            i = 0;
        }
        
        if(c == '\n'){
            printf("#%d\n", i);
            break;
        }
    }
    return 0;
}