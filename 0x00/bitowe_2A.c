#include <stdio.h>
#include "bitowe_2_common.h"
//wczytanie N bajtow i wypisanie ciagow bitow parzystosci

int main(void){
    printf("Podaj n: ");
    scanf("%d", &bytes);
    clear_buff();
    get_n_bytes();
    print_result();
    return 0;
}