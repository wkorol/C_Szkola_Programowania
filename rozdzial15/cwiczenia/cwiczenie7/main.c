//
//  main.c
//  cwiczenie7
//
//  Created by Wiktor Korol on 12.03.2016.
//  Copyright © 2016 Wiktor Korol. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#define TYP_MASKA 0xFF
#define ROZMIAR_MASKA 0x7F00

#define LEWO 0x00000
#define SRODEK 0x08000
#define PRAWO 0x10000
#define WYR_MASKA 0x18000

#define WYTLUSZCZENIE 0x20000
#define KURSYWA 0x40000
#define PODKRESLENIE 0x80000
#define STYL_MASKA 0xE0000

typedef unsigned int czcionka;

void zmien(czcionka *c);
void wyswietl(czcionka *c);
void zmianaczcionki(czcionka *c);
void menu();
void poprawnosc_odp(char odp);
void usunenter();
void rozmiarczcionki(czcionka *c);
void zmianawyrownania(czcionka *c);
void wybor_funkcji(czcionka *c);

int main(int argc, const char * argv[]) {
   
    czcionka przyklad = 1 | 12<<8  | LEWO;
    
    wyswietl(&przyklad);
    
    return 0;
}



void wyswietl(czcionka *c) {
    
    printf("Typ   Rozmiar     Wyrównanie    Wytl.   Kurs.    Podkr.\n");
    printf("%d %6d ", TYP_MASKA & *c, (ROZMIAR_MASKA & *c)>>8);

    switch (WYR_MASKA & *c) {
        case LEWO:
            printf("%13s", "lewo");
            break;
        case SRODEK:
            printf("%13s", "srodek");
            break;
        case PRAWO:
            printf("%13s", "prawo");
            break;
        default:
            break;
    }
    
    printf("%13s %7s %8s\n", (*c&WYTLUSZCZENIE) == WYTLUSZCZENIE?"wl":"wyl", (*c&KURSYWA) == KURSYWA?"wl":"wyl", (*c&PODKRESLENIE) == PODKRESLENIE?"wl":"wyl");
    
    menu();
    wybor_funkcji(c);
    
    
}

void menu()
{
    printf("t) zmiana czcionki r) zmiana rozmiaru w) zmiana wyrownania\n");
    printf("b) przelacz wytluszczenie i) przelacz kursywe\n");
    printf("u) przelacz podkreslenie\n");
    printf("k) wyjscie\n");
    
}

void poprawnosc_odp(char odp) {
    
    while (strchr("trwbiuk", odp) == 0) {
        printf("Nieprawidłowa odpowiedź, wprowadź jeszcze raz\n");
        menu();
        scanf("%c", &odp);
        usunenter();
    }
    
}

void usunenter() {
    while (getchar() != '\n') {
        continue;
    }
}

void wybor_funkcji(czcionka *c) {
    
    char odp;
    
    scanf("%c", &odp);
    usunenter();
    
    
    switch (odp) {
        case 't':
            zmianaczcionki(c);
            break;
        case 'r':
            rozmiarczcionki(c);
            break;
        case 'w':
            zmianawyrownania(c);
            break;
        case 'b':
            *c ^= (STYL_MASKA & WYTLUSZCZENIE);
            break;
        case 'i':
            *c ^= (STYL_MASKA & KURSYWA);
            break;
        case 'u':
            *c ^= (STYL_MASKA & PODKRESLENIE);
            break;
    }
    
    if(odp != 'k')
        wyswietl(c);
    
}

void zmianaczcionki(czcionka *c)
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

    
    *c &= ~TYP_MASKA;
    typ = typ & TYP_MASKA;
    *c |= typ;
}

void rozmiarczcionki(czcionka *c)
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

    *c &= ~ROZMIAR_MASKA;
    rozmiar = (rozmiar<<8) & ROZMIAR_MASKA;
    *c |= rozmiar;
    
}

void zmianawyrownania(czcionka *c)
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
    
    *c &= ~WYR_MASKA;
    
    switch (odp) {
        case 'l':
            *c |= LEWO;
            break;
        case 's':
            *c |= SRODEK;
            break;
        case 'p':
            *c |= PRAWO;
            break;
    }

    
}
