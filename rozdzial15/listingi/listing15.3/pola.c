// pola.c -- definiuje i korzysta z pol

#include <stdio.h>
//przezroczystosc widocznosc
#define TAK 1
#define NIE 0
//style linii
#define CIAGLA 0
#define KROPKI 1
#define KRESKI 2
//barwy podstawowe
#define NIEB 4
#define ZIEL 2
#define CZER 1
//barwy mieszane
#define CZARNY 0
#define ZOLTY (CZER | ZIEL)
#define FIOLET (CZER | NIEB)
#define ZIELNIEB (ZIEL | NIEB)
#define BIALY (CZER | ZIEL | NIEB)

struct wl_okna {
    
    unsigned int przezrocz : 1;
    unsigned int kolor_wyp : 3;
    unsigned int : 4;
    unsigned int wid_ramki :1;
    unsigned int kolor_ramki : 3;
    unsigned int styl_ramki : 2;
    unsigned int : 2;
    
};

const char * kolory [8] = {"czarny", "czerwony", "zielony", "zolty", "niebieski", "fioletowy", "zielononiebieski", "bialy"};

int main(void)
{
    //tworzy i inicjalizuje strukture typu wl_okna
    struct wl_okna okno = {TAK, ZOLTY, TAK, ZIEL, KRESKI};
    printf("Okno jest %s.\n", okno.przezrocz == TAK? "przezroczyste": "nieprzezroczyste");
    printf("Ramka jest narysowana linia ");
    switch (okno.styl_ramki) {
        case CIAGLA:
            printf("ciagla.\n");
            break;
        case KROPKI:
            printf("wykropkowana\n");
            break;
        case KRESKI:
            printf("kreskowana.\n");
            break;
        default:
            printf("nieznanego typu\n");
            break;
    }
    printf("Kolorem wypelnienia jest %s.\n", kolory[okno.kolor_wyp]);
    printf("Kolorem ramki jest %s.\n", kolory[okno.kolor_ramki]);
    okno.przezrocz = NIE;
    okno.kolor_wyp = BIALY;
    okno.kolor_ramki = FIOLET;
    okno.styl_ramki = CIAGLA;
    printf("Po dokonaniu zmian okno jest %s.\n", okno.przezrocz == TAK? "przezroczyste": "nieprzezroczyste");
    printf("Ramka jest narysowana linia ");
    switch (okno.styl_ramki) {
        case CIAGLA:
            printf("ciagla.\n");
            break;
        case KROPKI:
            printf("wykropkowana\n");
            break;
        case KRESKI:
            printf("kreskowana.\n");
            break;
        default:
            printf("nieznanego typu\n");
            break;
    }
    printf("Kolorem wypelnienia jest %s.\n", kolory[okno.kolor_wyp]);
    printf("Kolorem ramki jest %s.\n", kolory[okno.kolor_ramki]);
    return 0;
}