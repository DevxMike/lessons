#include <stdio.h>
#include "bitowe_2_common.h"

int main(void){
    printf("Podaj n: ");
    scanf("%d", &bytes);
    clear_buff();
    printf("Podaj bajty:\n");
    get_n_bytes();
    printf("Podaj tablice transformacji:\n");
    get_transformed();
    compare_print_result();
    return 0;
}