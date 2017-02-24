//klub.c -- korzysta z drzewa binarnego
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "drzewo.h"
char menu(void);
void dodajzw(Drzewo * wd);
void usunzw(Drzewo * wd);
void pokazzw(const Drzewo * wd);
void szukajzw(const Drzewo * wd);
void wyswpoz(Pozycja pozycja);
void duzelit(char * lan);
int main(void)
{
    Drzewo zwierz;
    char wybor;
    InicjujDrzewo(&zwierz);
    while ((wybor = menu()) != 'q') {
        switch (wybor) {
            case 'd':
                dodajzw(&zwierz);
                break;
            case 'w':
                pokazzw(&zwierz);
                break;
            case 's':
                szukajzw(&zwierz);
                break;
            case 'l':
                printf("%d zwierzat w klubie.\n", LiczbaPozycji(&zwierz));
                break;
            case 'u':
                usunzw(&zwierz);
                break;
            default:
                puts("Blad w instrukcji switch");
        }
    }
    UsunWszystko(&zwierz);
    puts("Do widzenia.");
    return 0;
}

char menu(void)
{
    int ch;
    puts("Klub Zwierzat Domowych - baza danych czlonkow");
    puts("Podaj litere odpowiadajaca wybranej opcji:");
    puts("d) Dodaj zwierze       w) Wyswietl liste zwierzat");
    puts("l) Liczba zwierzat     s) szukaj zwierzecia");
    puts("u) usun zwierze        q) koniec");
    while ((ch=getchar()) != EOF) {
        while(getchar() != '\n') //porzuca reszte wiersza
            continue;
        ch = tolower(ch);
        if(strchr("dwlsuq", ch ) == NULL)
            puts("Wpisz d,w,l,s,u lub q:");
        else
            break;
    }
    if(ch == EOF) //sprawia ze EOF konczy program
        ch = 'q';
    return ch;
}

void dodajzw(Drzewo * wd)
{
    Pozycja tymcz;
    if(PelneDrzewo(wd))
        puts("Brak wolnych miejsc w klubie!");
    else
    {
        puts("Podaj imie zwierzecia:");
        gets(tymcz.imie);
        puts("Podaj gatunek zwierzecia:");
        gets(tymcz.gatunek);
        duzelit(tymcz.imie);
        duzelit(tymcz.gatunek);
        DodajPozycje(&tymcz, wd);
        
    }
    
}

void pokazzw(const Drzewo * wd)
{
    if(PusteDrzewo(wd))
        puts("Brak pozycji!");
    else
        Przejdz(wd, wyswpoz);
}
void wyswpoz(Pozycja pozycja)
{
    printf("Zwierze %-19s Gatunek: %-19s\n", pozycja.imie, pozycja.gatunek);
}

void szukajzw(const Drzewo * wd)
{
    Pozycja tymcz;
    if (PusteDrzewo(wd)) {
        puts("Brak pozycji!");
        return; //wychodzi z funkcji jesli drzewo jest puste
    }
    puts("Podaj imie zwierzecia ktore chcesz znalezc:");
    gets(tymcz.imie);
    puts("Podaj gatunek zwierzecia:");
    gets(tymcz.gatunek);
    duzelit(tymcz.imie);
    duzelit(tymcz.gatunek);
    printf("%s, %s ", tymcz.imie, tymcz.gatunek);
    if (WDrzewie(&tymcz, wd)) {
        printf("jest czlonkiem klubu.\n");
    }
    else
        printf("nie jest czlonkiem klubu\n");
}

void usunzw(Drzewo * wd)
{
    Pozycja tymcz;
    if(PusteDrzewo(wd))
    {
        puts("Brak pozycji!");
        return;
    }
    
    puts("Podaj imie zwierzecia ktore chcesz usunac:");
    gets(tymcz.imie);
    puts("Podaj gatunek zwierzecia:");
    gets(tymcz.gatunek);
    duzelit(tymcz.imie);
    duzelit(tymcz.gatunek);
    printf("%s, %s ", tymcz.imie, tymcz.gatunek);
    if(UsunPozycje(&tymcz, wd))
        printf("zostal(a) usuniety/a z klubu.\n");
    else
        printf("nie jest czlonkiem klubu.\n");
}

void duzelit(char *lan)
{
    while (*lan != '\0') {
        *lan = toupper(*lan);
        lan++;
    }
}