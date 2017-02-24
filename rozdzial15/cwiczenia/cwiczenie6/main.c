//
//  main.c
//  cwiczenie6
//
//  Created by Wiktor Korol on 12.03.2016.
//  Copyright © 2016 Wiktor Korol. All rights reserved.
//

#include <stdio.h>
#include <string.h>

//Wyłaczanie/Włączanie bitu
#define WLACZ 1
#define WYLACZ 0

//Wyrównanie
#define LEWA 0
#define SRODEK 1
#define PRAWA 2

struct wl_czcionki {
    
    unsigned int typ : 8;
    unsigned int rozmiar : 7;
    unsigned int wyr: 3;
    unsigned int wytl: 1;
    unsigned int kursywa: 1;
    unsigned int podkreslenie: 1;
    
    
};

void usunenter();
void wyswietlopcje();
void poprawnosc_odp(char odp);
void wybor_funkcji(struct wl_czcionki *czcionka, char odp);
void wyswietl_menu(struct wl_czcionki *czcionka);
void zmianaczcionki(struct wl_czcionki *czcionka);
void rozmiarczcionki(struct wl_czcionki *czcionka);
void zmianawyrownania(struct wl_czcionki *czcionka);

int main(int argc, const char * argv[]) {
    
    struct wl_czcionki czcionka;
    
    czcionka.typ = 1;
    czcionka.rozmiar = 12;
    czcionka.wyr = LEWA;
    czcionka.wytl = WYLACZ;
    czcionka.kursywa = WYLACZ;
    czcionka.podkreslenie = WYLACZ;
    
    
    wyswietl_menu(&czcionka);
    
    
    
    return 0;
}

void wyswietl_menu(struct wl_czcionki *czcionka)
{
    char wyr[10];
    char odp;
    
    switch (czcionka->wyr) {
        case SRODEK:
            strcpy(wyr, "środek");
            break;
        case LEWA:
            strcpy(wyr, "lewa");
            break;
        case PRAWA:
            strcpy(wyr, "prawa");
            break;
    }
    
    printf("Typ   Rozmiar     Wyrównanie    Wytl.   Kurs.    Podkr.\n");
    printf("%d    %d          %s          %s      %s       %s\n", czcionka->typ, czcionka->rozmiar, wyr, czcionka->wytl? "wl":"wyl",czcionka->kursywa? "wl":"wyl", czcionka->podkreslenie? "wl":"wyl");
    wyswietlopcje();
    
    
    scanf("%c", &odp);
    usunenter();
    poprawnosc_odp(odp);
    
    while(odp != 'k')
    {
        wybor_funkcji(czcionka, odp);
        switch (czcionka->wyr) {
            case SRODEK:
                strcpy(wyr, "środek");
                break;
            case LEWA:
                strcpy(wyr, "lewa");
                break;
            case PRAWA:
                strcpy(wyr, "prawa");
                break;
        }
        printf("Typ   Rozmiar     Wyrównanie    Wytl.   Kurs.    Podkr.\n");
        printf("%d    %d          %s          %s      %s       %s\n", czcionka->typ, czcionka->rozmiar, wyr, czcionka->wytl? "wl":"wyl",czcionka->kursywa? "wl":"wyl", czcionka->podkreslenie? "wl":"wyl");
        wyswietlopcje();
        scanf("%c", &odp);
        usunenter();
        poprawnosc_odp(odp);
        
    }
}

void wyswietlopcje()
{
    printf("t) zmiana czcionki r) zmiana rozmiaru w) zmiana wyrownania\n");
    printf("b) przelacz wytluszczenie i) przelacz kursywe\n");
    printf("u) przelacz podkreslenie\n");
    printf("k) wyjscie\n");
}
void usunenter() {
    while (getchar() != '\n') {
        continue;
    }
}

void poprawnosc_odp(char odp) {
    
    while (strchr("trwbiuk", odp) == 0) {
        printf("Nieprawidłowa odpowiedź, wprowadź jeszcze raz\n");
        wyswietlopcje();
        scanf("%c", &odp);
        usunenter();
    }
    
}

void wybor_funkcji(struct wl_czcionki *czcionka, char odp) {
    
        switch (odp) {
            case 't':
                zmianaczcionki(czcionka);
                break;
            case 'r':
                rozmiarczcionki(czcionka);
                break;
            case 'w':
                zmianawyrownania(czcionka);
                break;
            case 'b':
                czcionka->wytl = ~czcionka->wytl;
                break;
            case 'i':
                czcionka->kursywa = ~czcionka->kursywa;
                break;
            case 'u':
                czcionka->podkreslenie = ~czcionka->podkreslenie;
                break;
        }
    
}

void zmianaczcionki(struct wl_czcionki *czcionka)
{
    int typ;
    printf("Podaj typ czcionki (0 - 255): ");
    scanf("%d", &typ);
    usunenter();
    
    while (typ < 0 || typ > 255) {
        printf("Nieprawidłowa wartość (0-255), podaj jeszcze raz\n");
        scanf("%d", &typ);
        usunenter();
    }
    
    czcionka->typ = typ;
    
}

void rozmiarczcionki(struct wl_czcionki *czcionka)
{
    int rozmiar;
    printf("Podaj rozmiar (0 - 127): ");
    scanf("%d", &rozmiar);
    usunenter();
    
    while (rozmiar < 0 || rozmiar > 127) {
        printf("Nieprawidłowa wartość (0-127), podaj jeszcze raz\n");
        scanf("%d", &rozmiar);
        usunenter();
    }
    
    czcionka->rozmiar = rozmiar;
    
}

void zmianawyrownania(struct wl_czcionki *czcionka)
{
    char odp;
    printf("Wybierz wyrownanie:\n");
    printf("l) w lewo   s) na srodek    p)w prawo\n");
    scanf("%c", &odp);
    usunenter();
    
    while (strchr("lsp", odp) == 0) {
        printf("Nieprawidłowa odpowiedz\n");
        printf("Wybierz wyrownanie:\n");
        printf("l) w lewo   s) na srodek    p)w prawo\n");
        scanf("%c", &odp);
        usunenter();
    }
    
    switch (odp) {
        case 'l':
            czcionka->wyr = LEWA;
            break;
        case 's':
            czcionka->wyr = SRODEK;
            break;
        case 'p':
            czcionka->wyr = PRAWA;
            break;
    }
}


