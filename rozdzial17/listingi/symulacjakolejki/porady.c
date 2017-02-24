//porady.c -- korzysta z interfejsu "kolejka"
#include <stdio.h>
#include <stdlib.h> //dla funkcji rand i srand
#include <time.h> //dla funkcji time
#include "kolejka.h"
#define MIN_W_GODZ 60.0
bool nowyklient(double x); //czy jest nowy klient
Pozycja czasklienta(long kiedy); //ustawia parametry klienta
int main(void)
{
    Kolejka kol;
    Pozycja tymcz; //dane o nowym kliencie
    int godz; //liczba godzin symulacji
    int nagodz; //srednia liczba nowych klientow na godz
    long cykl, gran_cyklu; //licznik petli, granica
    long odeslani = 0; //klienci odeslani z braku miejsca
    long klienci = 0; //klienci ktorzy weszli do kolejki
    long obsluzeni = 0; //obsluzeni w czasie symulacji
    long suma_kol = 0; //kumulatywna dlugosc kolejki
    int czas_czek = 0; //czas do obsluzenia nastepnego klienta
    double min_na_kl; //sredni czas miedzy przybylymi klientami
    InicjujKolejke(&kol);
    srand(time(0)); //losowa inicjalizacja funkcji rand()
    puts("Studium przypadku: Punkt porad Zygmunta Prywaciarza");
    puts("Podaj liczbę godzin do symulacji:");
    scanf("%d", &godz);
    gran_cyklu = MIN_W_GODZ * godz;
    puts("Podaj srednia liczbe klientow w ciagu godziny:");
    scanf("%d", &nagodz);
    min_na_kl = MIN_W_GODZ / nagodz;
    for (cykl = 0; cykl < gran_cyklu; cykl++) {
        if(nowyklient(min_na_kl))
        {
            if(PelnaKolejka(&kol))
                odeslani++;
            else
            {
                klienci++;
                tymcz = czasklienta(cykl);
                Ustaw(tymcz, &kol);
            }
        }
        if(czas_czek <= 0 && !PustaKolejka(&kol))
        {
            Odlacz(&tymcz, &kol);
            czas_czek = tymcz.czaskons;
            suma_kol += cykl - tymcz.przybycie;
            obsluzeni++;
        }
        if(czas_czek > 0)
            czas_czek--;
        suma_kol += LiczbaPozycji(&kol);
    }
        if(klienci > 0)
        {
            printf("Klienci przyjeci do kolejki: %ld\n", klienci);
            printf("          klienci obsluzeni: %ld\n", obsluzeni);
            printf("           klienci odeslani: %ld\n", odeslani);
            printf("    srednia dlugosc kolejki: %.2f\n", (double)suma_kol/gran_cyklu);
            printf("    sredni czas oczekiwania: %.2f minut\n", (double)suma_kol/obsluzeni);
        }
        else
            puts("Brak klientow!");
        return 0;
    }

//x = sredni czas w minutach miedzy wejsciem kolejnych klientow
//wartoscia zwracana jest True, jesli w tej minucie pojawil sie klient

bool nowyklient(double x)
{
    if(rand() * x / RAND_MAX < 1)
        return true;
    else
        return false;
}

//Kiedy jest czasem wejscia klienta do kolejki
//funkcja zwraca strukture typu Pozycja z czasem przybycia
//ustawionym na kiedy i czasem konsultacji ustawionym wartosc losowa z przedzialu 1-3
Pozycja czasklienta(long kiedy) {
    Pozycja klient;
    klient.czaskons = rand() % 3 + 1;
    klient.przybycie = kiedy;
    return klient;
}