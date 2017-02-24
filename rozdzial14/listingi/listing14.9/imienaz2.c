//imienaz2.c -- przekazuje i zwraca struktury
#include <stdio.h>
#include <string.h>
struct daneos {
    char imie[20];
    char nazw[20];
    int litery;
};

struct daneos pobierz(void);
struct daneos oblicz(struct daneos);
void pokaz(struct daneos);
int main(void)
{
    struct daneos osoba;
    osoba = pobierz();
    osoba = oblicz(osoba);
    pokaz(osoba);
    return 0;
}

struct daneos pobierz(void)
{
    struct daneos temp;
    printf("Podaj swoje imie\n");
    gets(temp.imie);
    printf("Podaj swoje nazwisko.\n");
    gets(temp.nazw);
    return temp;
}
struct daneos oblicz (struct daneos info)
{
    info.litery = strlen(info.imie) + strlen(info.nazw);
    return info;
}

void pokaz(struct daneos info)
{
    printf("%s %s, Twoje imie i nazwisko skladaja sie z %d liter.\n", info.imie, info.nazw, info.litery);
}
