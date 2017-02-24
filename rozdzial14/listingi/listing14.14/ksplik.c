//ksplik.c -- zapisuje zawartosc struktury w pliku
#include <stdio.h>
#include <stdlib.h>
#define MAXTYT 40
#define MAXAUT 40
#define MAXKS 10 //maksymalna liczba ksiazek
struct ksiazka {
    char tytul[MAXTYT];
    char autor[MAXAUT];
    float wartosc;
};

int main(void)
{
    struct ksiazka bibl[MAXKS]; //tablica struktur
    int licznik = 0;
    int index, licznikp;
    FILE * pksiazki;
    int rozmiar = sizeof(struct ksiazka);
    if((pksiazki = fopen("ksiazki.dat", "a+b")) == NULL)
    {
        fputs("Nie moge otworzyc pliku ksiazki.dat\n", stderr);
        exit(1);
    }
    rewind(pksiazki); //Przejscie na poczatek pliku
    while (licznik<MAXKS && fread(&bibl[licznik], rozmiar, 1, pksiazki) == 1) {
        if(licznik ==0)
            puts("Biezaca zawartosc pliku ksiazki.dat:");
        printf("%s by %s: %.2f zl\n", bibl[licznik].tytul, bibl[licznik].autor, bibl[licznik].wartosc);
        licznik++;
        
    }
    licznikp = licznik;
    if(licznik == MAXKS)
    {
        fputs("Plik ksiazki.dat jest pelny.", stderr);
        exit(2);
    }
    
    puts("Podaj nowe tytuly ksiazek.");
    puts("Aby zakonczyc, wcisnij [enter] na poczatku wiersza.");
    while (licznik < MAXKS && gets(bibl[licznik].tytul) != NULL && bibl[licznik].tytul[0] != '\0') {
        puts("Teraz podaj autora.");
        gets(bibl[licznik].autor);
        puts("Teraz podaj wartosc.");
        scanf("%f", &bibl[licznik++].wartosc);
        while(getchar() != '\n')
            continue;
        if(licznik < MAXKS)
            puts("Podaj nastepny tytul.");
    }
    
    puts("Oto lista Twoich ksiazek:");
    for(index = 0; index < licznik; index++)
        printf("%s, autor: %s, cena: %.2f zl\n", bibl[index].tytul, bibl[index].autor, bibl[index].wartosc);
    fwrite(&bibl[licznikp], rozmiar, licznik - licznikp, pksiazki);
    fclose(pksiazki);
    return 0;

    
}
