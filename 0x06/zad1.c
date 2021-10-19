#include <math.h>
#include <stdio.h> //std - standard, i-input, o-output
#include <stdbool.h> //typ bool logiczny

int main(){
    int R, G, B;

    printf("Podaj R: ");
    scanf("%d", &R);


    printf("Podaj G: ");
    scanf("%d", &G);


    printf("Podaj B: ");
    scanf("%d", &B);

    if(R == 0 && G == 0 && B == 0){
        printf("czarny\n");
    }
    else if(R == 0 && G == 0 && B == 1){
        printf("niebieski\n");
    }
    else if(R == 0 && G == 1 && B == 0){
        printf("zielony\n");
    }
    else if(R && !G && !B){ //to samo co R == 1 && G == 0 && B == 0
        printf("czerwony\n");
    }
    else if(R && !G && B){
        printf("fioletowy\n");
    }
    else if(R && G && !B){
        printf("zolty\n");
    }
    else if(R && G && B){
        printf("bialy\n"); 
    }
    return 0;
}

/* zadanie 4 drugi arkusz
    if(wyrazenie){ //jesli wyrazenie jest prawdziwe 
        //instrukcje, ktore maja sie wykonac gdy wyrazenie jest prawdziwe
    }
    else{ //w przeciwnym wypadku gdy wyrazenie nie jest prawdziwe
        //instrukcje, ktore maja sie wykonac gdy wyrazenie nie jest prawdziwe
    }
    

    if(wyrazenie1){
        //instrukcje
    }    
    else if(wyrazenie2){
        //instrukcje
    }
    else if(wyrazenien){
        //instrukcje
    }
    else{

    }

    if(wyrazenie){
        //instrukcje
    }

    if(wyrazenie1){
        //instrukcje
    }    
    else if(wyrazenie2){
        //instrukcje
    }
    else if(wyrazenien){
        //instrukcje
    } 
    */
    /*double liczba;

    printf("Podaj liczbe: ");
    scanf("%lf", &liczba);

        if(liczba < -10){
        printf("czerwony\n");
        }
        else if(liczba > -10 && liczba < 0){
            printf("zielony\n");
        }
        else if(liczba > 0 && liczba < 10){
            printf("niebieski\n");
        }
        else if(liczba > 10){
            printf("zolty\n");
        }
        else{
            printf("czarny\n");
        }

    return 0;
*/

/*zadanie 3 new 
{
        double a, b, c, d;

        printf("Podawaj liczby w notacji wykladniczej. \n");

        printf("Podaj pierwsza liczbe: ");
        scanf("%lf", &a);
        printf("Twoja liczba to: %.2lf \n", a);

        printf("Podaj druga liczbe: ");
        scanf("%lf", &b);
        printf("Twoja druga liczba to: %.2lf \n", b);

        printf("Podaj trzecia liczbe: ");
        scanf("%lf", &c);
        printf("Twoja trzecia liczba to: %.2lf \n", c);

        printf("Podaj czwarta liczbe: ");
        scanf("%lf", &d);
        printf("Twoja czwarta liczba to: %.2lf \n", d);

        double dodawanie = a + b;
        double odejmowanie = c - d;

        printf("Wynik odejmowania liczb %.2lf i %.2lf to %.2lf \n", c, d, odejmowanie);
        printf("Wynik dodawania liczb %.2lf i %.2lf to %.2lf \n", a, b, dodawanie);

    return 0;
}
*/

/*{ //zadanie 6 new 
    double a;
    double pierwiastek;
    double potega;
    double wartoscBezwzgledna;
    double zaokraglenia1, zaokraglenia2;  

    printf("Podaj pierwsza liczbe: ");
    scanf("%lf", &a);
    pierwiastek = sqrt(a);
    printf("Podaj druga liczbe: ");
    scanf("%lf", &a);
    potega = pow(a, 2);
    printf("Podaj trzecia liczbe: ");
    scanf("%lf", &a);
    wartoscBezwzgledna = fabs(a);
    printf("Podaj czwarta liczbe: ");
    scanf("%lf", &a);
    zaokraglenia1 = floor(a);
    zaokraglenia2 = ceil(a);

    printf("sqrt = %lf, pow = %lf, fabs = %lf\n", pierwiastek, potega, wartoscBezwzgledna);
    printf("orig = %lf, floor = %lf, ceil = %lf\n", a, zaokraglenia1, zaokraglenia2);

    return 0;
}*/

/*// zad. 6.
    {
        double a, b, c, d;
        double pierwiastek;
        double potega;
        double wartoscBezwzgledna;
        double zaokraglenia;

        printf("Podaj pierwsza liczbe: ");
        scanf("%f", a);
        printf("Podaj druga liczbe: ");
        scanf("%f", b);
        printf("Podaj trzecia liczbe: ");
        scanf("%f", c);
        printf("Podaj czwarta liczbe: ");
        scanf("%f", d);

        sqrt(a);
    }
    //*/

/*// zad. 3.
    {
        double a, b, c, d;
        double dodawanie = a + b;
        double odejmowanie = c - d;

        printf("Podawaj liczby w notacji wykladniczej. \n");

        printf("Podaj pierwsza liczbe: ");
        scanf("%lf", &a);
        printf("Twoja liczba to: %.2lf \n", a);

        printf("Podaj druga liczbe: ");
        scanf("%lf", &b);
        printf("Twoja druga liczba to: %.2lf \n", b);

        printf("Podaj trzecia liczbe: ");
        scanf("%lf", &c);
        printf("Twoja trzecia liczba to: %.2lf \n", c);

        printf("Podaj czwarta liczbe: ");
        scanf("%lf", &d);
        printf("Twoja czwarta liczba to: %.2lf \n", d);

        printf("Wynik odejmowania liczb %.2lf i %.2lf to %.2lf \n", a, b, odejmowanie);
        printf("Wynik dodawania liczb %.2lf i %.2lf to %.2lf \n", c, d, dodawanie);

        return 0; //co jest zle?
    }
    //*/