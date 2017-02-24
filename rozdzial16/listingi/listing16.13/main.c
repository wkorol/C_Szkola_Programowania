//konw.c -- przelicza wspolrzedne kartezjanskie na biegunowe
#include <stdio.h>
#include <math.h>
#define RAD_NA_ST (180/3.141592654)
typedef struct biegun {
    double dlugosc;
    double kat;
} BIEGUN;

typedef struct kartez {
    double x;
    double y;
} KARTEZ;

BIEGUN kart_na_bieg(KARTEZ);
int main(void)
{
    KARTEZ wejscie;
    BIEGUN wynik;
    puts("Podaj wspolrzedne x, y; wpisanie q konczy program:");
    while (scanf("%lf %lf", &wejscie.x, &wejscie.y) == 2) {
        wynik = kart_na_bieg(wejscie);
        printf("dlugosc = %0.2f, kat = %0.2f\n", wynik.dlugosc, wynik.kat);
    }
    
    return 0;
}

BIEGUN kart_na_bieg(KARTEZ k)
{
    BIEGUN b;
    b.dlugosc = sqrt(k.x * k.x + k.y * k.y);
    if (b.dlugosc == 0) {
        b.kat = 0.0;
    }
    else
        b.kat = RAD_NA_ST * atan2(k.y, k.x);
    return b;
}