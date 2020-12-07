#include <stdio.h>
#include <stdlib.h> 

void safe_free(void** pt){
    if(*pt != NULL){
        free(*pt);
        *pt = NULL;
    }
}

void alloc_for_pt(int** pt, size_t q){
    *pt = (int*)malloc(q);
    printf("%p\n", *pt);
    safe_free((void**)pt);
}
int main(void){
    int* pt_arr = NULL;
    /*
    .
    .
    .
    */
    //jakieś tam miejsce programu:
    if(pt_arr = (int*) malloc(sizeof(int) * 10)){
        printf("Sukces\n");
        for(int* pt = pt_arr; pt < pt_arr + 10; ++pt){
            printf("%p\n", pt);
        }
        free(pt_arr);
    }
    else{
        printf("Nie udalo sie zaalokowac miejsca\n");
    }

    int cols, rows;
    rows = cols = 3;
    int** arr_2D = NULL;
    arr_2D = (int**) malloc(sizeof(int*) * rows); //tworzenie "wierszy", tablicy ze wskaźnikami
    arr_2D[0] = (int*) malloc(sizeof(int) * cols * rows);
    for(int i = 0; i < rows; ++i){
        arr_2D[i] = arr_2D[0] + i * cols;
    }
    free(arr_2D[0]);
    free(arr_2D);

    int* pt = NULL;

    alloc_for_pt(&pt, sizeof(int));
    printf("%p\n", pt);
    return 0;
}