//binar.c -- wyswietlanie liczb w systemie binarnym za pomoca operacji na bitach

#include <stdio.h>
char * do_binar(int, char *);
void pokaz_binar(const char *);
int odwroc_koniec(int num, int bity);

int main(void)
{
    char bin_lan[8*sizeof(int) + 1];
    int liczba;
    puts("Ten program przelicza liczby calkowite na system binarny.");
    puts("Wpisanie danych nienumerycznych konczy dzialanie programu");
    
    
    
    while (scanf("%d", &liczba) == 1) {
        do_binar(liczba, bin_lan);
        printf("%d to inaczej ", liczba);
        pokaz_binar(bin_lan);
        putchar('\n');
        do_binar(odwroc_koniec(liczba, 32),bin_lan);
        pokaz_binar(bin_lan);
        putchar('\n');
    }
    return 0;
}

char * do_binar(int n, char *wsk)
{
    int i;
    static int liczba = 8*sizeof(int);
    for (i=liczba-1; i>=0; i--, n>>=1) {
        wsk[i] = (01 & n) + '0';
    }
    wsk[liczba] = '\0';
    return wsk;
}
// wyswietl lancuch binarny w blokach po 4
void pokaz_binar(const char * lan)
{
    int i = 0;
    while (lan[i]) {
        putchar(lan[i]);
        if (++i % 4 == 0 && lan[i]) {
            putchar(' ');
        }
    }
}

int odwroc_koniec(int num, int bity)
{
    int maska = 0;
    int wartbit = 1;
    while (bity-- > 0) {
        maska|=wartbit;
        wartbit <<=1;
    }
    
    return num^maska;
}