#include <stdio.h>
#include <math.h>

int main(void){
    int f_based, t_based;

    printf("Podaj liczbe w systemie piatkowym: ");
    scanf("%d", &f_based);
    printf("Podaj liczbe w systemie trojkowym: ");
    scanf("%d", &t_based);

    int tmp = 1;
    int i;
    int count = 0; 
    int sum = 0; 
    int n = f_based;

    printf("%d (5)\n", f_based);

    do {
        n /= 10;
        ++count;
    } while (n != 0);

    for(i = count - 1; i >= 0; ++i){
        tmp = pow(10, i);
        printf("%d * %d", i/tmp, pow(5, i));

    }

    return 0;
}

/*#include <stdio.h>
#include <math.h>

int main(void){
    int number;
    int sum = 0;

    printf("Podaj liczbe: ");
    scanf("%d", &number);

    printf("%d -> suma cyfr:", number);

    while(number > 0){
        sum += number % 10;
        number /= 10;
    }

    printf(" %d\n%d -> suma cyfr:", sum, sum);

    int tmp = 0;

    while(1){
       if(sum == 0 && tmp < 10){
           sum = tmp;
           break;
       }
       else if(sum == 0){
           sum = tmp;
           tmp = 0;
       }
       tmp += sum % 10;
       sum /= 10;
    }

    printf(" %d\n", sum);

    return 0;
}*/

/*#include <stdio.h>
#include <math.h>
#define N 15


int main(void){

    int tab[N] = {0};
    int tab2[N] = {0};
    int liczba;
    unsigned int licznik = 0, licznik2 = 0;

    for(unsigned i = 0; i < N; i++){ //wczytywanie
        unsigned y = i + 1;

        printf("Podaj %u liczbe: ", y);
        scanf("%u", &liczba);

        if(liczba % 2 == 0){
            tab[licznik] = liczba;
            licznik++;
        }
        else if(liczba % 2 != 0){
            tab2[licznik2] = liczba;
            licznik2++;
        }
    }

    for(unsigned i = 0; i < licznik; i++){
        printf("%u ", tab[i]);
    }

    printf("\n");

    for(unsigned i = 0; i < licznik2; i++){
        printf("%u ", tab2[i]);
    }

    printf("\n");

    int iloczyn = 1;

    for(unsigned i = 0; i < licznik; i++){
        iloczyn *= tab[i];
    }    

    printf("Iloczyn %d liczb wynosi: %d\n", licznik, iloczyn);
    
    int suma = 0;

    for(unsigned i = 0; i < licznik2; i++){
        suma += tab2[i];
    }

    double srednia = (1.0*suma)/licznik2;

    printf("Srednia %d liczb wynosi: %lf\n", licznik2, srednia);


    return 0;
}*/

/*#include <stdio.h>
#include <math.h>

int main(void){
    int ceny_bazowe[5] = { 0 };
    int suma_bazowa = 0;
    double suma_rabat = 0;

    for(int i = 0; i < 5; ++i){
        printf("Podaj cene %d: ", i + 1);
        scanf("%d", &ceny_bazowe[i]);
    }

    printf("%d -> %.2lf\n", ceny_bazowe[0], 1.0*ceny_bazowe[0]);
    suma_bazowa += ceny_bazowe[0];
    suma_rabat += 1.0*ceny_bazowe[0];

    for(int i = 1; i < 5; ++i){
        int count = 0;

        for(int j = 0; j <= i; ++j){
            if(ceny_bazowe[i] == ceny_bazowe[j]){
                ++count;
            }
        }

        double tmp = 0.0;

        switch(count){ //ilość takich samych elementów przed elementem, który sprawdzaliśmy
            case 0: tmp = ceny_bazowe[i]; break; //brak elementów przed tym który sprawdzamy
            case 1: tmp = ceny_bazowe[i] * 0.5; break; //jeden element przed tym, który sprawdzamy
            case 2: tmp = ceny_bazowe[i] * 0.33; break; // dwa elementy, -||-
            case 3: tmp = ceny_bazowe[i] * 0.25; break; //trzy -||-
            case 4: tmp = ceny_bazowe[i] * 0.2; break; //cztery -||-
        }

        printf("%d -> %.2lf\n", ceny_bazowe[i], tmp);
        
        suma_rabat += tmp;
        suma_bazowa += ceny_bazowe[i];
    }

    printf("cena bazowa: %d \tcena po rabacie: %.2lf\n", suma_bazowa, suma_rabat);

    return 0;
}*/