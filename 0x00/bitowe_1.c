#include <stdio.h>
#include <stdint.h>
#define A_ZEROS_MASK 0x55555555 //0101....
//~A_ZEROS_MASK = 1010... 
void test_print(uint32_t pair, uint8_t bits){
    if(bits > 0){
        putchar((pair & (1 << (bits - 1)))? '1' : '0');
        test_print(pair, bits - 1);
    }
}

uint32_t setaz(uint32_t pair){
    return pair & A_ZEROS_MASK; 
}
uint32_t setbz(uint32_t pair){
    return pair & ~A_ZEROS_MASK;
}
uint32_t swap(uint32_t pair){
    //najpierw przemnazany pare przez maske, aby bity ai byly wyzerowane
    //przesuwamy w lewo o jedno miejsce nasza liczbe b 111111... 010101... 101010
    //to samo z a tylko ze w przeciwnym kierunku 111111... 101010... 010101
    return ((pair & A_ZEROS_MASK) << 1) | ((pair & ~A_ZEROS_MASK) >> 1);
}
uint32_t seta(uint32_t pair, uint16_t a){
    pair = setaz(pair); //wyzerowac skladowe ai 
    for(int i = 31, j = 15; i > 0; i = i - 2, --j){
        if(a & (1 << j)){ // j = 0, a = 1100,  a & (1 << j) = 1100 & 0001 -> 0
            pair |= (1 << i);
        }
    }
    return pair;
}
uint16_t geta(uint32_t pair){
    uint16_t tmp = 0;
    for(int i = 31, j = 15; i > 0; i = i - 2, --j){
        if(pair & (1 << i)){ // i = 31 (a15), pair = 1010.... & (1 << i) = 0010.... & 1000.... -> 0
            tmp |= (1 << j);
        }
    }
    return tmp;
}
uint32_t join(uint16_t a, uint16_t b){ //1010, 1010 >> 1, bi 0101
    return seta(((seta(0, b)) >> 1), a);
}
uint32_t add(uint32_t pair){
    return join(geta(pair) + geta((pair << 1)), 0);
}
uint32_t sub(uint32_t pair){
    return join(geta(pair) - geta((pair << 1)), 0);
}
int main(void){
    uint32_t test = 0xFFFFFFFF;
    uint16_t test_a = 0x1;
    uint16_t test_b = 0xA;
    printf("%20s", "Przed zerowaniem a: ");
    test_print(test, 32);
    putchar('\n');
    test = setaz(test);
    printf("%20s", "Przed zamiana: ");
    test_print(test, 32);
    putchar('\n');
    printf("%20s", "Po zamianie: ");
    test = swap(test);
    test_print(test, 32);
    putchar('\n');
    printf("%20s", "Ponowna zamiana: ");
    test = swap(test);
    test_print(test, 32);
    putchar('\n');
    test = seta(test, test_a);
    printf("%20s", "Ustawienie a: ");
    test_print(test, 32);
    putchar('\n');
    test_a = geta(test);
    printf("%20s", "Wyciagniecie a: ");
    test_print(test_a, 16);
    putchar('\n');
    printf("%20s", "Join op: ");
    test_print(join(test_a, test_b), 32);
    putchar('\n');
    printf("%20s", "Suma: ");
    test = add(join(test_a, test_b));
    test_print(test, 32);
    putchar('\n');
    printf("%20s", "Roznica: ");
    test = sub(join(test_b, test_a));
    test_print(test, 32);
    putchar('\n');
    return 0;
}