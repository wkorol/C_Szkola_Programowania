//filmy1.c -- korzystanie z tablicy struktur
#include <stdio.h>
#define ROZT 45 //rozmiar tablicy przechowujacej tytul
#define FMAX 5 //maksymalna liczba filmow
struct film {
    char tytul[ROZT];
    int ocena;
};

int main(void) {
    struct film filmy[FMAX];
    int i = 0;
    int j;
    puts("Podaj pierwszy tytul filmu");
    while (i<FMAX && gets(filmy[i].tytul) !=NULL && filmy[i].tytul[0] != '\0') {
        puts("Podaj Twoja ocene <0-10>:");
        scanf("%d", &filmy[i++].ocena);
        while (getchar() != '\n')
            continue;
        puts("Podaj nastepny tytul filmu (pusty wiersz konczy program):");
    }
    
    if(i==0)
        printf("Nie wpisano zadnych danych");
    else
        printf("Oto lista filmow:\n");
    for(j=0; j<i; j++)
        printf("Film: %s Ocena: %d\n", filmy[j].tytul, filmy[j].ocena);
    printf("Do widzenia!\n");

}