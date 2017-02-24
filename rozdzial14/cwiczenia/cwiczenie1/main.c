
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct miesiace {
    char skrot[4];
    char nazwa[20];
    int dni;
    int numer;
};


int oblicz(const struct miesiace * wsk, char * nazwa);
int main(int argc, const char * argv[]) {
    char nazwa[10];
    
    struct miesiace miesiac[12] = {
      
        {
            "sty",
            "styczeń",
            31,
            0
        },
        {
            "lut",
            "luty",
            28,
            1
        },
        {
            "mar",
            "marzec",
            31,
            2
        },
        {
            "kwi",
            "kwiecień",
            30,
            3
        },
        {
            "maj",
            "maj",
            31,
            4
        },
        {
            "cze",
            "czerwiec",
            30,
            5
        },
        {
            "lip",
            "lipiec",
            31,
            6
        },
        {
            "sie",
            "sierpień",
            31,
            7
        },
        {
            "wrz",
            "wrzesień",
            30,
            8
        },
        {
            "paz",
            "październik",
            31,
            9
        },
        {
            "lis",
            "listopad",
            30,
            10
        },
        {
            "gru",
            "grudzień",
            31,
            11
        }
        
        
    };
    
    printf("Wprowadź nazwę miesiąca\n");
    gets(nazwa);
    
    printf("Liczba dni: %d\n", oblicz(miesiac, nazwa));
    
    
    
    
}



int oblicz(const struct miesiace * wsk, char * nazwa)
{
    int znaleziono = 0;
    int wynik = 0;
    while (*wsk->nazwa != '\0' && znaleziono == 0) {
        wynik+=wsk->dni;
        if (strcmp(wsk->nazwa, nazwa) == 0) {
            znaleziono = 1;
        }
        
        if(znaleziono==0)
        wsk++;
    }
    
    if(znaleziono == 1)
    {
       return wynik;
    }
    else
    {
        printf("Niepoprawna nazwa miesiąca\n");
        exit(1);
    }
    
    
    
}