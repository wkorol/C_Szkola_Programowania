#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define MAXTYT 40
#define MAXAUT 40
#define MAXKS 10 //maksymalna liczba ksiazek
struct ksiazka {
    char tytul[MAXTYT];
    char autor[MAXAUT];
    float wartosc;
    bool delete;
};
void usunwiersz();

int main(void)
{
    struct ksiazka bibl[MAXKS]; //tablica struktur
    
    
    struct ksiazka update[MAXKS];
    int licznik = 0;
    char odp;
    int i,j = 0;
    int index, licznikp;
    int deleted = 0;
    int done = 0;
    for(i=0; i<MAXKS; i++)
    {
        bibl[i].delete = false;
    }
    FILE * pksiazki;
    int rozmiar = sizeof(struct ksiazka);
    if((pksiazki = fopen("ksiazki.dat", "r")) == NULL)
    {
        fputs("Nie moge otworzyc pliku ksiazki.dat\n", stderr);
        exit(1);
    }
    rewind(pksiazki); //Przejscie na poczatek pliku
    while (licznik<MAXKS && fread(&bibl[licznik], rozmiar, 1, pksiazki) == 1) {
        if(licznik == 0)
            puts("Biezaca zawartosc pliku ksiazki.dat:");
        printf("%s by %s: %.2f zl\n", bibl[licznik].tytul, bibl[licznik].autor, bibl[licznik].wartosc);
        printf("Chcesz dokonać jakiś zmian? (t\\n)\n");
        scanf("%c", &odp);
        usunwiersz();
        while (strchr("tn", odp) == 0) {
            printf("Nieprawidłowa wartość, wprowadź t lub n\n");
            scanf("%c", &odp);
            usunwiersz();
        }
        if(odp == 't')
        {
            printf("Dokonujemy zmian, co chcesz zrobić?\n");
            printf("a) Zmiana tytułu\n");
            printf("b) Zmiana autora\n");
            printf("c) Zmiana wartości\n");
            printf("d) Usuń książkę\n");
            printf("e) Zapisz lub pozostaw bez zmian\n");
            scanf("%c", &odp);
            usunwiersz();
            while (strchr("abcde", odp) == NULL) {
                printf("Nieprawidłowa wartość\n");
                printf("a) Zmiana tytułu\n");
                printf("b) Zmiana autora\n");
                printf("c) Zmiana wartości\n");
                printf("d) Usuń książkę\n");
                printf("e) Zapisz lub pozostaw bez zmian\n");
                scanf("%c", &odp);
                usunwiersz();
            
            }
            
            while(odp != 'e' && bibl[licznik].delete == false)
            {
                switch (odp) {
                    case 'a':
                        printf("Nowy tytuł: ");
                        scanf("%s", bibl[licznik].tytul);
                        usunwiersz();
                        break;
                    case 'b':
                        printf("Nowy autor: ");
                        scanf("%s", bibl[licznik].autor);
                        usunwiersz();
                        break;
                    case 'c':
                        printf("Nowa wartość: ");
                        scanf("%f", &bibl[licznik].wartosc);
                        usunwiersz();
                        break;
                    case 'd':
                        printf("Książka usunięta\n");
                        bibl[licznik].delete = true;
                        deleted++;
                        break;
                }
                if(bibl[licznik].delete == false)
                {
                    printf("a) Zmiana tytułu\n");
                    printf("b) Zmiana autora\n");
                    printf("c) Zmiana wartości\n");
                    printf("d) Usuń książkę\n");
                    printf("e) Zapisz lub pozostaw bez zmian\n");
                    scanf("%c", &odp);
                    usunwiersz();
                }
            }
            
        }
        licznik++;
    }
    fclose(pksiazki);
    
    
    
    
    licznikp = licznik - deleted;

    
    for(i = 0; i<MAXKS; i++)
    {
        while(j<MAXKS && done == 0)
        {
            if(bibl[j].delete == false)
            {
                strcpy(update[i].autor, bibl[j].autor);
                strcpy(update[i].tytul, bibl[j].tytul);
                update[i].wartosc = bibl[j].wartosc;
                done = 1;
            }
                j++;
        }
        done = 0;
    }
    
    
    if(licznikp == MAXKS)
    {
        fputs("Plik ksiazki.dat jest pelny.", stderr);
        exit(2);
    }
    
    
    puts("Podaj nowe tytuly ksiazek.");
    puts("Aby zakonczyc, wcisnij [enter] na poczatku wiersza.");
    while (licznikp < MAXKS && gets(update[licznikp].tytul) != NULL && update[licznikp].tytul[0] != '\0') {
        puts("Teraz podaj autora.");
        gets(update[licznikp].autor);
        puts("Teraz podaj wartosc.");
        scanf("%f", &update[licznikp++].wartosc);
        while(getchar() != '\n')
            continue;
        if(licznikp < MAXKS)
            puts("Podaj nastepny tytul.");
    }
    
    puts("Oto lista Twoich ksiazek:");
    for(index = 0; index < licznikp; index++)
        printf("%s, autor: %s, cena: %.2f zl\n", update[index].tytul, update[index].autor, update[index].wartosc);
    pksiazki = fopen("ksiazki.dat", "w");
    
    for(index = 0;index < licznikp; index++)
        if(update[index].delete == false)
            fwrite(&update[index], rozmiar, 1, pksiazki);
    fclose(pksiazki);
    
    return 0;
    
    
}

void usunwiersz()
{
    while (getchar() != '\n') {
        continue;
    }
}
