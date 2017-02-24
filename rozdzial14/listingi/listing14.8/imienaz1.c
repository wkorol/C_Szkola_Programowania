//imienaz1.c -- wykorzystuje wskazniki do struktury
#include <stdio.h>
#include <string.h>
struct daneos {
    char imie[20];
    char nazw[20];
    int litery;
};

void pobierz(struct daneos *);
void oblicz(struct daneos *);
void pokaz(const struct daneos *);
int main(void)
{
    struct daneos osoba;
    pobierz(&osoba);
    oblicz(&osoba);
    pokaz(&osoba);
    return 0;
}

void pobierz (struct daneos *wst)
{
    printf("Podaj swoje imie.\n");
    gets(wst->imie);
    printf("Podaj swoje nazwisko.\n");
    gets(wst->nazw);
    
}

void oblicz(struct daneos * wst)
{
    wst->litery = strlen(wst->imie) + strlen(wst->nazw);
}

void pokaz (const struct daneos * wst)
{
    printf("%s %s, Twoje imie i nazwisko skladaja sie z %d liter.\n", wst->imie, wst->nazw, wst->litery);
}