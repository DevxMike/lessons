#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define N 100
#define X 10
#define Y 81

// zad. 9. - zadeklaruj char[], wczytaj tekst do niego - użyj gets(), wyświetl go, używając puts()
void Zadanie9()
{
    char text[30];
    printf("Wpisz tekst: ");
    gets(text);
    puts(text);
} //?? co jest źle?

// Zadanie 7 - zadeklaruj tablicę liczb całkowitych o 100 elementach; wypełnij ją losowymi liczbami od 10 do 90; przeszukaj tablicę,
// znajdź max i min element i wyświetl je
void Zadanie7()
{
    srand( time( NULL ) );
    int tab[N];
    int min;
    int max;

    for(int i = 0; i < N; i++)
    {
        tab[ i ] = X + (rand() % Y);
    }

    min = tab[0];
    max = tab[0];

    for(int i = 1; i < N; i++)
    {
        if(min > tab[i]){
            min = tab[i];
        }

        if(max < tab[i]){
            max = tab[i];
        }
    }

     printf("element min = %d\nelement max = %d\n", min, max);
}

void zadanie12(void){
    int first[ 8 ] = { 5, 6, 7, 8, 9, 10, 11, 12 };
    int second[ 6 ] = { 15, 20, 25, 30, 35, 40 };
    int third[ 12 ];

    int i, j, k; 

    for(i = 0, j = 2, k = 0; k < 4; ++i, ++j, ++k){
        third[k] = first[i] - second[j];
    }

    for(; k < 8; ++i, ++k){
        third[k] = first[i] * first[i - 4];
    }

    for(i = 4, j = 0; k < 12; ++i, ++j, ++k){
        third[k] = first[i] + second[j];
    }

    for(k = 0; k < 12; ++k){
        printf("%d ", third[k]);
    }
}

void Zadanie3()
{
    int a, b;
    float dzielenie;
    int arg1, arg2;

    printf("Podaj pierwsza liczbe: ");
    scanf("%d", &a);
    printf("Podaj druga liczbe (rozna od pierwszej): ");
    scanf("%d", &b);

    if(a >= b){
        arg1 = a;
        arg2 = b;
    }
    else if(a <= b){
        arg1 = b;
        arg2 = a;
    }
    
    if(arg2 == 0){
        printf("Podaj argument rozny od zera: ");
        scanf("%d", &arg2);
    }

    dzielenie = (float) arg1 / arg2;

    printf("Wynik dzielenia: %f\n", dzielenie);
}

// zad. 4 - lotto chances – oblicz liczbe możliwych kombinacji w lotto – gdy losuje się 6 liczb ze zbioru 49 liczb, użyj pętli zagnieżdżonych
void Zadanie4()
{
    unsigned int a, b, c, d, e, f;
    unsigned long liczbaKombinacji = 0;

    for(a = 1; a <= 49; a++)
    {
        for(b = 1; b <= 49; b++)
        {
            for(c = 1; c <= 49; c++)
            {
                for(d = 1; d <= 49; d++)
                {
                    for(e = 1; e <= 49; e++)
                    {
                        for(f = 1; f <= 49; f++)
                        {
                            printf("%lu\n", liczbaKombinacji++);
                        }
                    }
                }
            }
        }
    }
    printf("Liczba kombinacji = %lu\n", liczbaKombinacji);
}

void Zadanie1()
//Napisz program z dwoma pętlami (jedna zagnieżdżona w drugiej), każda z pętli powinna iterować od 1 do 10.
//Pętla główna powinna pomijać swoje iteracje za pomocą instrukcji continue, gdy jej zmienna jest nieparzysta.
//Pętla zagnieżdżona powinna wypisywać wartość swojej zmiennej. Następnie, gdy zmienna pętli zagnieżdżonej jest większa od zmiennej pętli głównej,
//pętla zagnieżdżona powinna spowodować,
//że przejdziemy do kolejnej iteracji pętli głównej (w tym przypadku skorzystaj z etykiety i instrukcji continue).
{
    
    printf("Im here\n");
    for(unsigned int a = 1; a <= 10; a++)
    {
        if(a % 2 == 1)
        {
            continue;
        }

        for(unsigned int i = 1; i <= 10; i++)
        {
            if(a < i)
            {
                break;
            }
            //printf("%u ", i);
        }

        putchar(a + '0'); //trick ;)
        putchar(' ');
    }
}

void f(){
    int ile_mozliwosci;
    int i = 5;

    for (i = 0, ile_mozliwosci = 0; i < 10; i++)
    {
        ++ile_mozliwosci;
    }

    printf("%d\n", ile_mozliwosci);
}

int main(void){
    f();

    return 0;
}