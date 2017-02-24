//ksiazka.c -- spis jednej ksiazki
#include <stdio.h>
#define MAXTYT 41 //maksymalna dlugosc tytulu + 1
#define MAXAUT 31 //maksymalna dlugosc autora + 1

struct ksiazka {
    char tytul[MAXTYT];
    char autor[MAXAUT];
    float wartosc;
}; //koniec szablonu struktury

int main()
{
    struct ksiazka bibl; //deklaracja bibl jako zmiennej typu ksiazka
    printf("Podaj tytul ksiazki.\n");
    gets(bibl.tytul); //dostep do skladnika "tytul"
    printf("Teraz podaj autora.\n");
    gets(bibl.autor);
    printf("Teraz podaj wartosc.\n");
    scanf("%f", &bibl.wartosc);
    printf("%s, autor: %s, cena: %.2f zl\n", bibl.tytul, bibl.autor, bibl.wartosc);
    printf("%s: \"%s\" (%.2f zl)\n", bibl.autor, bibl.tytul, bibl.wartosc);
    return 0;
    
}