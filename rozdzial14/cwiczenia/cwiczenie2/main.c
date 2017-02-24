#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

struct miesiace {
    char skrot[4];
    char nazwa[20];
    int dni;
    int numer;
};

void usunwiersz();
int oblicz(const struct miesiace *wsk, int dzien, int n);
int main(int argc, const char * argv[]) {
    
    int dzien;
    int rok;
    char mies[10];
    int nrmies;
    int i=0;
    int znaleziono = 0;
    int przestepny = 0;
    
    
    struct miesiace miesiac[12] = {
        
        {
            "sty",
            "styczeń",
            31,
            1
        },
        {
            "lut",
            "luty",
            28,
            2
        },
        {
            "mar",
            "marzec",
            31,
            3
        },
        {
            "kwi",
            "kwiecień",
            30,
            4
        },
        {
            "maj",
            "maj",
            31,
            5
        },
        {
            "cze",
            "czerwiec",
            30,
            6
        },
        {
            "lip",
            "lipiec",
            31,
            7
        },
        {
            "sie",
            "sierpień",
            31,
            8
        },
        {
            "wrz",
            "wrzesień",
            30,
            9
        },
        {
            "paz",
            "październik",
            31,
            10
        },
        {
            "lis",
            "listopad",
            30,
            11
        },
        {
            "gru",
            "grudzień",
            31,
            12
        }
        
        
    };
    
    puts("Wprowadź dzień");
    scanf("%d", &dzien);
    usunwiersz();
    puts("Wprowadź miesiąc: (Numer, nazwa lub nazwa skrócona)");
    scanf("%s", mies);
    usunwiersz();
    puts("Wprowadź rok:");
    scanf("%d", &rok);

    
    //Przestepnosc
    if(rok%4 == 0 || rok%400 == 0)
        przestepny = 1;
    if(przestepny == 1)
    {
        printf("Rok, który wprowadziłeś jest przestępny.\n");
        miesiac[1].dni = 29;
    }
    
    
    
    
    if (isdigit(*mies)) {
        nrmies = atoi(mies);
        while(znaleziono == 0 && i < 12) {
            if (nrmies == miesiac[i].numer) {
                znaleziono = 1;
            }
         if(znaleziono == 0)
             i++;
        }
    }
    
    if(strlen(mies) == 3)
    {
        while(znaleziono == 0 && i<12)
        {
            if(strcmp(miesiac[i].skrot, mies) == 0)
                znaleziono = 1;
            
            if(znaleziono == 0)
                i++;
        }
        
    }
    else
    {
        while(znaleziono == 0 && i<12)
        {
            if(strcmp(miesiac[i].nazwa, mies) == 0)
                znaleziono = 1;
            
            if(znaleziono == 0)
                i++;
        }
        
    }
    
    if (dzien > miesiac[i].dni) {
        printf("Dzień, który wprowadziłeś jest za duży dla %s\n", miesiac[i].nazwa);
        exit(1);
    }
    
    if(znaleziono == 1)
    printf("Całkowita liczba dni w roku do podanego dnia włącznie: %d\n", oblicz(miesiac, dzien, i));
    else
        printf("Nie znaleziono takiego miesiąca\n");
    
    
}

void usunwiersz()
{
    while(getchar() != '\n')
        continue;
}

int oblicz(const struct miesiace *wsk, int dzien, int n)
{
    int i;
    int wynik = 0;
    
    for (i=0; i<n; i++) {
        wynik+=wsk[i].dni;
    }
    wynik+=dzien;
    
    return wynik;
}
