//dowidz.c -- przyklad uzycia atexit()
#include <stdio.h>
#include <stdlib.h>
void koniec(void);
void wpadka(void);
int main(void)
{
    int n;
    atexit(koniec); //rejestruje funkcje koniec
    puts("Podaj liczbe calkowita:");
    if (scanf("%d", &n) != 1) {
        puts("To nie jest liczba calkowita!");
        atexit(wpadka); //rejestruje funkcje wpadka
        exit(EXIT_FAILURE);
    }
    printf("%d jest %s.\n", n, (n%2 == 0)? "parzysta" : "nieparzysta");
    return 0;
}
void koniec(void)
{
    puts("Na tym konczymy kolejny wspanialy program firmy");
    puts("Hustawka Software");
}
void wpadka(void)
{
    puts("Firma Hustawka Software sklada szczere kondolencje");
    puts("z powodu awarii programu");
}