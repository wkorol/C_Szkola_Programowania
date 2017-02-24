//ksiazki.c -- spis wielu ksiazek
#include <stdio.h>
#define MAXTYT 40
#define MAXAUT 40
#define MAXKS 100 //maksymalna liczba ksiazek
struct ksiazka {
    char tytul[MAXTYT];
    char autor[MAXAUT];
    float wartosc;
};

int main(void)
{
    struct ksiazka bibl[MAXKS]; //tablica struktur typu ksiazka
    int licznik = 0;
    int index;
    printf("Podaj tytul ksiazki.\n");
    printf("Aby zakonczyc wcisnij [enter] na poczatku wiersza.\n");
    while (licznik < MAXKS && gets(bibl[licznik].tytul) != NULL && bibl[licznik].tytul[0] != '\0') {
        printf("Teraz podaj autora.\n");
        gets(bibl[licznik].autor);
        printf("Teraz podaj wartosc.\n");
        scanf("%f", &bibl[licznik++].wartosc);
        while (getchar() != '\n')
            continue; //Czysci wiersz wejsciowy
        if(licznik < MAXKS)
            printf("Podaj kolejny tytul.\n");
        
    }
    
    printf("Oto lista Twoich ksiazek:\n");
    for(index = 0; index<licznik; index++)
        printf("%s, autor: %s, cena: %.2f zl\n", bibl[index].tytul, bibl[index].autor, bibl[index].wartosc);
    
}