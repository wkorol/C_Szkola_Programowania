//odwroc4.c -- odwraca 4 ostatnie bity liczb calkowitych

#include <stdio.h>
char * do_binar(int, char *);
int odwroc_koniec(int num, int bity);

int main(void)
{
    char bin_lan[8*sizeof(int) + 1];
    int liczba;
    puts("Ten program przelicza liczby calkowite na system binarny.");
    puts("Wpisanie danych nienumerycznych konczy dzialanie programu");
    
    
    
    while (scanf("%d", &liczba) == 1) {
        printf("%d to inaczej %s\n", liczba, do_binar(liczba, bin_lan));
        printf("Odwrocenie ostatnich 4 bitow daje\n%s\n", do_binar(odwroc_koniec(liczba, 4),bin_lan));
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