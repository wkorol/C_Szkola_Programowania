//
//  bieg.c
//  
//
//  Created by Wiktor Korol on 25.07.2015.
//
//

#include <stdio.h>
#define S_W_M 60 // liczba sekund w 1 minucie
#define S_W_H 3600 // liczba sekund w 1 godzinie
int main(void)
{
    double dyst; //pokonany dystans w km
    double predkosc; //srednia predkosc w km/h
    int min, sek; //minuty i sekundy czasu biegu
    int czas; //czas biegu w samych sekundach
    double czas_km; //czas na 1 km w sekundach
    int min_km, sek_km; //minuty i sekundy czasu na 1km
    
    printf("Ten program zamienia Twoj czas w biegu na dowolny dystans\n");
    printf("na czas przebiegniecia 1 km oraz na srednia predkosc w km/h.\n");
    printf("Wpisz pokonana odleglosc w kilometrach.\n");
    scanf("%lf", &dyst); //%lf odczytuje wartosc typu double
    printf("Wpisz swoj czas w minutach i sekundach.\n");
    printf("Zacznij od podawania liczby minut.\n");
    scanf("%d", &min);
    printf("Teraz podaj liczbe sekund.\n");
    scanf("%d", &sek);
    czas = S_W_M * min + sek; // zamienia czas na liczbe sekund
    predkosc = dyst / czas * S_W_H; // km na sek x liczba sek w godzinie = km/h
    
    czas_km = (double) czas / dyst; // czas/ dystans = czas na km
    min_km = (int) czas_km / S_W_M; // oblicza liczbe pelnych minut
    sek_km = (int) czas_km % S_W_M; //oblicza liczbe pozostalych sekund
    
    printf("Przebiegles %1.2f km w czasie %d minut, %d sekund.\n", dyst, min, sek);
    printf("Odpowiada to przebiegnieciu 1 km w czasie %d minut", min_km);
    printf(" %d sekund.\nTwoja srednia predkosc to %1.2f km/h.\n", sek_km, predkosc);
    return 0;
    
}